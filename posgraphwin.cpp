#include "posgraphwin.h"
#include "ui_posgraphwin.h"

PosGraphWin::PosGraphWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PosGraphWin)
{
    ui->setupUi(this);
    ui->tabWidget->setTabText(0, "X");
    ui->tabWidget->setTabText(1, "Y");
    ui->tabWidget->setTabText(2, "Alpha");
}

PosGraphWin::~PosGraphWin()
{
    delete ui;
}

void PosGraphWin::on_pbClose_clicked()
{
    destroy();
}

void PosGraphWin::addData(QVector<double> time, QVector<Position> pos)
{
    QVector<double> data;
    double xMax, yMin, yMax;

    if (time.length() > 0) {
        xMax = time[time.length()-1];
        yMin = 1E6;
        yMax = -1E-6;
        for (int i=0; i<pos.length(); i++) {
            data.append(pos[i].getX());
            if (data[i] > yMax)
                yMax = data[i];
            if (data[i] < yMin)
                yMin = data[i];
        }
        ui->xPlot->addGraph();
        ui->xPlot->graph(0)->setData(time, data);
        ui->xPlot->xAxis->setRange(0, xMax);
        ui->xPlot->yAxis->setRange(yMin, yMax);
        ui->xPlot->xAxis->setLabel("t (s)");
        ui->xPlot->yAxis->setLabel("x (m)");
        ui->xPlot->replot();
        ui->xPlot->setInteraction(QCP::iRangeZoom);
        ui->xPlot->setInteraction(QCP::iRangeDrag);
    }
}
