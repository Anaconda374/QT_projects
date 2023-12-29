/********************************************************************************
** Form generated from reading UI file 'textoeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTOEDITOR_H
#define UI_TEXTOEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextoEditor
{
public:
    QAction *accionAbrir;
    QAction *accionAlmacenar;
    QAction *accionCopiar;
    QAction *accionCortar;
    QAction *accionPegar;
    QAction *accionNuevo;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *planoTextoEditor;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TextoEditor)
    {
        if (TextoEditor->objectName().isEmpty())
            TextoEditor->setObjectName(QString::fromUtf8("TextoEditor"));
        TextoEditor->resize(575, 434);
        accionAbrir = new QAction(TextoEditor);
        accionAbrir->setObjectName(QString::fromUtf8("accionAbrir"));
        accionAlmacenar = new QAction(TextoEditor);
        accionAlmacenar->setObjectName(QString::fromUtf8("accionAlmacenar"));
        accionCopiar = new QAction(TextoEditor);
        accionCopiar->setObjectName(QString::fromUtf8("accionCopiar"));
        accionCortar = new QAction(TextoEditor);
        accionCortar->setObjectName(QString::fromUtf8("accionCortar"));
        accionPegar = new QAction(TextoEditor);
        accionPegar->setObjectName(QString::fromUtf8("accionPegar"));
        accionNuevo = new QAction(TextoEditor);
        accionNuevo->setObjectName(QString::fromUtf8("accionNuevo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/simbolos_graficos/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        accionNuevo->setIcon(icon);
        centralwidget = new QWidget(TextoEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        planoTextoEditor = new QPlainTextEdit(centralwidget);
        planoTextoEditor->setObjectName(QString::fromUtf8("planoTextoEditor"));

        gridLayout->addWidget(planoTextoEditor, 0, 0, 1, 1);

        TextoEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextoEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 575, 23));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        TextoEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(TextoEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TextoEditor->setStatusBar(statusbar);
        toolBar = new QToolBar(TextoEditor);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        TextoEditor->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addSeparator();
        menuMenu->addAction(accionNuevo);
        menuMenu->addAction(accionAbrir);
        menuMenu->addSeparator();
        menuMenu->addAction(accionAlmacenar);
        toolBar->addAction(accionNuevo);
        toolBar->addAction(accionCopiar);
        toolBar->addAction(accionCortar);
        toolBar->addAction(accionPegar);

        retranslateUi(TextoEditor);

        QMetaObject::connectSlotsByName(TextoEditor);
    } // setupUi

    void retranslateUi(QMainWindow *TextoEditor)
    {
        TextoEditor->setWindowTitle(QCoreApplication::translate("TextoEditor", "TextoEditor", nullptr));
        accionAbrir->setText(QCoreApplication::translate("TextoEditor", "Abrir", nullptr));
        accionAlmacenar->setText(QCoreApplication::translate("TextoEditor", "Almacenar", nullptr));
        accionCopiar->setText(QCoreApplication::translate("TextoEditor", "Copiar", nullptr));
        accionCortar->setText(QCoreApplication::translate("TextoEditor", "Cortar", nullptr));
        accionPegar->setText(QCoreApplication::translate("TextoEditor", "Pegar", nullptr));
        accionNuevo->setText(QCoreApplication::translate("TextoEditor", "Nuevo", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("TextoEditor", "Men\303\272 para Demostrar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("TextoEditor", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextoEditor: public Ui_TextoEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTOEDITOR_H
