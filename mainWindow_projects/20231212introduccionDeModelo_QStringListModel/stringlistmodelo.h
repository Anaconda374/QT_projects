#ifndef STRINGLISTMODELO_H
#define STRINGLISTMODELO_H

#include <QMainWindow>
#include <QPushButton>
//QStringModel: Un modelo que maneja las lista de cadenas "stringList", es un modelo que suple cadenas a las vistas de usuarios.


#include <QStringList> //el objeto de "QStringList" es el dato que vamos a manejar.
#include <QStringListModel> //para llamar las funciones de la clase "QStringListModel".
#include <QInputDialog> //abrir un diálogo que pide la entrada del usuario.
#include <QModelIndex> //recuperar los indices o coordenadas(si es almacenado en tabla) de los artículos en el modelo.


QT_BEGIN_NAMESPACE
namespace Ui {
class StringListModelo;
}
QT_END_NAMESPACE

class StringListModelo : public QMainWindow
{
    Q_OBJECT

public:
    StringListModelo(QWidget *parent = nullptr);
    ~StringListModelo();

private slots:

    void on_btnAnadir_clicked();

    void on_btnBorrar_clicked();

private:
    Ui::StringListModelo *ui;

    //usar un objeto de "QStringList" a almacenar el data.
    QStringList lista;

    //usar un modelo de la clase "QStringListModel" a manipular el dato:
    QStringListModel modelo;

    void iniciar();


};
#endif // STRINGLISTMODELO_H
