#ifndef DERIVED2_H
#define DERIVED2_H

#include <base.h>
#include <QTime>

class Derived2 : public Base
{
private:
    QTime _time;
    double _value;
public:
    Derived2(QString title = QString(), QTime time = QTime::currentTime(), double value = 0.0);
};

#endif // DERIVED2_H
