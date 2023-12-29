
#include "webmarcador.h"
#include "ui_webmarcador.h"


WebMarcador::WebMarcador(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WebMarcador)
{
    ui->setupUi(this);

    iniciar();
}

WebMarcador::~WebMarcador()
{
    delete ui;
}

void WebMarcador::itemDobleClic(QListWidgetItem *item)
{
    //recuperar el data que se puso en esto ítem antes con el método "setData(Qt::ItemDataRole::UserRole, dato)" .
    QString url = item->data(Qt::ItemDataRole::UserRole).toString();
    QDesktopServices::openUrl(url);
}

void WebMarcador::iniciar()
{
    //limpiar "toolBox" principalmente.
    while(ui->toolBox->count()>0){
        ui->toolBox->removeItem(0);//sigue borrando el primer artilugio.
    }

    anadirCategoria("Noticias");
    anadirCategoria("Sociales");
    anadirCategoria("Busquedas");

    anadirNoticias();
    anadirSociales();
    anadirBusquedas();
}

void WebMarcador::anadirCategoria(QString nombre)
{
    QListWidget* categoria = new QListWidget(this);//usar una lista a almacenar una categoria de enlaces.

    ui->toolBox->addItem(categoria, QIcon(":/iconos/simbolos/IconoCarpeta.png"), nombre);

    //Conectar la acción "itemDoubleClicked" con la ranura privada "itemDobleClic", así cuando un artilugio entre esta categoría se hacen doble clics, abre el enlace en navegador.
    connect(categoria, &QListWidget::itemDoubleClicked, this, &WebMarcador::itemDobleClic);

}

void WebMarcador::anadirEnlace(QListWidget* categoria, QString nombre, QString url)
{
    QListWidgetItem* item = new QListWidgetItem(QIcon(":/iconos/simbolos/IconoEnlace.png"), nombre);

    item->setData(Qt::ItemDataRole::UserRole,url);
    /*
    Usa el método "setData" para asignar un valor arbitrario al elemento de la lista, asociado con un rol específico. En este caso, el rol es Qt::ItemDataRole::UserRole, que es un rol personalizado definido por el usuario. El valor que se asigna es url, que podría ser una cadena que representa una dirección web o un archivo local.
    El valor asignado con setData se puede recuperar más tarde(en la ranura "itemDobleClic") con el método "->data", pasando el mismo rol como argumento.
     */

    categoria->addItem(item);
}

void WebMarcador::anadirNoticias()
{
    QListWidget* categoria = qobject_cast<QListWidget*>(ui->toolBox->widget(0));
    if(!categoria){
        qWarning()<< "No se puede encontrar la noticia categoría !";
        return;
    }
    anadirEnlace(categoria, "Google", "www.google.com");
    anadirEnlace(categoria, "Rvte", "www.rvte.es");

}

void WebMarcador::anadirSociales()
{
    QListWidget* categoria = qobject_cast<QListWidget*>(ui->toolBox->widget(1));
    if(!categoria){
        qWarning()<< "No se puede encontrar la Social categoría !";
            return;
    }
    anadirEnlace(categoria, "Youtube", "www.youtube.com");

}

void WebMarcador::anadirBusquedas()
{
    QListWidget* categoria = qobject_cast<QListWidget*>(ui->toolBox->widget(2));
    if(!categoria){
            qWarning()<< "No se puede encontrar la busqueda categoría !";
                return;
    }
    anadirEnlace(categoria, "Google", "www.google.com");
    anadirEnlace(categoria, "Bing", "www.bing.com");
}


