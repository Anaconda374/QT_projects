
#ifndef MUSICA_H
#define MUSICA_H

#include <QObject>
#include <QString>
#include <QDate>//"QDate" es una clase para convertir un número a una fecha.



class Musica
{
public:

    QString getArtista() const;
    void setArtista(const QString &newArtista);

    QString getAlbum() const;
    void setAlbum(const QString &newAlbum);

    QDate getEstreno() const;
    void setEstreno(const QDate &newEstreno);

    QString getNotas() const;
    void setNotas(const QString &newNotas);

private:

    QString artista;
    QString album;
    QDate estreno;
    QString notas;

};

#endif // MUSICA_H
