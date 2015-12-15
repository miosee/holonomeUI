#include "holonomeui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HolonomeUI w;
    w.show();

    return a.exec();
}
