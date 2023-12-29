#include "tablamodelovisto.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TablaModeloVisto w;
    w.show();
    return a.exec();
}
