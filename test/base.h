#ifndef BASE_H
#define BASE_H

#include <QString>

class Base
{
private:
    QString _title;
public:
    Base(QString title = QString());
    virtual ~Base() = 0;
    QString title() const;
    void setTitle(const QString &title);
};

#endif // BASE_H
