/********************************************************************************
** Form generated from reading UI file 'posgraphwin.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSGRAPHWIN_H
#define UI_POSGRAPHWIN_H

#include <../lib/qcustomplot.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PosGraphWin
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *xTab;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *xPlot;
    QWidget *yTab;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *yPlot;
    QWidget *aTab;
    QVBoxLayout *verticalLayout_4;
    QCustomPlot *zPlot;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbClose;

    void setupUi(QMainWindow *PosGraphWin)
    {
        if (PosGraphWin->objectName().isEmpty())
            PosGraphWin->setObjectName(QStringLiteral("PosGraphWin"));
        PosGraphWin->resize(800, 600);
        centralwidget = new QWidget(PosGraphWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        xTab = new QWidget();
        xTab->setObjectName(QStringLiteral("xTab"));
        verticalLayout_2 = new QVBoxLayout(xTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        xPlot = new QCustomPlot(xTab);
        xPlot->setObjectName(QStringLiteral("xPlot"));

        verticalLayout_2->addWidget(xPlot);

        tabWidget->addTab(xTab, QString());
        yTab = new QWidget();
        yTab->setObjectName(QStringLiteral("yTab"));
        verticalLayout_3 = new QVBoxLayout(yTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        yPlot = new QCustomPlot(yTab);
        yPlot->setObjectName(QStringLiteral("yPlot"));

        verticalLayout_3->addWidget(yPlot);

        tabWidget->addTab(yTab, QString());
        aTab = new QWidget();
        aTab->setObjectName(QStringLiteral("aTab"));
        verticalLayout_4 = new QVBoxLayout(aTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        zPlot = new QCustomPlot(aTab);
        zPlot->setObjectName(QStringLiteral("zPlot"));

        verticalLayout_4->addWidget(zPlot);

        tabWidget->addTab(aTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbClose = new QPushButton(centralwidget);
        pbClose->setObjectName(QStringLiteral("pbClose"));

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addLayout(horizontalLayout);

        PosGraphWin->setCentralWidget(centralwidget);

        retranslateUi(PosGraphWin);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(PosGraphWin);
    } // setupUi

    void retranslateUi(QMainWindow *PosGraphWin)
    {
        PosGraphWin->setWindowTitle(QApplication::translate("PosGraphWin", "MainWindow", 0));
        tabWidget->setTabText(tabWidget->indexOf(xTab), QApplication::translate("PosGraphWin", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(yTab), QApplication::translate("PosGraphWin", "Tab 2", 0));
        tabWidget->setTabText(tabWidget->indexOf(aTab), QApplication::translate("PosGraphWin", "Page", 0));
        pbClose->setText(QApplication::translate("PosGraphWin", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class PosGraphWin: public Ui_PosGraphWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSGRAPHWIN_H
