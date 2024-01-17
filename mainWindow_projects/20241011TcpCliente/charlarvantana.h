#ifndef CHARLARVANTANA_H
#define CHARLARVANTANA_H

#include <QMainWindow>

#include <QMessageBox>
#include <QTcpSocket>

//para demostrar los mensajes en "listView".
#include <QStringList>
#include <QStringListModel>

#include <QAbstractSocket> //para crear un socket para este cliente.
#include <QInputDialog>
#include <QByteArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class CharlarVantana;
}
QT_END_NAMESPACE

class CharlarVantana : public QMainWindow
{
    Q_OBJECT

public:
    CharlarVantana(QWidget *parent = nullptr);
    ~CharlarVantana();


private slots:
    void conectado();
    void desconectado();
    void listo_leer();
    void error(QAbstractSocket::SocketError error);



    void on_btnConectar_clicked();

    void on_btnDesconectar_clicked();

    void on_btnMandar_clicked();

private:
    Ui::CharlarVantana *ui;

    QTcpSocket m_socket;
    QStringList mensaje_lista;
    QStringListModel m_modelo;
    QString m_nombre;

    void iniciar();

};
#endif // CHARLARVANTANA_H
