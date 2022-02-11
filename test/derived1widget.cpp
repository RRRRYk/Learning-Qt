#include "derived1widget.h"

Derived1Widget::Derived1Widget(QWidget *parent)
    : BaseWidget(parent)
{
    QLabel *label = new QLabel("Select date", this);
    _date = new QDateEdit(QDate::currentDate(), this);

    _layout->addWidget(label);
    _layout->addWidget(_date);
}

QDate Derived1Widget::date() const
{
    return _date->date();
}

Derived1 *Derived1Widget::createObject() const
{
    return new Derived1(title(), date());
}
