#ifndef DERIVED1WIDGET_H
#define DERIVED1WIDGET_H

#include <QVBoxLayout>
#include <QLineEdit>
#include <QDateEdit>
#include <QLabel>
#include "basewidget.h"
#include "derived1.h"

class Derived1Widget : public BaseWidget
{
    Q_OBJECT
private:
    QDateEdit *_date;
public:
    explicit Derived1Widget(QWidget *parent = nullptr);
    QDate date() const;

    Derived1 *createObject() const override;

signals:

public slots:
};

#endif // DERIVED1WIDGET_H
