
#include <QCoreApplication>
#include <QDebug>
/*
Qt define 3 clases para mostrar(o imprimir) las fechas y tiempo -- 'QDate', 'QTime', 'QDateTime(como una combinacion de QDate y DTime)'
 */
#include <QDate>
#include <QTime>
#include <QDateTime>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//Clase 'QDate':
    QDate hoy = QDate::currentDate();//definir un objeto a almacenar la fecha hoy.
    qInfo()<< hoy;
    //QDate clase tambien define varios funciones a sus objetos:
    qInfo()<< hoy.addDays(1);
    qInfo()<< hoy.addYears(10);

    //Imprimir dato en formas diferentes:
    qInfo()<< "ISODate: " << hoy.toString(Qt::DateFormat::ISODate);
    qInfo()<< "RFC2822Date: " << hoy.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<< "TextDate: " << hoy.toString(Qt::DateFormat::TextDate);

//Clase 'QTime':
    QTime ahora = QTime::currentTime();
    qInfo()<<ahora;


//Clase 'QDateTime':
    QDateTime corriente = QDateTime::currentDateTimeUtc();
    qInfo()<<corriente;
    return a.exec();
}
