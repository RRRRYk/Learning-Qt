#include "adddialog.h"

AddDialog::AddDialog(QWidget *parent)
    : QDialog(parent)
{
    _typeToAdd = new QComboBox(this);
    _typeToAdd->addItem("Derived1 Item");
    _typeToAdd->addItem("Derived2 Item");

    _addButton = new QPushButton("Add", this);

    _centralWidget = new Derived1Widget(this);

    _internalLayout = new QVBoxLayout;
    _internalLayout->addWidget(_centralWidget);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->setSizeConstraint(QLayout::SetFixedSize);
    layout->addWidget(_typeToAdd);
    layout->addLayout(_internalLayout);
    layout->addWidget(_addButton);

    setLayout(layout);

    connect(_typeToAdd, SIGNAL(currentIndexChanged(int)), this, SLOT(onComboBoxIndexChanged(int)));
    connect(_addButton, SIGNAL(clicked(bool)), this, SLOT(accept()));
}

/*
 * AddDialog::clearLayout(QLayout*) clears the layout when QComboBox::selectedIndex() changes to display the correct forms for user input
 * based on what type of object needs to be created.
 */
void AddDialog::clearLayout(QLayout *layout)
{
    if (layout != nullptr){
        QLayoutItem *item;
        while((item = layout->takeAt(0))) {
            if (item->layout()) {
                clearLayout(item->layout());
                delete item->layout();
            }
            if (item->widget()) {
               delete item->widget();
            }
            delete item;
        }
    }
}

Base *AddDialog::getObject() const
{
    return _centralWidget->createObject();
}

void AddDialog::onComboBoxIndexChanged(int index)
{
    clearLayout(_internalLayout);

    switch(index){
        case 0:
            _centralWidget = new Derived1Widget(this);
            break;
        case 1:
            _centralWidget = new Derived2Widget(this);
            break;
        default:
            break;
    }

    _internalLayout->addWidget(_centralWidget);
}
