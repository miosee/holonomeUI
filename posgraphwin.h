#ifndef POSGRAPHWIN_H
#define POSGRAPHWIN_H

#include <QMainWindow>
#include "../lib/qcustomplot.h"
#include "position.h"

namespace Ui {
class PosGraphWin;
}

class PosGraphWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit PosGraphWin(QWidget *parent = 0);
    ~PosGraphWin();
    void addData(QVector<double> time, QVector<Position> pos);

private slots:
    void on_pbClose_clicked();

private:
    Ui::PosGraphWin *ui;
};

#endif // POSGRAPHWIN_H
