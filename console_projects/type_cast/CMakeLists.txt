cmake_minimum_required(VERSION 3.14)

project(type_cast LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(type_cast
  main.cpp
  coche.h coche.cpp
  cochedecarreras.h cochedecarreras.cpp
  felino.h felino.cpp
)
target_link_libraries(type_cast Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS type_cast
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
