
#include <QCoreApplication>
#include "test_parent.h"
#include "test_child.h"

/*
In the Qt framework, the parent hierarchy is an important concept in Qt programming and is used to manage the organization, lifetime, and layout of objects in a Qt application.

    the parent hierarchy refers to the hierarchical relationship between objects in a Qt application, where each object has a parent object that it is a child of.

    At the top of the hierarchy is the QApplication object, which represents the application as a whole. Underneath the QApplication object, there may be one or more QMainWindow or QDialog objects, which represent top-level windows in the application. These top-level windows may have child widgets such as 'buttons', 'labels', and 'text boxes'.

    Each widget in a Qt application has a parent, which is another widget or the application itself. And once a parent widget is destroyed, all of its child widgets are also destroyed automatically. This makes it easier to manage the lifetime of objects in a Qt application and helps to avoid memory leaks.

    The parent-child relationship in Qt also determines the layout of widgets within a window. Child widgets are placed relative to their parent widget, and the layout of the parent widget is determined by the layout manager used.
 */


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//Use Class'test_parent' to define a QObject Pointer to hold the address of 'this' QCoreApplication:
    test_parent* app = new test_parent(&a);
    //Now we have a parent_child hierarchy, Application'a' is the parent of test_parent object '*app', and once 'a' is detroyed, the test_parent object will also be destoryed automatically.

//Demostrate the parent_child hierarchiy:
    test_parent* parent = new test_parent(app);

    test_child* child = new test_child(parent); //Use the address 'parent' to initialize an QObject '*child'.

    delete app; //Once 'parent' is destroyed, 'child' will be destoryed automatically.
    return a.exec();
}
