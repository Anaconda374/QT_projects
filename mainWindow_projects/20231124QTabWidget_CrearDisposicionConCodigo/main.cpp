
#include "pestanas.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pestanas w;
    w.show();
    return a.exec();
}
