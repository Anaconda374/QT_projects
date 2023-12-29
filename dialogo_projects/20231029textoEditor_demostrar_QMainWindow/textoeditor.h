
#ifndef TEXTOEDITOR_H
#define TEXTOEDITOR_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>


/*
QMainWindow:
    Una ventana principal proporciona un esqueleto para crear la interfaz de usuario de una aplicación. Qt tiene QMainWindow y sus clases relacionadas para la gestión de la ventana principal. QMainWindow tiene su propio diseño al que puede agregar "QToolBars", "QDockWidgets", "QMenuBar" y "QStatusBar". El diseño tiene un área central que puede ser ocupada por cualquier tipo de widget.

 */



QT_BEGIN_NAMESPACE
namespace Ui { class TextoEditor; }
QT_END_NAMESPACE

class TextoEditor : public QMainWindow

{
    Q_OBJECT

public:
    TextoEditor(QWidget *parent = nullptr);
    ~TextoEditor();

private slots:
    void on_accionAbrir_triggered();

    void on_accionAlmacenar_triggered();

    void on_accionCopiar_triggered();

    void on_accionCortar_triggered();

    void on_accionPegar_triggered();

    void on_accionNuevo_triggered();

private:
    Ui::TextoEditor *ui;

    QString archivoNombre;
};

#endif // TEXTOEDITOR_H
