
#ifndef DEMOAPP_H
#define DEMOAPP_H

#include <QDialog>


/*
Libreria compartida:

1. ¿Por qué usar una independiente libreria en vez de definir todos en un proyecto?
    La libreria es un independiente binario que separa de la aplicación, por eso, se puede utilizar en múltiple aplicaciónes.

2. ¿Cómo agrega una libreria compartida al proyecto?
    Derecho clic al proyecto -> New Subproject -> C++ library -> Detail: shared library.

3. ¿Cómo construir el proyecto que tiene un libreria independiente?
    Por ejemplo, en este caso:
    1. Construye tanto "20231022aplicacion" como "mi_libreria" independientemente(o solo construye el proyecto);
    2. Derecho clic a la aplicación "20231022aplicacion" -> Add Library -> Type: Internal Library.
*/

//Aunque ya agrega la libreria en el proyecto archivo"20231022aplicacion.pro", necesita incluir los "header" archivos de la libreria. "../" se indica que en el directorio de un nivel superior.

#include "../mi_libreria/mi_libreria_global.h" //incluir los "imports" y "exports".
#include "../mi_libreria/mi_libreria.h" //incluir el archivo encabezado propio.

#


QT_BEGIN_NAMESPACE
namespace Ui { class demoApp; }
QT_END_NAMESPACE

class demoApp : public QDialog

{
    Q_OBJECT

public:
    demoApp(QWidget *parent = nullptr);
    ~demoApp();

private slots:
    void on_btnEmpujar_clicked();

private:
    Ui::demoApp *ui;
};

#endif // DEMOAPP_H
