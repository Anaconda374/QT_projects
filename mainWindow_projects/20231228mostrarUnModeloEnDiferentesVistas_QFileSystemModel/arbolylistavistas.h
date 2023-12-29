#ifndef ARBOLYLISTAVISTAS_H
#define ARBOLYLISTAVISTAS_H

#include <QMainWindow>

//Crear una ventana que muestra el modelo "QFileSystemModel" en Árbol_vista y lista_vista a mismo tiempo.


#include <QFileSystemModel>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui {
class ArbolYListaVistas;
}
QT_END_NAMESPACE

class ArbolYListaVistas : public QMainWindow
{
    Q_OBJECT

public:
    ArbolYListaVistas(QWidget *parent = nullptr);
    ~ArbolYListaVistas();

private slots:
    void on_treeView_activated(const QModelIndex &index);

    void on_listView_activated(const QModelIndex &index);

private:
    Ui::ArbolYListaVistas *ui;

    void iniciar();

    QFileSystemModel modelo;
};
#endif // ARBOLYLISTAVISTAS_H
