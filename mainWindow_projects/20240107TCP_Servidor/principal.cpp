#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);

    iniciar();
}

Principal::~Principal()
{
    delete ui;
}

void Principal::iniciar()
{

    connect(&m_servidor, &Servidor::cambiado, this, &Principal::esCambiado);
    habibitarBotones();
}

void Principal::habibitarBotones()
{
    ui->btnEmpezar->setEnabled(!m_servidor.isListening());
    ui->btnDetener->setEnabled(m_servidor.isListening());

    //para la primera página:
    if(ui->stackedWidget->currentIndex() == 0){
        ui->btnAtras->setEnabled(false);
        ui->btnAdelante->setEnabled(true);
        return;
    }
    if(ui->stackedWidget->currentIndex() == ui->stackedWidget->count() - 1){
        ui->btnAtras->setEnabled(true);
        ui->btnAdelante->setEnabled(false);
        return;
    }

}

void Principal::esCambiado()
{
    if(m_servidor.contar() == 1|| m_servidor.contar() == 0){
        ui->etiquetaInfo->setText(QString("Tiene %0 cliente conectado.").arg(m_servidor.contar()));
    }
    if(m_servidor.contar() > 1){
        ui->etiquetaInfo->setText(QString("Tiene %0 clientes conectados.").arg(m_servidor.contar()));
    }
}

void Principal::on_btnAceptar_clicked()
{

}


void Principal::on_btnRechazar_clicked()
{

}


void Principal::on_btnAdelante_clicked()
{
    int i = ui->stackedWidget->currentIndex();
    i++;
    if(i >= ui->stackedWidget->count()){
        i = ui->stackedWidget->count()-1;
    }
    ui->stackedWidget->setCurrentIndex(i);

    habibitarBotones();

}


void Principal::on_btnAtras_clicked()
{
    int i = ui->stackedWidget->currentIndex();
    i--;
    if(i < 0){
        i = 0;
    }
    ui->stackedWidget->setCurrentIndex(i);

    habibitarBotones();

}


void Principal::on_btnEmpezar_clicked()
{
    quint16 puerto = static_cast<quint16>(ui->spinBox->value());
    QHostAddress ipv4;

    // Obtener la lista de direcciones IP de la máquina
    QList<QHostAddress> list = QNetworkInterface::allAddresses();

    // Iterar sobre la lista y filtrar las direcciones no deseadas
    for(int nIter=0; nIter<list.count(); nIter++)
    {
        // Si la dirección es IPv4 y no es loopback, mostrarla
        if(list[nIter].protocol() == QAbstractSocket::IPv4Protocol && !list[nIter].isLoopback())
        {
            ipv4 = list[nIter];
            // Convertir la dirección IP en un QString
            QString ip = list[nIter].toString();
            // Mostrar la dirección IP en la consola
            qDebug() << "Dirección IP:" << ip;

        }

    }
    if(puerto == 0){
        QMessageBox::critical(this, "Error", "El puerto no es legal.");
        return;
    }
    m_servidor.setMensaje(ui->lineEdit->text() + "\r\n" );

    if(!m_servidor.listen(QHostAddress::Any, puerto)){
    // if(!m_servidor.listen(ipv4, puerto)){
        QMessageBox::critical(this, "Error", m_servidor.errorString());
        return;
    }

    ipv4 = QHostAddress::Any;
    qDebug()<<"El IP es: " <<ipv4 <<"\r\nEl puerto es: "<<puerto;

    ui->etiquetaInfo->setText(" Escuchando...");
    habibitarBotones();

}


void Principal::on_btnDetener_clicked(){
    m_servidor.cerrar();
    ui->etiquetaInfo->setText("Cerrado.");
    habibitarBotones();
}




















