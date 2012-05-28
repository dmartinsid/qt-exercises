#include <QtGui/QApplication>
#include <QTimer>
#include "digitalclock.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DigitalClock digitalClock;
    digitalClock.show();


    return a.exec();
}
