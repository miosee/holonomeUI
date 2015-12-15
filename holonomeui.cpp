#include "holonomeui.h"
#include "ui_holonomeui.h"
#include "../can/CanProp.h"
#include "../can/CanNetwork.h"
#include <QTextStream>
#include <QString>
#include <math.h>


#define canIntToLSB(data) ((BYTE)(data & 0x00FF))
#define canIntToMSB(data) ((BYTE)(data >> 8))


HolonomeUI::HolonomeUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HolonomeUI)
{
    Position initPos;

    ui->setupUi(this);
    ui->lineEdit_CurPosX->setReadOnly(true);
    ui->lineEdit_CurPosY->setReadOnly(true);
    ui->lineEdit_CurPosA->setReadOnly(true);
    // Initialisation des champs
    isConnected = false;
    initPos.set(-1, -1, -1);
    curPos.append(initPos);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerOut()));
    timer->start(1);
}

HolonomeUI::~HolonomeUI()
{
    if (isConnected) {
        CAN_Uninitialize(PCAN_USBBUS1);
    }
    delete ui;
}

void HolonomeUI::on_pushButton_Pcan_clicked()
{
    if (isConnected) {
        isConnected = false;
        ui->pushButton_Pcan->setText("Connect");
        if (CAN_Uninitialize(PCAN_USBBUS1) == PCAN_ERROR_OK) {
            ui->display_Pcan->setText("Disconnected");
        } else {
            ui->display_Pcan->setText("Deco. error");
        }
    } else {
        if (CAN_Initialize(PCAN_USBBUS1, PCAN_BAUD_500K) == PCAN_ERROR_OK) {
            ui->pushButton_Pcan->setText("Disconnect");
            ui->display_Pcan->setText("Connected");
            isConnected = true;
        } else {
            ui->display_Pcan->setText("Con. error");
        }
    }
}

void HolonomeUI::timerOut()
{
    TPCANStatus status;
    TPCANMsg msg;
    TPCANTimestamp timeStamp;
    static float t0 = -1;
    float t;
    Position pos;

    if (isConnected) {
        status = CAN_Read(PCAN_USBBUS1, &msg, &timeStamp);
        switch(status) {
        case PCAN_ERROR_OK:
            switch(msg.ID) {
            case CO_PROP_POS:
                if (t0 < 0) {
                    t0 = (float)timeStamp.millis/1000.0;
                    t = 0;
                } else {
                    t = (float)timeStamp.millis/1000.0 - t0;
                }
                pos.setFromCanMsg(msg);
                if (pos != curPos.last()) {
                    curPos.append(pos);
                    curPosTime.append(t);
                    ui->lineEdit_CurPosX->setText(QString("%1").arg(pos.getX(), 0, 'g', 3));
                    ui->lineEdit_CurPosY->setText(QString("%1").arg(pos.getY(), 0, 'g', 3));
                    ui->lineEdit_CurPosA->setText(QString("%1").arg(pos.getA(), 0, 'g', 3));
                }
                break;
            case CO_PROP_STATUS:
                switch ((propStateType)msg.DATA[0]) {
                case DISABLED:
                    ui->display_PropState->setText("Disabled");
                    break;
                case STANDING:
                    ui->display_PropState->setText("Standing");
                    break;
                case RELATIVE_MOVE:
                    ui->display_PropState->setText("Moving");
                    break;
                case TRAJECTORY:
                    ui->display_PropState->setText("Trajectory");
                    break;
                case TEST:
                    ui->display_PropState->setText("Test");
                    break;
                case TRAJ_START_OUT:
                    ui->display_PropState->setText("Start out");
                    break;
                case TRAJ_END_OUT:
                    ui->display_PropState->setText("End out");
                    break;
                case TRAJ_START_OBS:
                    ui->display_PropState->setText("Start obs");
                    break;
                case TRAJ_END_OBS:
                    ui->display_PropState->setText("End obs");
                    break;
                case TRAJ_NO_WAY:
                    ui->display_PropState->setText("No Way");
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
        case PCAN_ERROR_QRCVEMPTY:
            ui->display_Pcan->setText("Connected");
            break;
        case PCAN_ERROR_BUSLIGHT:
            ui->display_Pcan->setText("Bus Light");
            break;
        case PCAN_ERROR_BUSHEAVY:
            ui->display_Pcan->setText("Bus Heavy");
            break;
        case PCAN_ERROR_BUSOFF:
            ui->display_Pcan->setText("Bus Off");
            break;
        default:
            break;
        }
    }
}


void HolonomeUI::on_pushButton_PropStateEnable_clicked()
{
    TPCANMsg msg;

    msg.MSGTYPE = PCAN_MESSAGE_STANDARD;
    msg.ID = CN_PROPULSION;
    msg.DATA[0] = PROP_ENABLE;
    msg.LEN = 1;
    CAN_Write(PCAN_USBBUS1, &msg);
}

void HolonomeUI::on_pushButton_PropStateDisable_clicked()
{
    TPCANMsg msg;

    msg.MSGTYPE = PCAN_MESSAGE_STANDARD;
    msg.ID = CN_PROPULSION;
    msg.DATA[0] = PROP_DISABLE;
    msg.LEN = 1;
    CAN_Write(PCAN_USBBUS1, &msg);
}

void HolonomeUI::on_pushButton_PropStateTest_clicked()
{
    TPCANMsg msg;

    msg.MSGTYPE = PCAN_MESSAGE_STANDARD;
    msg.ID = CN_PROPULSION;
    msg.DATA[0] = PROP_TEST;
    msg.LEN = 1;
    CAN_Write(PCAN_USBBUS1, &msg);
}

void HolonomeUI::on_pushButton_SetPosend_clicked()
{
    QString str;
    bool test;
    float x, y, a;
    TPCANMsg msg;
    unsigned int tmp;

    str = ui->lineEdit_SetPosX->text();
    x = str.toFloat(&test);
    if (!test) {
        ui->lineEdit_SetPosX->setText("");
    } else {
        str = ui->lineEdit_SetPosY->text();
        y = str.toFloat(&test);
        if (!test) {
            ui->lineEdit_SetPosY->setText("");
        } else {
            str = ui->lineEdit_SetPosA->text();
            a = str.toFloat(&test);
            if (!test) {
                ui->lineEdit_SetPosA->setText("");
            } else {
                msg.MSGTYPE = PCAN_MESSAGE_STANDARD;
                msg.ID = CN_PROPULSION;
                msg.DATA[0] = PROP_SET_POS;
                tmp = (unsigned int)(1000*x);
                msg.DATA[1] = canIntToLSB(tmp);
                msg.DATA[2] = canIntToMSB(tmp);
                tmp = (unsigned int)(1000*y);
                msg.DATA[3] = canIntToLSB(tmp);
                msg.DATA[4] = canIntToMSB(tmp);
                tmp = (unsigned int)(a*(1800/M_PI));
                msg.DATA[5] = canIntToLSB(tmp);
                msg.DATA[6] = canIntToMSB(tmp);
                msg.LEN = 7;
                CAN_Write(PCAN_USBBUS1, &msg);
            }
        }
    }
}

void HolonomeUI::on_pushButton_MoveSend_clicked()
{
    QString str;
    bool test;
    float x, y, a;
    TPCANMsg msg;
    unsigned int tmp;

    str = ui->lineEdit_MoveX->text();
    x = str.toFloat(&test);
    if (!test) {
        ui->lineEdit_MoveX->setText("");
    } else {
        str = ui->lineEdit_MoveY->text();
        y = str.toFloat(&test);
        if (!test) {
            ui->lineEdit_MoveY->setText("");
        } else {
            str = ui->lineEdit_MoveA->text();
            a = str.toFloat(&test);
            if (!test) {
                ui->lineEdit_MoveA->setText("");
            } else {
                msg.MSGTYPE = PCAN_MESSAGE_STANDARD;
                msg.ID = CN_PROPULSION;
                msg.DATA[0] = PROP_MOVE;
                tmp = (unsigned int)(1000*x);
                msg.DATA[1] = canIntToLSB(tmp);
                msg.DATA[2] = canIntToMSB(tmp);
                tmp = (unsigned int)(1000*y);
                msg.DATA[3] = canIntToLSB(tmp);
                msg.DATA[4] = canIntToMSB(tmp);
                tmp = (unsigned int)(a*(1800/M_PI));
                msg.DATA[5] = canIntToLSB(tmp);
                msg.DATA[6] = canIntToMSB(tmp);
                msg.LEN = 7;
                CAN_Write(PCAN_USBBUS1, &msg);
            }
        }
    }
}
