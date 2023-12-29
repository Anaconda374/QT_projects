
#ifndef RADIO_H
#define RADIO_H


#include <QObject>
#include <QDebug>

class Radio : public QObject
{
    Q_OBJECT
public:
    explicit Radio(QObject *parent = nullptr);

signals:
    void quit();//use to send a 'quit' signal to the whole application.

public slots:
    //define a function to listen to a specific channel(or station):
    void listen(int channelNum, QString name, QString message);

};

#endif // RADIO_H
