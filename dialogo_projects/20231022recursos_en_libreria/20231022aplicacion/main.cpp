
#include "demoapp.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    demoApp w;
    w.show();
    return a.exec();
}
