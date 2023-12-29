
#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

//20231103modificación para añadir 3 nuevas características"un icono, un estado(Guardado o No Guardado), un paso del texto curriente" a la barra de estado.
#include <QLabel>
#include <QStatusBar>
#include <QDebug>

//20231105modificación para agregar una lista de artilugios a la principal vantana, cuando se hace doble_clic un artilugio en la lista, de que añadir el texto al plano texto editor.
#include <QWidgetList>
#include <QListWidgetItem>
#include <QList>

//para provocar la subordinada vantana:
#include <QScopedPointer>
/*
QScopedPointer garantiza que el objeto al que apunta por su objeto, se eliminará cuando el ámbito actual desaparezca.
    La clase QScopedPointer funciona como un puntero normal, pero con la diferencia de que no se puede copiar ni asignar, lo que comunica claramente la propiedad y el tiempo de vida. La constante de calificación en un puntero C++ normal también se puede expresar con un QScopedPointer.
 */

#include "subdialogo.h"



QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow

{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void nuevo();
    void abrir();
    void guardar();
    void guardar_como();
    void elegir_nada();
    void toolBarra_arriba();
    void toolBarra_abajo();
    void toolBarra_izquierda();
    void toolBarra_derecha();

    void on_plainTextEdit_textChanged();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    //cuando se empuja el boton "borrar", borrar los artilugios elegidos en la listaArtilugio.
    void borrarItem();

    //
    void productos_agrego();
private:
    Ui::Notepad *ui;
    QString archivo_nombre;
    bool esGuardado;


    //20231103modificación:
    void iniciarBarraDeEstado(); //para añadir "un icono", "un estado", "un paso del texto corriente".

    void actualizarBarraDeEstado(QString nombre); //modernizar la barra simultáneamente.

    //iniciar la lista de artilugios por demostración:
    void iniciarListaArtilugio();
};

#endif // NOTEPAD_H
