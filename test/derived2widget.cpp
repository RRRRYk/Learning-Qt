#include "derived2widget.h"

Derived2Widget::Derived2Widget(QWidget *parent)
    : BaseWidget(parent)
{
    QLabel *valueLabel = new QLabel("Insert value", this);
    _value = new QDoubleSpinBox(this);
    QLabel *timeLabel = new QLabel("Select time", this);
    _time = new QTimeEdit(QTime::currentTime(), this);

    _layout->addWidget(valueLabel);
    _layout->addWidget(_value);
    _layout->addWidget(timeLabel);
    _layout->addWidget(_time);
}

double Derived2Widget::value() const
{
    return _value->value();
}

QTime Derived2Widget::time() const
{
    return _time->time();
}

Derived2 *Derived2Widget::createObject() const
{
    return new Derived2(title(), time(), value());
}
