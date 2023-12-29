

#include <QCoreApplication>
//include header file in Brackets<...> that means it's going to search out in the system path.

#include "testclass.h"
//include header file in Quotes"*.h" s that means it's going to search out in directory structure.


/*
 * To add a class we need 'add_new' class file to the 'class_Qt' fold(not to the ambient project).
 */

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    testClass test1;
    testClass test2;

    return a.exec();
}
