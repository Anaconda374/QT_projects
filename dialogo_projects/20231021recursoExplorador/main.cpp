
#include "recurso_explorador.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    recurso_explorador w;
    w.show();
    return a.exec();
}
