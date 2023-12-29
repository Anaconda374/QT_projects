
#ifndef SOURCE_H
#define SOURCE_H


#include <QObject>


/*
    In Qt, a signal is a member function(without implementation) of a class that is used to emit an event or notification to other parts of the application. Signals are used to indicate that some event or condition has occurred, such as the user clicking a button, data becoming available, or an error occurring.

    A signal is declared using the signals keyword in the class definition, followed by the access specifier (public, protected, or private) and the function signature of the signal. The function signature of a signal is similar to that of a regular member function, but with no implementation.

    Signals are typically emitted from within a member function of the class, using the emit keyword. When a signal is emitted, all connected slots (which are functions that are connected to the signal) will be called.


*/
class Source : public QObject
{
    Q_OBJECT
public:
    explicit Source(QObject *parent = nullptr);

    void emit_sig();

signals:
/*
    By convention, all signal declarations in Qt are preceded by the 'void' keyword. This helps to distinguish signals from other member functions in the class, which may have different return types.
*/
    void my_signal(QString msg1);
};

#endif // SOURCE_H
