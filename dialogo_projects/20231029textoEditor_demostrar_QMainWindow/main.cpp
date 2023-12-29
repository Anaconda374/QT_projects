
#include "textoeditor.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TextoEditor w;
    w.show();
    return a.exec();
}
