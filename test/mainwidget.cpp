#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    _listView = new QListView(this);
    _addButton = new QPushButton("Add", this);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget(_listView);
    mainLayout->addWidget(_addButton);

    setLayout(mainLayout);

    connect(_addButton, SIGNAL(clicked(bool)), this, SLOT(onAddButtonClicked()));
    connect(this, SIGNAL(updateListModel()), this, SLOT(onUpdatedModel()));
}

MainWidget::~MainWidget()
{

}

void MainWidget::setModel(Model *model)
{
    _model = model;
    connect(this, SIGNAL(insertObject(Base*)), _model, SLOT(insertObject(Base*)));
    emit updateListModel();
}

void MainWidget::onAddButtonClicked()
{
    AddDialog *dialog = new AddDialog(this);
    if(dialog->exec()) {
        emit insertObject(dialog->getObject());
    }
}

void MainWidget::onUpdatedModel()
{
    _listView->setModel(_model);
}
