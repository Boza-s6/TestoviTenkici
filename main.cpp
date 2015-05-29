#include "glavniprozor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GlavniProzor w;
    w.showMaximized();

    return a.exec();
}
