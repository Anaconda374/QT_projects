/********************************************************************************
** Form generated from reading UI file 'directoriomostrador.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRECTORIOMOSTRADOR_H
#define UI_DIRECTORIOMOSTRADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_directorioMostrador
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTreeView *treeView;
    QListView *listView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *directorioMostrador)
    {
        if (directorioMostrador->objectName().isEmpty())
            directorioMostrador->setObjectName(QString::fromUtf8("directorioMostrador"));
        directorioMostrador->resize(540, 401);
        directorioMostrador->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(directorioMostrador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        splitter->addWidget(treeView);
        listView = new QListView(splitter);
        listView->setObjectName(QString::fromUtf8("listView"));
        splitter->addWidget(listView);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        directorioMostrador->setCentralWidget(centralwidget);
        menubar = new QMenuBar(directorioMostrador);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 540, 23));
        directorioMostrador->setMenuBar(menubar);
        statusbar = new QStatusBar(directorioMostrador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        directorioMostrador->setStatusBar(statusbar);

        retranslateUi(directorioMostrador);

        QMetaObject::connectSlotsByName(directorioMostrador);
    } // setupUi

    void retranslateUi(QMainWindow *directorioMostrador)
    {
        directorioMostrador->setWindowTitle(QCoreApplication::translate("directorioMostrador", "directorioMostrador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class directorioMostrador: public Ui_directorioMostrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRECTORIOMOSTRADOR_H
