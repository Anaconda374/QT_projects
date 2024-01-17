#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <QObject>
#include <QList>


/*
Las clases QTcpServer y QTcpSocket en Qt son para crear aplicaciones de red que usan el protocolo TCP. TCP es una forma de enviar y recibir datos entre dos dispositivos de forma segura y confiable. Por ejemplo, cuando visitas una página web, tu navegador usa TCP para comunicarse con el servidor web.


QTcpServer:
    La clase QTcpServer es para crear un servidor que puede "escuchar" y "aceptar" conexiones de otros dispositivos. Cuando un dispositivo se conecta al servidor, el servidor crea un objeto de "QTcpSocket” para comunicarse con ese dispositivo.

QTcpSocket:
    El objeto QTcpSocket puede “enviar” y “recibir” datos usando los métodos “write” y “read”. También puede emitir señales cuando hay datos disponibles, cuando la conexión se cierra, o cuando ocurre un error.
    La clase QTcpSocket también se puede usar para crear un cliente que se conecta a un servidor. Para hacerlo, hay que crear un objeto QTcpSocket y llamar al método "connectToHost" con la dirección y el puerto del servidor. Luego, se puede usar el mismo objeto para enviar y recibir datos, y para manejar las señales.
 */

//para includir las clases <QTcpServer> y <QTcpSocket>, necesitamos "QT += network" al principio del archivo "*.pro" primeramente:
#include <QTcpServer>
#include <QTcpSocket>




class Servidor : public QTcpServer
{
    Q_OBJECT
public:
    explicit Servidor(QObject *parent = nullptr);

    Servidor(QString mensaje, QList<QTcpSocket *> m_lista)
        : mensaje(std::move(mensaje)), m_lista(std::move(m_lista)) {}
    int contar(); // devolver el número de los clientes conectados.

    void cerrar();

    QString getMensaje() const;
    void setMensaje(const QString &newMensaje);

public slots:
    void desconectar();
    void listo_Leer();

signals:
    void cambiado();

    // QTcpServer interface
protected:
    void incomingConnection(qintptr handle) override;

private:
    QString mensaje;
    QList<QTcpSocket*> m_lista; //para almacenar los punteros que indican los clientes.




};

#endif // SERVIDOR_H
