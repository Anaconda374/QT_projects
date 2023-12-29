/********************************************************************************
** Form generated from reading UI file 'webmarcador.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBMARCADOR_H
#define UI_WEBMARCADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebMarcador
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QToolBox *toolBox;
    QWidget *pagina1;
    QWidget *pagina2;
    QWidget *pagina3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WebMarcador)
    {
        if (WebMarcador->objectName().isEmpty())
            WebMarcador->setObjectName(QString::fromUtf8("WebMarcador"));
        WebMarcador->resize(303, 236);
        centralwidget = new QWidget(WebMarcador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        pagina1 = new QWidget();
        pagina1->setObjectName(QString::fromUtf8("pagina1"));
        pagina1->setGeometry(QRect(0, 0, 283, 74));
        toolBox->addItem(pagina1, QString::fromUtf8("Page 1"));
        pagina2 = new QWidget();
        pagina2->setObjectName(QString::fromUtf8("pagina2"));
        toolBox->addItem(pagina2, QString::fromUtf8("Page"));
        pagina3 = new QWidget();
        pagina3->setObjectName(QString::fromUtf8("pagina3"));
        pagina3->setGeometry(QRect(0, 0, 352, 175));
        toolBox->addItem(pagina3, QString::fromUtf8("Page 2"));

        gridLayout->addWidget(toolBox, 0, 0, 1, 1);

        WebMarcador->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WebMarcador);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 303, 23));
        WebMarcador->setMenuBar(menubar);
        statusbar = new QStatusBar(WebMarcador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WebMarcador->setStatusBar(statusbar);

        retranslateUi(WebMarcador);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WebMarcador);
    } // setupUi

    void retranslateUi(QMainWindow *WebMarcador)
    {
        WebMarcador->setWindowTitle(QCoreApplication::translate("WebMarcador", "WebMarcador", nullptr));
        toolBox->setItemText(toolBox->indexOf(pagina1), QCoreApplication::translate("WebMarcador", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(pagina2), QCoreApplication::translate("WebMarcador", "Page", nullptr));
        toolBox->setItemText(toolBox->indexOf(pagina3), QCoreApplication::translate("WebMarcador", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WebMarcador: public Ui_WebMarcador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBMARCADOR_H
