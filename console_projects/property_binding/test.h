
#ifndef TEST_H
#define TEST_H


#include <QObject>


class Test : public QObject
{
    Q_OBJECT
    //Define a private QStringmember:
    QString m_msg;

public:
    explicit Test(QObject *parent = nullptr);

/*
Here's an explanation of the different parts of the Q_PROPERTY macro:
    type: The type of the property, such as int, QString, or a custom class.
    name: The name of the property.
    READ: The name of the member function that provides read access to the property.
    WRITE: The name of the member function that provides write access to the property.

Define a property 'message' for the Class'Test' which uses member functions to read and write:
*/

    Q_PROPERTY(QString message READ msg WRITE setMsg NOTIFY messageChanged)

//Define 'getter' and 'setter' for Member'm_msg':
    QString msg() const;

    void setMsg(const QString &newMsg);//assign a new value to 'm_msg' and emit the signal 'messageChanged'.

signals:
    void messageChanged(QString message);
};

#endif // TEST_H
