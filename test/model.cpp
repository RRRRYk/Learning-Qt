#include "model.h"

#include <QDebug>

Model::Model(QObject *parent)
    : QAbstractListModel(parent)
{
    _container << new Derived1("Derived1 Item", QDate::currentDate()) << new Derived2("Derived2 Item", QTime::currentTime());
}

int Model::rowCount(const QModelIndex &parent) const
{
    return parent.isValid() ? 0 : _container.size();
}

QVariant Model::data(const QModelIndex &index, int role) const
{
    qDebug() << "_container.size(): " << _container.size();
    if(!index.isValid())
        return QVariant();

    if (index.row() >= _container.size() || index.row() < 0)
        return QVariant();

    const auto item = _container.at(index.row());

    switch(role){
        case Qt::DisplayRole:
            return item->title();
        default:
            break;
    }

    return QVariant();
}

void Model::insertObject(Base *object)
{
    beginInsertRows(QModelIndex(), _container.size(), _container.size());
    _container.push_back(object);
    endInsertRows();
}
