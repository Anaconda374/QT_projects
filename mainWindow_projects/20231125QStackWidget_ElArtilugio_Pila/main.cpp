
#include "pila.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pila w;
    w.show();
    return a.exec();
}
