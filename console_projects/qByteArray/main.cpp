
#include <QCoreApplication>
#include <QDebug>
#include <QString>

#include <QByteArray>
/*
    La clase 'QByteArray' es utilizada para representar y manipular datos de bytes. Es una clase eficiente y versátil que proporciona funcionalidades para el manejo de datos binarios, como almacenamiento, manipulación y conversión.

    La clase 'QByteArray' es similar a 'QString', pero mientras QString se utiliza para el manejo de cadenas de caracteres Unicode, QByteArray se utiliza para el manejo de datos binarios sin formato.
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString nombre = "Kuan Anacs";


/*
    Conversión de datos: La clase QByteArray ofrece métodos para convertir datos entre diferentes formatos. Puedes convertir un QByteArray a un QString si necesitas trabajar con datos binarios como texto, o convertirlo a un QByteArray codificado en base64 para transmitir o almacenar datos en un formato legible y seguro.
*/
    QByteArray buffer(nombre.toUtf8());//convertir una cadena a un 'QByteArray'.

/*
Manipulación de datos: QByteArray proporciona una amplia gama de métodos para realizar operaciones comunes en datos binarios:
 */
    buffer.append(".");
    qInfo()<<buffer;

    qInfo()<< buffer.rightJustified(15, '-'); //extender la longitud a 15 por llenando multiple'-' al principio.

    QString modificada(buffer);//convertir un 'QByteArray' a un 'QString'.

    qInfo()<< modificada;

    //Codificar un 'QByteArray' objeto:
    QByteArray codificado = buffer.toBase64();
    qInfo()<<codificado;

    //Descodificar un 'QByteArray':
    QByteArray descodificado = QByteArray::fromBase64(codificado);
    qInfo()<<descodificado;

    return a.exec();
}
