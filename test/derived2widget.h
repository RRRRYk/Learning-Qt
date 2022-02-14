#ifndef DERIVED2WIDGET_H
#define DERIVED2WIDGET_H

#include <QVBoxLayout>
#include <QLabel>
#include <QWidget>
#include <QLineEdit>
#include <QDoubleSpinBox>
#include <QTimeEdit>
#include "basewidget.h"
#include "derived2.h"

class Derived2Widget : public BaseWidget
{
    Q_OBJECT
private:
    QDoubleSpinBox *_value;
    QTimeEdit *_time;
public:
    Derived2Widget(QWidget * parent = nullptr);
    double value() const;
    QTime time() const;

    Derived2 *createObject() const;
};

#endif // DERIVED2WIDGET_H
