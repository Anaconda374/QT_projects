
#ifndef STATION_H
#define STATION_H


#include <QObject>
#include <QDebug>


class Station : public QObject
{
    Q_OBJECT
public:
    //Define a constructor of stations:
    explicit Station(QObject *parent = nullptr, int channel = 0, QString name = "unknown");

    //Class members;
    int channelNum;
    QString channelName;

signals:
    //define a signal'sendData' which is connected to the radio slot 'listen':
    void sendData(int channelNum, QString channelName, QString message);

public slots:
    //when a station is broadcosting, it will emit the signal 'sendData', so the radio can listen to it.
    void broadcast(QString message);

};

#endif // STATION_H
