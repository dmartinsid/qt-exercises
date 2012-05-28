#include "digitalclock.h"
#include "ui_digitalclock.h"
#include <QTime>

DigitalClock::DigitalClock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DigitalClock)
{
    ui->setupUi(this);

    startTimer();

    connect(qtimer, SIGNAL(timeout()),
                             this, SLOT(showTime()) );
}

DigitalClock::~DigitalClock()
{
    delete ui;
}

void DigitalClock::showTime()
{
    ui->lcdNumber->display(QTime::currentTime().toString());

}

void DigitalClock::startTimer()
{
    qtimer = new QTimer(this);
    qtimer->start(1000);
}
