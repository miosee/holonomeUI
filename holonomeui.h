#ifndef HOLONOMEUI_H
#define HOLONOMEUI_H

#include <QMainWindow>
#include <QTimer>
#include <QVector>
#include <QVector3D>
#include "../can/CanTypes.h"
#include "PCANBasic.h"
#include "position.h"


namespace Ui {
class HolonomeUI;
}

class HolonomeUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit HolonomeUI(QWidget *parent = 0);
    ~HolonomeUI();

private slots:
    void on_pushButton_Pcan_clicked();
    void timerOut();
    void on_pushButton_PropStateEnable_clicked();
    void on_pushButton_PropStateDisable_clicked();
    void on_pushButton_PropStateTest_clicked();
    void on_pushButton_SetPosend_clicked();
    void on_pushButton_MoveSend_clicked();

private:
    Ui::HolonomeUI *ui;
    QTimer *timer;
    bool isConnected;
    QVector<Position> curPos;
    QVector<float> curPosTime;
};

#endif // HOLONOMEUI_H
