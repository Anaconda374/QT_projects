
#ifndef RECURSO_EXPLORADOR_H
#define RECURSO_EXPLORADOR_H


/*
Construir un recurso explorador:
    Cuando un artilugio esta elegido en la lista, mostrar su icono en "rotuloIcono"(32*32p) y su paso en "rotuloPaso".

    Nombre colisión: si crea varios recursos que se usan mismo dirección y nombre, por ejemplo ":/recurso1/nombreColisionTest/simbolo3/cog.png" y ":/recurso2/nombreColisionTest/simbolo3/cog.png", QT solo los trata como uno recurso.
 */


#include <QDialog>
#include <QFile>
#include <QDir>
#include <QListWidgetItem>
#include <QImage>
#include <QFileInfo>
#include <QFileInfoList>
#include <QDebug>




QT_BEGIN_NAMESPACE
namespace Ui { class recurso_explorador; }
QT_END_NAMESPACE

class recurso_explorador : public QDialog

{
    Q_OBJECT

public:
    recurso_explorador(QWidget *parent = nullptr);
    ~recurso_explorador();

private slots:
    void on_listaArtilugios_itemSelectionChanged();

    void on_btnBueno_clicked();

private:
    Ui::recurso_explorador *ui;


    void cargar();

    void escanear(QDir directorio);

};

#endif // RECURSO_EXPLORADOR_H
