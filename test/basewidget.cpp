#include "basewidget.h"

BaseWidget::BaseWidget(QWidget *parent) : QWidget(parent)
{
    _title = new QLineEdit("Insert title", this);

    _layout = new QVBoxLayout;
    _layout->setSizeConstraint(QLayout::SetFixedSize);
    _layout->addWidget(_title);

    setLayout(_layout);
}

QString BaseWidget::title() const
{
    return _title->text();
}
