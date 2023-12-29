#include "arbolylistavistas.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ArbolYListaVistas w;
    w.show();
    return a.exec();
}
