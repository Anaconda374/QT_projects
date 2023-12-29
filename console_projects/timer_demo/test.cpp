
#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{

    timeCounter = 0;
/*
    When you create a 'QTimer' object and set an interval using the 'setInterval' function, the timer starts counting down. Once the timeout interval has passed, the timeout signal is emitted by the QTimer object. This signal indicates that the timer has expired.                                                                                                                                                                       */
    QObject::connect(&m_timer, &QTimer::timeout, this, &Test::timeout);


    m_timer.setInterval(1000);//set a interval of "1000 milliseconds" = 1 second.
    m_timer.start();//If we dont stop the timer, our timer will start to "repeatly" with an interval of 2 seconds, and keep emit the signal 'timeout'.
//    m_timer.stop();

}

void Test::timeout()
{

    qInfo()<<"Test, time just passed " << ++timeCounter <<"s" ;

    //if the timer is run over 3 seconds, stop it.
    if(timeCounter >= 3){
        m_timer.stop();
        qInfo()<< "time over!";
    }
}

