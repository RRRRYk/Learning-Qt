#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QComboBox>
#include <QPushButton>
#include "basewidget.h"
#include "derived1widget.h"
#include "derived2widget.h"

class AddDialog : public QDialog
{
    Q_OBJECT
private:
    QVBoxLayout *_internalLayout;
    QComboBox *_typeToAdd;
    QPushButton *_addButton;
    BaseWidget *_centralWidget;
public:
    AddDialog(QWidget *parent = nullptr);
    static void clearLayout(QLayout *layout);
    Base *getObject() const;
private slots:
    void onComboBoxIndexChanged(int index);
};

#endif // ADDDIALOG_H
