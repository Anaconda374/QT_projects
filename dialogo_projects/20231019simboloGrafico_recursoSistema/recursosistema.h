
#ifndef RECURSOSISTEMA_H
#define RECURSOSISTEMA_H

/*
Recurso Sistema:
    El recurso sistema en Qt 6 es un propio sistema para administrar los recursos(una forma de incrustar archivos dentro de tu proyecto), como imágenes, iconos, archivos de traducción, etc. Estos archivos se pueden acceder en tiempo de ejecución a través de una URL especial que empieza por qrc: o :/. Para usar el recurso sistema, necesitas crear un archivo .qrc(elege el proyecto->addnew->Qt->resource ) que liste los archivos locales que quieres incluir como recursos, y luego usar la herramienta rcc para generar un archivo fuente C++ o Python, o un archivo .rcc binario.

NOTA: Los recursos se incrusta como "datos binarios" dentro de el proyecto, por eso no se pueden modificar en el proceso de ejecucion.
 */

/*
Poner icono al boton:
Metodo 1: podemos manualmente elegir un icono a un boton via su propiedad(property->icon->choose resource)

Metodo 1: podemos agregar los empujar_botones y desigñar sus iconos por código en el contrucción en ".cpp" archivo.
 */

#include <QDialog>
#include <QIcon>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>




QT_BEGIN_NAMESPACE
namespace Ui { class recursoSistema; }
QT_END_NAMESPACE

class recursoSistema : public QDialog
{
    Q_OBJECT

public:
    recursoSistema(QWidget *parent = nullptr);
    ~recursoSistema();

private slots:
    void on_btnNuevo_clicked();

    void on_btnAlmacenar_clicked();

    void on_btnAbrir_clicked();

    void on_plainTextEdit_textChanged();

private:
    Ui::recursoSistema *ui;

    bool es_almacenado;

    void almacenar();

    void cargar();


/*
Editar el cierre_evento de esta aplicion:
    El cierre_evento es la accion se ejecuta cuando el usuario hacer clic en "el boton cerrar".
    Elege la class"recursoSistema" y marca la cierre_evento de su base clase "QDialogo".(haga clic derecho a la declaracion de "recursoSistema"->Refactor->Insert virtual function of base classes->marca QDialog::closeEvent).
 */

    // QWidget interface
protected:
    void closeEvent(QCloseEvent *event);

};

#endif // RECURSOSISTEMA_
