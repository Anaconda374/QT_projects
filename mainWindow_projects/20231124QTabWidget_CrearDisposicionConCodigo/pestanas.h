
#ifndef PESTANAS_H
#define PESTANAS_H

#include <QMainWindow>

//Crear una vantana principal que tenga unas pestañas de la clase "QTabwidget", en vez de planear su disposición en "*.ui", vamos a construirla con código.
#include <QDialog>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QVBoxLayout> //El objeto de la clase "QVBoxLayout" se usa a almacenar un diseño de disposición que lo puede usar por "QWidget" con método "setLayout".
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class Pestanas; }
QT_END_NAMESPACE

class Pestanas : public QMainWindow

{
    Q_OBJECT

public:
    Pestanas(QWidget *parent = nullptr);
    ~Pestanas();

private slots:
    void detrasClic(); //Pasar a la pestaña siguiente.
    void adelanteClic(); //volver a la pestaña última.

    void mandarRHClic();
    void mandarJefeClic();

private:
    Ui::Pestanas *ui;

    void iniciar();
};

#endif // PESTANAS_H
