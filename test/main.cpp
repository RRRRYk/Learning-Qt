#include "mainwidget.h"
#include "model.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Model m;
    MainWidget w;
    w.setModel(&m);

    w.show();

    return a.exec();
}
