#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QListView>
#include <QHBoxLayout>
#include <QPushButton>
#include <model.h>
#include <adddialog.h>

class MainWidget : public QWidget
{
    Q_OBJECT
private:
    Model *_model;

    QListView *_listView;
    QPushButton *_addButton;
public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();
    void setModel(Model *model);
private slots:
    void onAddButtonClicked();
    void onUpdatedModel();
signals:
    void updateListModel();
    void insertObject(Base *object);
};

#endif // MAINWINDOW_H
