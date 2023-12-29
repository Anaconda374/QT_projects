
#ifndef TEST_H
#define TEST_H


#include <QObject>
#include <QTimer>
#include <QDebug>
/*
The <QTimer> class in Qt is a utility class that provides a high-level interface for setting up timers and timer-based events. It is part of the QtCore module in the Qt framework, which is responsible for providing core non-GUI functionality.

<QTimer> allows you to schedule and manage one-time or recurring timer events. It is commonly used for tasks such as periodically updating the user interface, performing background processing, or triggering events at specific intervals. QTimer provides a convenient way to handle time-based operations without having to deal with low-level timer management.
 */


class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

signals:

public slots:
    void timeout();

private:
    /*
    Define a QTimer object'm_timer' to perform operations:
        When you create a 'QTimer' object and set an interval using the 'setInterval' function, the timer starts counting down. Once the timeout interval has passed, the timeout signal is emitted by the QTimer object. This signal indicates that the timer has expired.
    */
    QTimer m_timer;

    int timeCounter;
};

#endif // TEST_H
