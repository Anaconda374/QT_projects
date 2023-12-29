
#ifndef WATCHER_H
#define WATCHER_H


#include <QObject>
#include <QDebug>


class Watcher : public QObject
{
    Q_OBJECT
public:
    explicit Watcher(QObject *parent = nullptr);

signals:

//Define a 'slot' to catch the 'signal' emitted by Class'Test':
public slots:
    void messageChangedWatcher(QString message);

};

#endif // WATCHER_H
