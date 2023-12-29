#include "textoricoeditor.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    // "a" es la aplicación (o el programa) fundamental que maneja todos los funciones deseñados en ".ui" forma,


    //y podemos modificar información de la aplicición en "main.cpp"
    a.setApplicationName("Aplicación del texto rico");
    a.setApplicationVersion("1.0");
    a.setApplicationDisplayName("Aplicación Molo");
    a.setOrganizationName("X_Space");
    a.setOrganizationDomain("www.X.com");

    TextoRicoEditor w;
    w.show();
    return a.exec();
}
