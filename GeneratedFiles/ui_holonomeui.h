/********************************************************************************
** Form generated from reading UI file 'holonomeui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOLONOMEUI_H
#define UI_HOLONOMEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HolonomeUI
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView_Map;
    QGroupBox *groupBox_Pcan;
    QLabel *display_Pcan;
    QPushButton *pushButton_Pcan;
    QGroupBox *groupBox_PropState;
    QPushButton *pushButton_PropStateEnable;
    QLabel *display_PropState;
    QPushButton *pushButton_PropStateTest;
    QPushButton *pushButton_PropStateDisable;
    QGroupBox *groupBox_CurPos;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_CurPosX;
    QLabel *label_CurPosX;
    QLineEdit *lineEdit_CurPosX;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_CurPosY;
    QLabel *label_CurPosY;
    QLineEdit *lineEdit_CurPosY;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_CurPosA;
    QLabel *label_CurPosA;
    QLineEdit *lineEdit_CurPosA;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_SetPos;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_SetPosX;
    QLabel *label_SetPosX;
    QLineEdit *lineEdit_SetPosX;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_SetPosY;
    QLabel *label_SetPosY;
    QLineEdit *lineEdit_SetPosY;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_SetPosA;
    QLabel *label_SetPosA;
    QLineEdit *lineEdit_SetPosA;
    QPushButton *pushButton_SetPosend;
    QGroupBox *groupBox_Move;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_MoveX;
    QLabel *label_MoveX;
    QLineEdit *lineEdit_MoveX;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_MoveY;
    QLabel *label_MoveY;
    QLineEdit *lineEdit_MoveY;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_MoveA;
    QLabel *label_MoveA;
    QLineEdit *lineEdit_MoveA;
    QPushButton *pushButton_MoveSend;
    QGroupBox *groupBox_Goto;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_GotoX;
    QLabel *label_GotoX;
    QLineEdit *lineEdit_GotoX;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_GotoY;
    QLabel *label_GotoY;
    QLineEdit *lineEdit_GotoY;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_GotoA;
    QLabel *label_GotoA;
    QLineEdit *lineEdit_GotoA;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_GotoButtons;
    QPushButton *pushButton_GotoSend;
    QCheckBox *checkBox_GotoAlphaEnabled;
    QGroupBox *groupBox_SetSpeed;
    QPushButton *pushButton_SetSpeedSend;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_SetSpeedR;
    QLabel *label_SetSpeedR;
    QLineEdit *lineEdit_SetSpeedR;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_SetSpeedL;
    QLabel *label_SetSpeedL;
    QLineEdit *lineEdit_SetSpeedL;
    QGroupBox *groupBox_SetAcc;
    QPushButton *pushButton_SetAccSend;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_SetAccR;
    QLabel *label_SetAccR;
    QLineEdit *lineEdit_SetAccR;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout__SetAccL;
    QLabel *label_SetAccL;
    QLineEdit *lineEdit_SetAccL;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *HolonomeUI)
    {
        if (HolonomeUI->objectName().isEmpty())
            HolonomeUI->setObjectName(QStringLiteral("HolonomeUI"));
        HolonomeUI->setEnabled(true);
        HolonomeUI->resize(943, 550);
        centralWidget = new QWidget(HolonomeUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        graphicsView_Map = new QGraphicsView(centralWidget);
        graphicsView_Map->setObjectName(QStringLiteral("graphicsView_Map"));

        gridLayout->addWidget(graphicsView_Map, 0, 0, 4, 6);

        groupBox_Pcan = new QGroupBox(centralWidget);
        groupBox_Pcan->setObjectName(QStringLiteral("groupBox_Pcan"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_Pcan->sizePolicy().hasHeightForWidth());
        groupBox_Pcan->setSizePolicy(sizePolicy);
        groupBox_Pcan->setMinimumSize(QSize(120, 80));
        groupBox_Pcan->setMaximumSize(QSize(90, 80));
        display_Pcan = new QLabel(groupBox_Pcan);
        display_Pcan->setObjectName(QStringLiteral("display_Pcan"));
        display_Pcan->setGeometry(QRect(10, 20, 100, 23));
        sizePolicy.setHeightForWidth(display_Pcan->sizePolicy().hasHeightForWidth());
        display_Pcan->setSizePolicy(sizePolicy);
        display_Pcan->setMinimumSize(QSize(100, 0));
        display_Pcan->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setPointSize(8);
        display_Pcan->setFont(font);
        display_Pcan->setFrameShape(QFrame::StyledPanel);
        display_Pcan->setMargin(0);
        display_Pcan->setIndent(5);
        pushButton_Pcan = new QPushButton(groupBox_Pcan);
        pushButton_Pcan->setObjectName(QStringLiteral("pushButton_Pcan"));
        pushButton_Pcan->setGeometry(QRect(10, 50, 100, 23));
        sizePolicy.setHeightForWidth(pushButton_Pcan->sizePolicy().hasHeightForWidth());
        pushButton_Pcan->setSizePolicy(sizePolicy);
        pushButton_Pcan->setMinimumSize(QSize(100, 0));
        pushButton_Pcan->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(groupBox_Pcan, 0, 6, 1, 1);

        groupBox_PropState = new QGroupBox(centralWidget);
        groupBox_PropState->setObjectName(QStringLiteral("groupBox_PropState"));
        sizePolicy.setHeightForWidth(groupBox_PropState->sizePolicy().hasHeightForWidth());
        groupBox_PropState->setSizePolicy(sizePolicy);
        groupBox_PropState->setMinimumSize(QSize(120, 141));
        groupBox_PropState->setMaximumSize(QSize(90, 141));
        pushButton_PropStateEnable = new QPushButton(groupBox_PropState);
        pushButton_PropStateEnable->setObjectName(QStringLiteral("pushButton_PropStateEnable"));
        pushButton_PropStateEnable->setGeometry(QRect(10, 45, 100, 23));
        sizePolicy.setHeightForWidth(pushButton_PropStateEnable->sizePolicy().hasHeightForWidth());
        pushButton_PropStateEnable->setSizePolicy(sizePolicy);
        pushButton_PropStateEnable->setMinimumSize(QSize(100, 23));
        pushButton_PropStateEnable->setMaximumSize(QSize(100, 23));
        display_PropState = new QLabel(groupBox_PropState);
        display_PropState->setObjectName(QStringLiteral("display_PropState"));
        display_PropState->setGeometry(QRect(10, 21, 100, 18));
        sizePolicy.setHeightForWidth(display_PropState->sizePolicy().hasHeightForWidth());
        display_PropState->setSizePolicy(sizePolicy);
        display_PropState->setMinimumSize(QSize(100, 0));
        display_PropState->setMaximumSize(QSize(100, 16777215));
        QFont font1;
        font1.setPointSize(10);
        display_PropState->setFont(font1);
        display_PropState->setFrameShape(QFrame::StyledPanel);
        display_PropState->setAlignment(Qt::AlignCenter);
        display_PropState->setMargin(0);
        display_PropState->setIndent(5);
        pushButton_PropStateTest = new QPushButton(groupBox_PropState);
        pushButton_PropStateTest->setObjectName(QStringLiteral("pushButton_PropStateTest"));
        pushButton_PropStateTest->setGeometry(QRect(10, 103, 100, 23));
        sizePolicy.setHeightForWidth(pushButton_PropStateTest->sizePolicy().hasHeightForWidth());
        pushButton_PropStateTest->setSizePolicy(sizePolicy);
        pushButton_PropStateTest->setMinimumSize(QSize(100, 23));
        pushButton_PropStateTest->setMaximumSize(QSize(100, 23));
        pushButton_PropStateDisable = new QPushButton(groupBox_PropState);
        pushButton_PropStateDisable->setObjectName(QStringLiteral("pushButton_PropStateDisable"));
        pushButton_PropStateDisable->setGeometry(QRect(10, 74, 100, 23));
        sizePolicy.setHeightForWidth(pushButton_PropStateDisable->sizePolicy().hasHeightForWidth());
        pushButton_PropStateDisable->setSizePolicy(sizePolicy);
        pushButton_PropStateDisable->setMinimumSize(QSize(100, 23));
        pushButton_PropStateDisable->setMaximumSize(QSize(100, 23));

        gridLayout->addWidget(groupBox_PropState, 1, 6, 1, 1);

        groupBox_CurPos = new QGroupBox(centralWidget);
        groupBox_CurPos->setObjectName(QStringLiteral("groupBox_CurPos"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_CurPos->sizePolicy().hasHeightForWidth());
        groupBox_CurPos->setSizePolicy(sizePolicy1);
        groupBox_CurPos->setMinimumSize(QSize(120, 80));
        groupBox_CurPos->setMaximumSize(QSize(120, 80));
        layoutWidget_11 = new QWidget(groupBox_CurPos);
        layoutWidget_11->setObjectName(QStringLiteral("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(10, 10, 108, 22));
        horizontalLayout_CurPosX = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_CurPosX->setSpacing(3);
        horizontalLayout_CurPosX->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_CurPosX->setObjectName(QStringLiteral("horizontalLayout_CurPosX"));
        horizontalLayout_CurPosX->setContentsMargins(0, 0, 0, 0);
        label_CurPosX = new QLabel(layoutWidget_11);
        label_CurPosX->setObjectName(QStringLiteral("label_CurPosX"));
        label_CurPosX->setMinimumSize(QSize(50, 0));
        label_CurPosX->setMaximumSize(QSize(50, 16777215));
        label_CurPosX->setFont(font1);

        horizontalLayout_CurPosX->addWidget(label_CurPosX);

        lineEdit_CurPosX = new QLineEdit(layoutWidget_11);
        lineEdit_CurPosX->setObjectName(QStringLiteral("lineEdit_CurPosX"));
        lineEdit_CurPosX->setMinimumSize(QSize(50, 0));
        lineEdit_CurPosX->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_CurPosX->addWidget(lineEdit_CurPosX);

        layoutWidget_12 = new QWidget(groupBox_CurPos);
        layoutWidget_12->setObjectName(QStringLiteral("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(10, 30, 108, 22));
        horizontalLayout_CurPosY = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_CurPosY->setSpacing(3);
        horizontalLayout_CurPosY->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_CurPosY->setObjectName(QStringLiteral("horizontalLayout_CurPosY"));
        horizontalLayout_CurPosY->setContentsMargins(0, 0, 0, 0);
        label_CurPosY = new QLabel(layoutWidget_12);
        label_CurPosY->setObjectName(QStringLiteral("label_CurPosY"));
        label_CurPosY->setMinimumSize(QSize(50, 0));
        label_CurPosY->setMaximumSize(QSize(50, 16777215));
        label_CurPosY->setFont(font1);

        horizontalLayout_CurPosY->addWidget(label_CurPosY);

        lineEdit_CurPosY = new QLineEdit(layoutWidget_12);
        lineEdit_CurPosY->setObjectName(QStringLiteral("lineEdit_CurPosY"));
        lineEdit_CurPosY->setMinimumSize(QSize(50, 0));
        lineEdit_CurPosY->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_CurPosY->addWidget(lineEdit_CurPosY);

        layoutWidget_13 = new QWidget(groupBox_CurPos);
        layoutWidget_13->setObjectName(QStringLiteral("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(10, 50, 108, 22));
        horizontalLayout_CurPosA = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_CurPosA->setSpacing(3);
        horizontalLayout_CurPosA->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_CurPosA->setObjectName(QStringLiteral("horizontalLayout_CurPosA"));
        horizontalLayout_CurPosA->setContentsMargins(0, 0, 0, 0);
        label_CurPosA = new QLabel(layoutWidget_13);
        label_CurPosA->setObjectName(QStringLiteral("label_CurPosA"));
        label_CurPosA->setMinimumSize(QSize(50, 0));
        label_CurPosA->setMaximumSize(QSize(50, 16777215));
        label_CurPosA->setFont(font1);

        horizontalLayout_CurPosA->addWidget(label_CurPosA);

        lineEdit_CurPosA = new QLineEdit(layoutWidget_13);
        lineEdit_CurPosA->setObjectName(QStringLiteral("lineEdit_CurPosA"));
        lineEdit_CurPosA->setEnabled(true);
        lineEdit_CurPosA->setMinimumSize(QSize(50, 0));
        lineEdit_CurPosA->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_CurPosA->addWidget(lineEdit_CurPosA);


        gridLayout->addWidget(groupBox_CurPos, 2, 6, 1, 1);

        verticalSpacer = new QSpacerItem(20, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 6, 1, 1);

        groupBox_SetPos = new QGroupBox(centralWidget);
        groupBox_SetPos->setObjectName(QStringLiteral("groupBox_SetPos"));
        sizePolicy1.setHeightForWidth(groupBox_SetPos->sizePolicy().hasHeightForWidth());
        groupBox_SetPos->setSizePolicy(sizePolicy1);
        groupBox_SetPos->setMinimumSize(QSize(120, 110));
        groupBox_SetPos->setMaximumSize(QSize(120, 110));
        layoutWidget = new QWidget(groupBox_SetPos);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 108, 22));
        horizontalLayout_SetPosX = new QHBoxLayout(layoutWidget);
        horizontalLayout_SetPosX->setSpacing(3);
        horizontalLayout_SetPosX->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_SetPosX->setObjectName(QStringLiteral("horizontalLayout_SetPosX"));
        horizontalLayout_SetPosX->setContentsMargins(0, 0, 0, 0);
        label_SetPosX = new QLabel(layoutWidget);
        label_SetPosX->setObjectName(QStringLiteral("label_SetPosX"));
        label_SetPosX->setMinimumSize(QSize(50, 0));
        label_SetPosX->setMaximumSize(QSize(50, 16777215));
        label_SetPosX->setFont(font1);

        horizontalLayout_SetPosX->addWidget(label_SetPosX);

        lineEdit_SetPosX = new QLineEdit(layoutWidget);
        lineEdit_SetPosX->setObjectName(QStringLiteral("lineEdit_SetPosX"));
        lineEdit_SetPosX->setMinimumSize(QSize(50, 0));
        lineEdit_SetPosX->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_SetPosX->addWidget(lineEdit_SetPosX);

        layoutWidget1 = new QWidget(groupBox_SetPos);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 108, 22));
        horizontalLayout_SetPosY = new QHBoxLayout(layoutWidget1);
        horizontalLayout_SetPosY->setSpacing(3);
        horizontalLayout_SetPosY->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_SetPosY->setObjectName(QStringLiteral("horizontalLayout_SetPosY"));
        horizontalLayout_SetPosY->setContentsMargins(0, 0, 0, 0);
        label_SetPosY = new QLabel(layoutWidget1);
        label_SetPosY->setObjectName(QStringLiteral("label_SetPosY"));
        label_SetPosY->setMinimumSize(QSize(50, 0));
        label_SetPosY->setMaximumSize(QSize(50, 16777215));
        label_SetPosY->setFont(font1);

        horizontalLayout_SetPosY->addWidget(label_SetPosY);

        lineEdit_SetPosY = new QLineEdit(layoutWidget1);
        lineEdit_SetPosY->setObjectName(QStringLiteral("lineEdit_SetPosY"));
        lineEdit_SetPosY->setMinimumSize(QSize(50, 0));
        lineEdit_SetPosY->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_SetPosY->addWidget(lineEdit_SetPosY);

        layoutWidget_2 = new QWidget(groupBox_SetPos);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 50, 108, 22));
        horizontalLayout_SetPosA = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_SetPosA->setSpacing(3);
        horizontalLayout_SetPosA->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_SetPosA->setObjectName(QStringLiteral("horizontalLayout_SetPosA"));
        horizontalLayout_SetPosA->setContentsMargins(0, 0, 0, 0);
        label_SetPosA = new QLabel(layoutWidget_2);
        label_SetPosA->setObjectName(QStringLiteral("label_SetPosA"));
        label_SetPosA->setMinimumSize(QSize(50, 0));
        label_SetPosA->setMaximumSize(QSize(50, 16777215));
        label_SetPosA->setFont(font1);

        horizontalLayout_SetPosA->addWidget(label_SetPosA);

        lineEdit_SetPosA = new QLineEdit(layoutWidget_2);
        lineEdit_SetPosA->setObjectName(QStringLiteral("lineEdit_SetPosA"));
        lineEdit_SetPosA->setMinimumSize(QSize(50, 0));
        lineEdit_SetPosA->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_SetPosA->addWidget(lineEdit_SetPosA);

        pushButton_SetPosend = new QPushButton(groupBox_SetPos);
        pushButton_SetPosend->setObjectName(QStringLiteral("pushButton_SetPosend"));
        pushButton_SetPosend->setGeometry(QRect(25, 80, 70, 23));

        gridLayout->addWidget(groupBox_SetPos, 4, 0, 1, 1);

        groupBox_Move = new QGroupBox(centralWidget);
        groupBox_Move->setObjectName(QStringLiteral("groupBox_Move"));
        sizePolicy1.setHeightForWidth(groupBox_Move->sizePolicy().hasHeightForWidth());
        groupBox_Move->setSizePolicy(sizePolicy1);
        groupBox_Move->setMinimumSize(QSize(120, 110));
        groupBox_Move->setMaximumSize(QSize(120, 110));
        layoutWidget_3 = new QWidget(groupBox_Move);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 108, 22));
        horizontalLayout_MoveX = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_MoveX->setSpacing(3);
        horizontalLayout_MoveX->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_MoveX->setObjectName(QStringLiteral("horizontalLayout_MoveX"));
        horizontalLayout_MoveX->setContentsMargins(0, 0, 0, 0);
        label_MoveX = new QLabel(layoutWidget_3);
        label_MoveX->setObjectName(QStringLiteral("label_MoveX"));
        label_MoveX->setMinimumSize(QSize(50, 0));
        label_MoveX->setMaximumSize(QSize(50, 16777215));
        label_MoveX->setFont(font1);

        horizontalLayout_MoveX->addWidget(label_MoveX);

        lineEdit_MoveX = new QLineEdit(layoutWidget_3);
        lineEdit_MoveX->setObjectName(QStringLiteral("lineEdit_MoveX"));
        lineEdit_MoveX->setMinimumSize(QSize(50, 0));
        lineEdit_MoveX->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_MoveX->addWidget(lineEdit_MoveX);

        layoutWidget_4 = new QWidget(groupBox_Move);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 30, 108, 22));
        horizontalLayout_MoveY = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_MoveY->setSpacing(3);
        horizontalLayout_MoveY->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_MoveY->setObjectName(QStringLiteral("horizontalLayout_MoveY"));
        horizontalLayout_MoveY->setContentsMargins(0, 0, 0, 0);
        label_MoveY = new QLabel(layoutWidget_4);
        label_MoveY->setObjectName(QStringLiteral("label_MoveY"));
        label_MoveY->setMinimumSize(QSize(50, 0));
        label_MoveY->setMaximumSize(QSize(50, 16777215));
        label_MoveY->setFont(font1);

        horizontalLayout_MoveY->addWidget(label_MoveY);

        lineEdit_MoveY = new QLineEdit(layoutWidget_4);
        lineEdit_MoveY->setObjectName(QStringLiteral("lineEdit_MoveY"));
        lineEdit_MoveY->setMinimumSize(QSize(50, 0));
        lineEdit_MoveY->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_MoveY->addWidget(lineEdit_MoveY);

        layoutWidget_5 = new QWidget(groupBox_Move);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 50, 108, 22));
        horizontalLayout_MoveA = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_MoveA->setSpacing(3);
        horizontalLayout_MoveA->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_MoveA->setObjectName(QStringLiteral("horizontalLayout_MoveA"));
        horizontalLayout_MoveA->setContentsMargins(0, 0, 0, 0);
        label_MoveA = new QLabel(layoutWidget_5);
        label_MoveA->setObjectName(QStringLiteral("label_MoveA"));
        label_MoveA->setMinimumSize(QSize(50, 0));
        label_MoveA->setMaximumSize(QSize(50, 16777215));
        label_MoveA->setFont(font1);

        horizontalLayout_MoveA->addWidget(label_MoveA);

        lineEdit_MoveA = new QLineEdit(layoutWidget_5);
        lineEdit_MoveA->setObjectName(QStringLiteral("lineEdit_MoveA"));
        lineEdit_MoveA->setMinimumSize(QSize(50, 0));
        lineEdit_MoveA->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_MoveA->addWidget(lineEdit_MoveA);

        pushButton_MoveSend = new QPushButton(groupBox_Move);
        pushButton_MoveSend->setObjectName(QStringLiteral("pushButton_MoveSend"));
        pushButton_MoveSend->setGeometry(QRect(25, 80, 70, 23));

        gridLayout->addWidget(groupBox_Move, 4, 1, 1, 1);

        groupBox_Goto = new QGroupBox(centralWidget);
        groupBox_Goto->setObjectName(QStringLiteral("groupBox_Goto"));
        sizePolicy1.setHeightForWidth(groupBox_Goto->sizePolicy().hasHeightForWidth());
        groupBox_Goto->setSizePolicy(sizePolicy1);
        groupBox_Goto->setMinimumSize(QSize(120, 110));
        groupBox_Goto->setMaximumSize(QSize(120, 110));
        layoutWidget_6 = new QWidget(groupBox_Goto);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 10, 108, 22));
        horizontalLayout_GotoX = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_GotoX->setSpacing(3);
        horizontalLayout_GotoX->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_GotoX->setObjectName(QStringLiteral("horizontalLayout_GotoX"));
        horizontalLayout_GotoX->setContentsMargins(0, 0, 0, 0);
        label_GotoX = new QLabel(layoutWidget_6);
        label_GotoX->setObjectName(QStringLiteral("label_GotoX"));
        label_GotoX->setMinimumSize(QSize(50, 0));
        label_GotoX->setMaximumSize(QSize(50, 16777215));
        label_GotoX->setFont(font1);

        horizontalLayout_GotoX->addWidget(label_GotoX);

        lineEdit_GotoX = new QLineEdit(layoutWidget_6);
        lineEdit_GotoX->setObjectName(QStringLiteral("lineEdit_GotoX"));
        lineEdit_GotoX->setMinimumSize(QSize(50, 0));
        lineEdit_GotoX->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_GotoX->addWidget(lineEdit_GotoX);

        layoutWidget_7 = new QWidget(groupBox_Goto);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 30, 108, 22));
        horizontalLayout_GotoY = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_GotoY->setSpacing(3);
        horizontalLayout_GotoY->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_GotoY->setObjectName(QStringLiteral("horizontalLayout_GotoY"));
        horizontalLayout_GotoY->setContentsMargins(0, 0, 0, 0);
        label_GotoY = new QLabel(layoutWidget_7);
        label_GotoY->setObjectName(QStringLiteral("label_GotoY"));
        label_GotoY->setMinimumSize(QSize(50, 0));
        label_GotoY->setMaximumSize(QSize(50, 16777215));
        label_GotoY->setFont(font1);

        horizontalLayout_GotoY->addWidget(label_GotoY);

        lineEdit_GotoY = new QLineEdit(layoutWidget_7);
        lineEdit_GotoY->setObjectName(QStringLiteral("lineEdit_GotoY"));
        lineEdit_GotoY->setMinimumSize(QSize(50, 0));
        lineEdit_GotoY->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_GotoY->addWidget(lineEdit_GotoY);

        layoutWidget_8 = new QWidget(groupBox_Goto);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 50, 108, 22));
        horizontalLayout_GotoA = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_GotoA->setSpacing(3);
        horizontalLayout_GotoA->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_GotoA->setObjectName(QStringLiteral("horizontalLayout_GotoA"));
        horizontalLayout_GotoA->setContentsMargins(0, 0, 0, 0);
        label_GotoA = new QLabel(layoutWidget_8);
        label_GotoA->setObjectName(QStringLiteral("label_GotoA"));
        label_GotoA->setMinimumSize(QSize(50, 0));
        label_GotoA->setMaximumSize(QSize(50, 16777215));
        label_GotoA->setFont(font1);

        horizontalLayout_GotoA->addWidget(label_GotoA);

        lineEdit_GotoA = new QLineEdit(layoutWidget_8);
        lineEdit_GotoA->setObjectName(QStringLiteral("lineEdit_GotoA"));
        lineEdit_GotoA->setMinimumSize(QSize(50, 0));
        lineEdit_GotoA->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_GotoA->addWidget(lineEdit_GotoA);

        layoutWidget2 = new QWidget(groupBox_Goto);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 80, 113, 25));
        horizontalLayout_GotoButtons = new QHBoxLayout(layoutWidget2);
        horizontalLayout_GotoButtons->setSpacing(6);
        horizontalLayout_GotoButtons->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_GotoButtons->setObjectName(QStringLiteral("horizontalLayout_GotoButtons"));
        horizontalLayout_GotoButtons->setContentsMargins(0, 0, 0, 0);
        pushButton_GotoSend = new QPushButton(layoutWidget2);
        pushButton_GotoSend->setObjectName(QStringLiteral("pushButton_GotoSend"));

        horizontalLayout_GotoButtons->addWidget(pushButton_GotoSend);

        checkBox_GotoAlphaEnabled = new QCheckBox(layoutWidget2);
        checkBox_GotoAlphaEnabled->setObjectName(QStringLiteral("checkBox_GotoAlphaEnabled"));
        QFont font2;
        font2.setFamily(QStringLiteral("Symbol"));
        checkBox_GotoAlphaEnabled->setFont(font2);

        horizontalLayout_GotoButtons->addWidget(checkBox_GotoAlphaEnabled);


        gridLayout->addWidget(groupBox_Goto, 4, 2, 1, 1);

        groupBox_SetSpeed = new QGroupBox(centralWidget);
        groupBox_SetSpeed->setObjectName(QStringLiteral("groupBox_SetSpeed"));
        sizePolicy1.setHeightForWidth(groupBox_SetSpeed->sizePolicy().hasHeightForWidth());
        groupBox_SetSpeed->setSizePolicy(sizePolicy1);
        groupBox_SetSpeed->setMinimumSize(QSize(120, 110));
        groupBox_SetSpeed->setMaximumSize(QSize(120, 110));
        pushButton_SetSpeedSend = new QPushButton(groupBox_SetSpeed);
        pushButton_SetSpeedSend->setObjectName(QStringLiteral("pushButton_SetSpeedSend"));
        pushButton_SetSpeedSend->setGeometry(QRect(40, 80, 70, 23));
        layoutWidget3 = new QWidget(groupBox_SetSpeed);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 128, 22));
        horizontalLayout_SetSpeedR = new QHBoxLayout(layoutWidget3);
        horizontalLayout_SetSpeedR->setSpacing(6);
        horizontalLayout_SetSpeedR->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_SetSpeedR->setObjectName(QStringLiteral("horizontalLayout_SetSpeedR"));
        horizontalLayout_SetSpeedR->setContentsMargins(0, 0, 0, 0);
        label_SetSpeedR = new QLabel(layoutWidget3);
        label_SetSpeedR->setObjectName(QStringLiteral("label_SetSpeedR"));
        label_SetSpeedR->setMinimumSize(QSize(70, 0));
        label_SetSpeedR->setMaximumSize(QSize(70, 16777215));
        label_SetSpeedR->setFont(font1);

        horizontalLayout_SetSpeedR->addWidget(label_SetSpeedR);

        lineEdit_SetSpeedR = new QLineEdit(layoutWidget3);
        lineEdit_SetSpeedR->setObjectName(QStringLiteral("lineEdit_SetSpeedR"));
        lineEdit_SetSpeedR->setMinimumSize(QSize(50, 0));
        lineEdit_SetSpeedR->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_SetSpeedR->addWidget(lineEdit_SetSpeedR);

        layoutWidget4 = new QWidget(groupBox_SetSpeed);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 10, 128, 22));
        horizontalLayout_SetSpeedL = new QHBoxLayout(layoutWidget4);
        horizontalLayout_SetSpeedL->setSpacing(6);
        horizontalLayout_SetSpeedL->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_SetSpeedL->setObjectName(QStringLiteral("horizontalLayout_SetSpeedL"));
        horizontalLayout_SetSpeedL->setContentsMargins(0, 0, 0, 0);
        label_SetSpeedL = new QLabel(layoutWidget4);
        label_SetSpeedL->setObjectName(QStringLiteral("label_SetSpeedL"));
        label_SetSpeedL->setMinimumSize(QSize(70, 0));
        label_SetSpeedL->setMaximumSize(QSize(70, 16777215));
        QFont font3;
        font3.setPointSize(9);
        label_SetSpeedL->setFont(font3);

        horizontalLayout_SetSpeedL->addWidget(label_SetSpeedL);

        lineEdit_SetSpeedL = new QLineEdit(layoutWidget4);
        lineEdit_SetSpeedL->setObjectName(QStringLiteral("lineEdit_SetSpeedL"));
        lineEdit_SetSpeedL->setMinimumSize(QSize(50, 0));
        lineEdit_SetSpeedL->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_SetSpeedL->addWidget(lineEdit_SetSpeedL);


        gridLayout->addWidget(groupBox_SetSpeed, 4, 3, 1, 1);

        groupBox_SetAcc = new QGroupBox(centralWidget);
        groupBox_SetAcc->setObjectName(QStringLiteral("groupBox_SetAcc"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_SetAcc->sizePolicy().hasHeightForWidth());
        groupBox_SetAcc->setSizePolicy(sizePolicy2);
        groupBox_SetAcc->setMinimumSize(QSize(120, 110));
        groupBox_SetAcc->setMaximumSize(QSize(120, 110));
        pushButton_SetAccSend = new QPushButton(groupBox_SetAcc);
        pushButton_SetAccSend->setObjectName(QStringLiteral("pushButton_SetAccSend"));
        pushButton_SetAccSend->setGeometry(QRect(40, 80, 70, 23));
        layoutWidget_9 = new QWidget(groupBox_SetAcc);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 30, 128, 22));
        horizontalLayout_SetAccR = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_SetAccR->setSpacing(6);
        horizontalLayout_SetAccR->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_SetAccR->setObjectName(QStringLiteral("horizontalLayout_SetAccR"));
        horizontalLayout_SetAccR->setContentsMargins(0, 0, 0, 0);
        label_SetAccR = new QLabel(layoutWidget_9);
        label_SetAccR->setObjectName(QStringLiteral("label_SetAccR"));
        label_SetAccR->setMinimumSize(QSize(70, 0));
        label_SetAccR->setMaximumSize(QSize(70, 16777215));
        label_SetAccR->setFont(font1);

        horizontalLayout_SetAccR->addWidget(label_SetAccR);

        lineEdit_SetAccR = new QLineEdit(layoutWidget_9);
        lineEdit_SetAccR->setObjectName(QStringLiteral("lineEdit_SetAccR"));
        lineEdit_SetAccR->setMinimumSize(QSize(50, 0));
        lineEdit_SetAccR->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_SetAccR->addWidget(lineEdit_SetAccR);

        layoutWidget_10 = new QWidget(groupBox_SetAcc);
        layoutWidget_10->setObjectName(QStringLiteral("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(10, 10, 128, 22));
        horizontalLayout__SetAccL = new QHBoxLayout(layoutWidget_10);
        horizontalLayout__SetAccL->setSpacing(6);
        horizontalLayout__SetAccL->setContentsMargins(11, 11, 11, 11);
        horizontalLayout__SetAccL->setObjectName(QStringLiteral("horizontalLayout__SetAccL"));
        horizontalLayout__SetAccL->setContentsMargins(0, 0, 0, 0);
        label_SetAccL = new QLabel(layoutWidget_10);
        label_SetAccL->setObjectName(QStringLiteral("label_SetAccL"));
        label_SetAccL->setMinimumSize(QSize(70, 0));
        label_SetAccL->setMaximumSize(QSize(70, 16777215));
        label_SetAccL->setFont(font3);

        horizontalLayout__SetAccL->addWidget(label_SetAccL);

        lineEdit_SetAccL = new QLineEdit(layoutWidget_10);
        lineEdit_SetAccL->setObjectName(QStringLiteral("lineEdit_SetAccL"));
        lineEdit_SetAccL->setMinimumSize(QSize(50, 0));
        lineEdit_SetAccL->setMaximumSize(QSize(50, 16777215));

        horizontalLayout__SetAccL->addWidget(lineEdit_SetAccL);


        gridLayout->addWidget(groupBox_SetAcc, 4, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(194, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 5, 1, 1);

        HolonomeUI->setCentralWidget(centralWidget);

        retranslateUi(HolonomeUI);

        QMetaObject::connectSlotsByName(HolonomeUI);
    } // setupUi

    void retranslateUi(QMainWindow *HolonomeUI)
    {
        HolonomeUI->setWindowTitle(QApplication::translate("HolonomeUI", "HolonomeUI", 0));
        groupBox_Pcan->setTitle(QApplication::translate("HolonomeUI", "PCAN", 0));
        display_Pcan->setText(QApplication::translate("HolonomeUI", "Disconnected", 0));
        pushButton_Pcan->setText(QApplication::translate("HolonomeUI", "connect", 0));
        groupBox_PropState->setTitle(QApplication::translate("HolonomeUI", "PropState", 0));
        pushButton_PropStateEnable->setText(QApplication::translate("HolonomeUI", "Enable", 0));
        display_PropState->setText(QApplication::translate("HolonomeUI", "Disabled", 0));
        pushButton_PropStateTest->setText(QApplication::translate("HolonomeUI", "Test", 0));
        pushButton_PropStateDisable->setText(QApplication::translate("HolonomeUI", "Disable", 0));
        groupBox_CurPos->setTitle(QApplication::translate("HolonomeUI", "Current Position", 0));
        label_CurPosX->setText(QApplication::translate("HolonomeUI", "x (m) :", 0));
        lineEdit_CurPosX->setText(QString());
        label_CurPosY->setText(QApplication::translate("HolonomeUI", "y (m) :", 0));
        lineEdit_CurPosY->setText(QString());
        label_CurPosA->setText(QApplication::translate("HolonomeUI", "a (rad) :", 0));
        lineEdit_CurPosA->setText(QString());
        groupBox_SetPos->setTitle(QApplication::translate("HolonomeUI", "Set Position", 0));
        label_SetPosX->setText(QApplication::translate("HolonomeUI", "x (m) :", 0));
        label_SetPosY->setText(QApplication::translate("HolonomeUI", "y (m) :", 0));
        label_SetPosA->setText(QApplication::translate("HolonomeUI", "a (rad) :", 0));
        pushButton_SetPosend->setText(QApplication::translate("HolonomeUI", "Send", 0));
        groupBox_Move->setTitle(QApplication::translate("HolonomeUI", "Move", 0));
        label_MoveX->setText(QApplication::translate("HolonomeUI", "x (m) :", 0));
        label_MoveY->setText(QApplication::translate("HolonomeUI", "y (m) :", 0));
        label_MoveA->setText(QApplication::translate("HolonomeUI", "a (rad) :", 0));
        pushButton_MoveSend->setText(QApplication::translate("HolonomeUI", "Send", 0));
        groupBox_Goto->setTitle(QApplication::translate("HolonomeUI", "Go To", 0));
        label_GotoX->setText(QApplication::translate("HolonomeUI", "x (m) :", 0));
        label_GotoY->setText(QApplication::translate("HolonomeUI", "y (m) :", 0));
        label_GotoA->setText(QApplication::translate("HolonomeUI", "a (m) :", 0));
        pushButton_GotoSend->setText(QApplication::translate("HolonomeUI", "Send", 0));
        checkBox_GotoAlphaEnabled->setText(QApplication::translate("HolonomeUI", "a", 0));
        groupBox_SetSpeed->setTitle(QApplication::translate("HolonomeUI", "Set Speed", 0));
        pushButton_SetSpeedSend->setText(QApplication::translate("HolonomeUI", "Send", 0));
        label_SetSpeedR->setText(QApplication::translate("HolonomeUI", "Vr (rad/s) :", 0));
        label_SetSpeedL->setText(QApplication::translate("HolonomeUI", "Vt (m/s) :", 0));
        groupBox_SetAcc->setTitle(QApplication::translate("HolonomeUI", "Set Acceleration", 0));
        pushButton_SetAccSend->setText(QApplication::translate("HolonomeUI", "Send", 0));
        label_SetAccR->setText(QApplication::translate("HolonomeUI", "Ar (rad/s\302\262) :", 0));
        label_SetAccL->setText(QApplication::translate("HolonomeUI", "At (m/s\302\262) :", 0));
    } // retranslateUi

};

namespace Ui {
    class HolonomeUI: public Ui_HolonomeUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOLONOMEUI_H
