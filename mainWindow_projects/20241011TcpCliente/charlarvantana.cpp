#include "charlarvantana.h"
#include "ui_charlarvantana.h"

CharlarVantana::CharlarVantana(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CharlarVantana)
{
    ui->setupUi(this);

    iniciar();

}

void CharlarVantana::iniciar()
{

    //Cuando un cliente se ha encontrado conectado, llamar la función "conectado".
    connect(&m_socket, &QTcpSocket::connected, this, &CharlarVantana::conectado);
    connect(&m_socket, &QTcpSocket::disconnected, this, &CharlarVantana::desconectado);
    connect(&m_socket, &QTcpSocket::readyRead, this, &CharlarVantana::listo_leer);
    connect(&m_socket, &QAbstractSocket::errorOccurred, this, &CharlarVantana::error);

    ui->btnConectar->setEnabled(true);
    ui->btnDesconectar->setEnabled(false);
    ui->btnMandar->setEnabled(false);
    m_modelo.setStringList(mensaje_lista);
    ui->mensajeVisto->setModel(&m_modelo);


}

void CharlarVantana::on_btnConectar_clicked()
{

    if(m_socket.isOpen()) m_socket.close();
    //Si el socket está abierto, significa que el proceso puede establecer una conexión con el servidor y enviarle solicitudes. Si el socket está cerrado, significa que el proceso ha terminado la comunicación con el servidor o ha recibido una orden para cerrarla.

    m_nombre = QInputDialog::getText(this, "Nombre", "Qué es tu nombre?", QLineEdit::EchoMode::Normal, m_nombre);

    bool ok;

    //extraer el numero del puerto.
    quint16 puerto = static_cast<quint16>(ui->puertoEditor->text().toInt(&ok));
    QHostAddress ipv4 = static_cast<QHostAddress>(ui->ipEditor->text());

    if(!ok){
        QMessageBox::critical(this, "Error", "Por favor, entrar un nombre legal!");
        return;
    }

    qDebug()<<"El IP es: " <<ipv4 <<"\r\nEl puerto es: "<<puerto;


    m_socket.connectToHost(ipv4, puerto);
    ui->btnConectar->setEnabled(false);
    ui->btnDesconectar->setEnabled(false);
    ui->btnMandar->setEnabled(false);

    if(!m_socket.waitForConnected(3000)){
        on_btnDesconectar_clicked();
        QMessageBox::critical(this, "Error", "No puede conectar al servidor!");
        return;
    }

}


void CharlarVantana::on_btnDesconectar_clicked()
{
    m_socket.close();
    ui->btnConectar->setEnabled(true);
    ui->btnDesconectar->setEnabled(false);
    ui->btnMandar->setEnabled(false);


}


void CharlarVantana::on_btnMandar_clicked()
{
    if(!m_socket.isOpen()) return;

    QString dato = m_nombre ; //Usar el objeto de "QByteArray" a almacenar los mensajes variados.

    dato.append(QString(": "));
    dato.append(ui->textoEditor->text());

    QByteArray dato_convertido = dato.toUtf8();

    //El método ".write(...)" de la clase “QTcpSocket” escribe una secuencia de bytes en el socket TCP. Este método es útil para enviar datos a otro dispositivo o aplicación que esté conectado al mismo socket. El método .write(...) acepta un parámetro de tipo “QByteArray” que contiene los datos que se quieren enviar.
    m_socket.write(dato_convertido);

    //reiniciar el mensaje editor.
    ui->textoEditor->setText(QString());

}




CharlarVantana::~CharlarVantana()
{
    delete ui;
}

void CharlarVantana::conectado()
{
    ui->btnConectar->setEnabled(false);
    ui->btnDesconectar->setEnabled(true);
    ui->btnMandar->setEnabled(true);


}

void CharlarVantana::desconectado()
{
    ui->btnConectar->setEnabled(true);
    ui->btnDesconectar->setEnabled(false);
    ui->btnMandar->setEnabled(false);
 }

void CharlarVantana::listo_leer()
{
    //extraer datos se todavia existen en el socket, y demostrarlos en la ventana.
    QByteArray datos = m_socket.readAll();
    QString nuevoMensaje(datos);
    mensaje_lista.append(nuevoMensaje);
    m_modelo.setStringList(mensaje_lista);
    ui->mensajeVisto->scrollToBottom(); //mover el mensaje visto hasta la parte más inferior.

}

void CharlarVantana::error(QAbstractSocket::SocketError error)
{
    Q_UNUSED(error);
    QMessageBox::critical(this,"error",m_socket.errorString());

}







