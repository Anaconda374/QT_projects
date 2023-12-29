
#include <QCoreApplication>
#include <QDebug>
//The head files have names start with 'Q' is part of Qt, not the C++ STL.

#include <iostream>

 // Entry point: Main function;
 // Each time after the modification of code, we have to clean the executable file, and rebuild the project.

/*
Build process:
1.Run MOC(Meta Object Compiler): "Automatic MOC and UIC for target consoleApp_test", MOC generate the necessary code to support these features in the fold "build-class_Qt-Desktop_Qt_6_2_0_MinGW_64_bit-Debug\class_Qt_autogen\EWIEGA46WW"

2.Build the background files(such as includes) into a object '.obj' file: "Building CXX object CMakeFiles/consoleApp_test.dir/consoleApp_test_autogen/mocs_compilation.cpp.obj"

3.Build the source code(*.cpp/*.h) into a object '.obj' file:  "Building CXX object CMakeFiles/consoleApp_test.dir/main.cpp.obj"

4.Link the object files and generate a executable '.exe' file:  "Linking CXX executable consoleApp_test.exe:
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); //object.

    //usually, programmers do not use 'std::cout'. Instead, they use 'qInfo()' to output the information in Qt.
    qInfo()<< "hello world";


    //'enum' used to define a new type and assign the element in brace{...} with indices(zero based):
    enum Color{red, green, blue = 256};
    Color myColor = Color::blue;
    Color tuColor = Color::green;

    std::cout<< "The index of myColor is: ";
    qInfo() << myColor;

    std::cout<< "The index of tuColor is: ";
    qInfo() << tuColor;

    return a.exec(); //function for execution.
}
