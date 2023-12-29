
#include <QCoreApplication>

/*
    The signal and slot mechanism in Qt was designed and implemented by the developers of Qt as a way to enable flexible and efficient communication between objects in a graphical user interface (GUI) application.

    The signal and slot mechanism is only defined for Class"QObject" and its subclasses in Qt. This is because the signal and slot mechanism relies on certain features that are provided by QObject and its hierarchy, such as the ability to emit signals and the ability to receive signals through slots.
 */

#include "source.h"
#include "destination.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//Define 2 objects, 'sender' will emit the signal, and 'receiver' will receive the signal.

    Source sender;
    Destination receiver;

/*
Class QObject define the function "connect(sender, &Sender::signal, receiver, &Receiver::slot)" to connect signal and slot:
    sender: A pointer to the object that emits the signal.
    signal: The name of the signal emitted by the sender, in the form of &Sender::signal.
    receiver: A pointer to the object that receives the signal.
    slot: The name of the slot that receives the signal, in the form of &Receiver::slot.
 */
    QObject::connect(&sender, &Source::my_signal, &receiver, &Destination::my_slot);
    sender.emit_sig();//emit the signal.

 /*
 Disconnect a signal from a slot:
  */
    sender.disconnect(&sender, &Source::my_signal, &receiver, &Destination::my_slot);


    sender.emit_sig();//now, 'signal' and 'slot' is disconnected.

    return a.exec();
}
