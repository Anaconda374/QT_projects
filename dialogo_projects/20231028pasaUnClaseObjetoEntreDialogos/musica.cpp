
#include "musica.h"


QString Musica::getArtista() const
{
    return artista;
}

void Musica::setArtista(const QString &newArtista)
{
    artista = newArtista;
}

QString Musica::getAlbum() const
{
    return album;
}

void Musica::setAlbum(const QString &newAlbum)
{
    album = newAlbum;
}

QDate Musica::getEstreno() const
{
    return estreno;
}

void Musica::setEstreno(const QDate &newEstreno)
{
    estreno = newEstreno;
}

QString Musica::getNotas() const
{
    return notas;
}

void Musica::setNotas(const QString &newNotas)
{
    notas = newNotas;
}
