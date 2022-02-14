#ifndef MODEL_H
#define MODEL_H

#include <QAbstractListModel>
#include <QList>
#include <base.h>
#include <derived1.h>
#include <derived2.h>

class Model : public QAbstractListModel
{
    Q_OBJECT
private:
    QList<Base*> _container;
public:
    Model(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
public slots:
    void insertObject(Base *object);
};

#endif // MODEL_H
