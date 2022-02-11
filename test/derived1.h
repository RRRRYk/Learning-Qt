#ifndef DERIVED1_H
#define DERIVED1_H

#include <base.h>
#include <QDate>

class Derived1 : public Base
{
private:
    QDate _date;
public:
    Derived1(QString title = QString(), QDate date = QDate::currentDate());
};

#endif // DERIVED1_H
