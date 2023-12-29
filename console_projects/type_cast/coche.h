
#ifndef COCHE_H
#define COCHE_H


#include <QObject>
#include <QDebug>

class Coche : public QObject
{
    Q_OBJECT
public:
    explicit Coche(QObject *parent = nullptr);

    QString color = "blanco";
    int asientoNum = 4;
    void mover();
    void detener();

signals:

};

#endif // COCHE_H
