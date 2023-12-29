
#ifndef PERRO_H
#define PERRO_H


#include <QObject>
#include <QDebug>


class Perro : public QObject
{
    Q_OBJECT
public:
    explicit Perro(QObject *parent = nullptr);

signals:

public slots:
    void comer();

};

#endif // PERRO_H
