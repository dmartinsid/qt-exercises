#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QWidget>
#include <QTimer>

namespace Ui {
    class DigitalClock;
}

class DigitalClock : public QWidget
{
    Q_OBJECT

public:
    explicit DigitalClock(QWidget *parent = 0);
    ~DigitalClock();

private slots:
    void showTime();

private:
    Ui::DigitalClock *ui;
    QTimer *qtimer;

    void startTimer();
};

#endif // DIGITALCLOCK_H
