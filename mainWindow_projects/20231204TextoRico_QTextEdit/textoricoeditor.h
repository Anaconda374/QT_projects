#ifndef TEXTORICOEDITOR_H
#define TEXTORICOEDITOR_H

#include <QMainWindow>

/*
    "QTextEdit" proporcionar un artilugio para editar y demostrar el texto tanto "plano" y "rico".

    El texto rico: Se puede demostrar fuentes "Cursivas", "en Negrita", "con subrayar", incluso, insertar una tabla, un dibujo, etc.

 */

#include <QCloseEvent> //para hacer algo cuando el usuario cierra la ventana.
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextCursor>
#include <QColorDialog> //para abrir el color diálogo en que el usuario puede elegir un color.
#include <QFontDialog> // para abrir el font diálogo ~ .
#include <QDesktopServices>

#include "buscardialogo.h"
#include "textoinfo.h"
#include "sobrenosotros.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class TextoRicoEditor;
}
QT_END_NAMESPACE

class TextoRicoEditor : public QMainWindow
{
    Q_OBJECT

public:
    TextoRicoEditor(QWidget *parent = nullptr);
    ~TextoRicoEditor();

    void setDato(const TextoInfo &newDato);

private slots:
    void on_actionNuevo_triggered();

    void on_actionAbrir_triggered();

    void on_actionGuardar_triggered();

    void on_actionGuardar_como_triggered();

    void on_actionSalir_triggered();

    void on_actionCopiar_triggered();

    void on_actionCortar_triggered();

    void on_actionPegar_triggered();

    void on_actionBuscar_Reemplazar_triggered();

    void on_actionElegir_todo_triggered();

    void on_actionZoom_acercar_triggered();

    void on_actionZoom_alejorar_triggered();

    void on_actionNegrita_triggered();

    void on_actionCursiva_triggered();

    void on_actionSubrayar_triggered();

    void on_actionColor_triggered();

    void on_actionfuente_triggered();

    void on_actionAyuda_triggered();

    void on_actionSobre_nosotros_triggered();

    void on_textEdit_textChanged();

    void on_actionDeshacer_triggered();

    void on_actionRehacer_triggered();

//recibir el dato de TextoInfo de la sub_ventana:
    void BuscarRecibir(const TextoInfo& dato);

    void ReemplazarRecibir(const TextoInfo& dato);

private:
    Ui::TextoRicoEditor *ui;

    bool texto_cambiado;
    QString m_paso;

    void nuevoArchivo();
    void abrirArchivo();
    void guardar(QString paso);
    void guardar_como();
    void esGuardado();

    //un objeto usado a almacenar la información en la sub_ventana de Buscar.
    TextoInfo dato;

protected:
    void cerrarEvento(QCloseEvent* evento);
};
#endif // TEXTORICOEDITOR_H
