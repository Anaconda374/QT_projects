
#ifndef MDI_H
#define MDI_H

//Definir una interfaz de múltiples documento(MDI): que contiene "múltiples ventanas" trabajan en una ventana ambiente.

#include <QMainWindow>
#include <QMdiSubWindow> //para definir las sub_ventanas en la MDI área.
#include <QPlainTextEdit> //cada una de las sub_ventanas tendrá un "PlainTextEditor" como el central artilugio.
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MDI; }
QT_END_NAMESPACE

class MDI : public QMainWindow

{
    Q_OBJECT

public:
    MDI(QWidget *parent = nullptr);
    ~MDI();

private slots:

    void on_actionNuevo_triggered();

    void on_actionAbrir_triggered();

    void on_actionGuardar_triggered();

    void on_actionGuardar_como_triggered();

    void on_actionCopiar_triggered();

    void on_actionCortar_triggered();

    void on_actionPegar_triggered();

    void on_actionCascada_triggered();

    void on_actionBaldosa_triggered();

private:
    Ui::MDI *ui;

    QMdiSubWindow* nuevoDocumento(); //Crear un nuevo ventana que tiene un plano_texto_editor, y devuelve un puntero.
};

#endif // MDI_H
