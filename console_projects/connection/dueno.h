
#ifndef DUENO_H
#define DUENO_H


#include <QObject>
#include <QDebug>

class Dueno : public QObject
{
    Q_OBJECT
public:
    explicit Dueno(QObject *parent = nullptr);

    void darComida();

signals:
    void alimentar();

};

#endif // DUENO_H
