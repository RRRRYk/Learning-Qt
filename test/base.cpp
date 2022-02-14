#include "base.h"

Base::Base(QString title)
    : _title(title)
{
    
}

Base::~Base()
{
    
}

QString Base::title() const
{
    return _title;
}

void Base::setTitle(const QString &title)
{
    _title = title;
}
