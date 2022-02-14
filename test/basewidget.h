#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include "base.h"

class BaseWidget : public QWidget
{
    Q_OBJECT
private:
    QLineEdit *_title;
protected:
    QVBoxLayout *_layout;
public:
    explicit BaseWidget(QWidget *parent = nullptr);
    QString title() const;
    virtual Base* createObject() const = 0;
    virtual ~BaseWidget() = default;

signals:

public slots:
};

#endif // BASEWIDGET_H
