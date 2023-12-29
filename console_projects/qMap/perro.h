
#ifndef PERRO_H
#define PERRO_H


#include <QObject>


class Perro : public QObject
{
private:
    Q_OBJECT
    int edad;
    QString nombre;

public:
    explicit Perro(QObject *parent = nullptr);

    int getEdad() const;
    void setEdad(int newEdad);

    QString getNombre() const;
    void setNombre(const QString &newNombre);

signals:

};

#endif // PERRO_H
