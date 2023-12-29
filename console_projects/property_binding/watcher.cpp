
#include "watcher.h"

Watcher::Watcher(QObject *parent)
    : QObject{parent}
{

}

void Watcher::messageChangedWatcher(QString message)
{
    qInfo()<<message;
}

