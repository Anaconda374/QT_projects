/********************************************************************************
** Form generated from reading UI file 'cambiareltamano.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMBIARELTAMANO_H
#define UI_CAMBIARELTAMANO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CambiarElTamano
{
public:
    QAction *actionAbrir;
    QAction *actionZoom_Acercar;
    QAction *actionZoom_Alejar;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuVista;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *CambiarElTamano)
    {
        if (CambiarElTamano->objectName().isEmpty())
            CambiarElTamano->setObjectName(QString::fromUtf8("CambiarElTamano"));
        CambiarElTamano->resize(614, 446);
        actionAbrir = new QAction(CambiarElTamano);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionZoom_Acercar = new QAction(CambiarElTamano);
        actionZoom_Acercar->setObjectName(QString::fromUtf8("actionZoom_Acercar"));
        actionZoom_Alejar = new QAction(CambiarElTamano);
        actionZoom_Alejar->setObjectName(QString::fromUtf8("actionZoom_Alejar"));
        centralwidget = new QWidget(CambiarElTamano);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(120, 60, 391, 241));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 389, 239));
        scrollArea->setWidget(scrollAreaWidgetContents);
        CambiarElTamano->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CambiarElTamano);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 614, 23));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuVista = new QMenu(menubar);
        menuVista->setObjectName(QString::fromUtf8("menuVista"));
        CambiarElTamano->setMenuBar(menubar);
        statusbar = new QStatusBar(CambiarElTamano);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CambiarElTamano->setStatusBar(statusbar);
        toolBar = new QToolBar(CambiarElTamano);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        CambiarElTamano->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuVista->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuVista->addAction(actionZoom_Acercar);
        menuVista->addAction(actionZoom_Alejar);
        toolBar->addAction(actionAbrir);
        toolBar->addSeparator();
        toolBar->addAction(actionZoom_Acercar);
        toolBar->addAction(actionZoom_Alejar);

        retranslateUi(CambiarElTamano);

        QMetaObject::connectSlotsByName(CambiarElTamano);
    } // setupUi

    void retranslateUi(QMainWindow *CambiarElTamano)
    {
        CambiarElTamano->setWindowTitle(QCoreApplication::translate("CambiarElTamano", "CambiarElTamano", nullptr));
        actionAbrir->setText(QCoreApplication::translate("CambiarElTamano", "Abrir", nullptr));
#if QT_CONFIG(tooltip)
        actionAbrir->setToolTip(QCoreApplication::translate("CambiarElTamano", "Abrir", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoom_Acercar->setText(QCoreApplication::translate("CambiarElTamano", "Zoom Acercar", nullptr));
        actionZoom_Alejar->setText(QCoreApplication::translate("CambiarElTamano", "Zoom Alejar", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("CambiarElTamano", "Archivo", nullptr));
        menuVista->setTitle(QCoreApplication::translate("CambiarElTamano", "Vista", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("CambiarElTamano", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CambiarElTamano: public Ui_CambiarElTamano {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMBIARELTAMANO_H
