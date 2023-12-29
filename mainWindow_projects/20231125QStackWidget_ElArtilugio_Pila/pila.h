
#ifndef PILA_H
#define PILA_H

#include <QMainWindow>

//El objeto de la clase "QStackwidget" contiene un conjunto de pestañas que pasan ciclicamente(en una ronda), es bastante similar con el objeto de "QTabWidget",


#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QHBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class Pila; }
QT_END_NAMESPACE

class Pila : public QMainWindow

{
    Q_OBJECT

public:
    Pila(QWidget *parent = nullptr);
    ~Pila();


private slots:
    void clicDetras();
    void clicAdelante();


private:
    Ui::Pila *ui;
    void iniciar();
    void comprobarBotones();

//ya que tenemos que modificar estos botones en funciones privadas diferentes, necesitamos definirlos como los miembros privados.
    QPushButton* btnDetras;
    QPushButton* btnAdelante;
};

#endif // PILA_H
