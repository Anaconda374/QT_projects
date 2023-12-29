
#ifndef FELINO_H
#define FELINO_H


#include <QObject>


class Felino : public QObject
{
    Q_OBJECT
public:
    explicit Felino(QObject *parent = nullptr);
    int pataNum = 4;

signals:

};

#endif // FELINO_H
