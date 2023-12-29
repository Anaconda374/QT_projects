/********************************************************************************
** Form generated from reading UI file 'arbolylistavistas.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARBOLYLISTAVISTAS_H
#define UI_ARBOLYLISTAVISTAS_H

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

class Ui_ArbolYListaVistas
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTreeView *treeView;
    QListView *listView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ArbolYListaVistas)
    {
        if (ArbolYListaVistas->objectName().isEmpty())
            ArbolYListaVistas->setObjectName(QString::fromUtf8("ArbolYListaVistas"));
        ArbolYListaVistas->resize(601, 402);
        ArbolYListaVistas->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(ArbolYListaVistas);
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
        listView->setViewMode(QListView::IconMode);
        splitter->addWidget(listView);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        ArbolYListaVistas->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ArbolYListaVistas);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 601, 23));
        ArbolYListaVistas->setMenuBar(menubar);
        statusbar = new QStatusBar(ArbolYListaVistas);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ArbolYListaVistas->setStatusBar(statusbar);

        retranslateUi(ArbolYListaVistas);

        QMetaObject::connectSlotsByName(ArbolYListaVistas);
    } // setupUi

    void retranslateUi(QMainWindow *ArbolYListaVistas)
    {
        ArbolYListaVistas->setWindowTitle(QCoreApplication::translate("ArbolYListaVistas", "ArbolYListaVistas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArbolYListaVistas: public Ui_ArbolYListaVistas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARBOLYLISTAVISTAS_H
