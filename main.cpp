#include "rivetcalculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RivetCalculator w;
    w.show();
    return a.exec();
}
