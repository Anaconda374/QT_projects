#ifndef DIRECTORIOMOSTRADOR_H
#define DIRECTORIOMOSTRADOR_H

#include <QMainWindow>

//Esta aplición se muestra un base de dato(la memoria del disco en este caso) a 2 vistas diferentes.


// QFileSystemModel proporciona un modelo de dato que puede manipular y demostrar "el sistema de archivos locales".
#include <QFileSystemModel>

#include <QDir>//para manipular los direcciones .


QT_BEGIN_NAMESPACE
namespace Ui {
class directorioMostrador;
}
QT_END_NAMESPACE

class directorioMostrador : public QMainWindow
{
    Q_OBJECT

public:
    directorioMostrador(QWidget *parent = nullptr);
    ~directorioMostrador();

private slots:
    void on_treeView_activated(const QModelIndex &index);

private:
    Ui::directorioMostrador *ui;

    void iniciar();

    QFileSystemModel dirModelo; //el modelo usado a demostrar dato en el artilugio de "QTreeView".

    QFileSystemModel archivoModelo; //el modelo usado a demostrar dato en el artilugio de "QListView".

};
#endif // DIRECTORIOMOSTRADOR_H
