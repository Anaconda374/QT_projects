/********************************************************************************
** Form generated from reading UI file 'dialogdemo1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDEMO1_H
#define UI_DIALOGDEMO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogDemo1
{
public:
    QPushButton *btnConPadre;
    QPushButton *btnSinPadre;
    QLabel *rotuloPrincipal;
    QPushButton *btnConPadre_modalDialogo;

    void setupUi(QDialog *DialogDemo1)
    {
        if (DialogDemo1->objectName().isEmpty())
            DialogDemo1->setObjectName(QString::fromUtf8("DialogDemo1"));
        DialogDemo1->resize(668, 419);
        btnConPadre = new QPushButton(DialogDemo1);
        btnConPadre->setObjectName(QString::fromUtf8("btnConPadre"));
        btnConPadre->setGeometry(QRect(110, 110, 441, 61));
        btnSinPadre = new QPushButton(DialogDemo1);
        btnSinPadre->setObjectName(QString::fromUtf8("btnSinPadre"));
        btnSinPadre->setGeometry(QRect(110, 300, 441, 61));
        rotuloPrincipal = new QLabel(DialogDemo1);
        rotuloPrincipal->setObjectName(QString::fromUtf8("rotuloPrincipal"));
        rotuloPrincipal->setGeometry(QRect(150, 30, 261, 41));
        QFont font;
        font.setPointSize(18);
        font.setItalic(false);
        rotuloPrincipal->setFont(font);
        btnConPadre_modalDialogo = new QPushButton(DialogDemo1);
        btnConPadre_modalDialogo->setObjectName(QString::fromUtf8("btnConPadre_modalDialogo"));
        btnConPadre_modalDialogo->setGeometry(QRect(110, 200, 441, 61));

        retranslateUi(DialogDemo1);

        QMetaObject::connectSlotsByName(DialogDemo1);
    } // setupUi

    void retranslateUi(QDialog *DialogDemo1)
    {
        DialogDemo1->setWindowTitle(QCoreApplication::translate("DialogDemo1", "DialogDemo1", nullptr));
        btnConPadre->setText(QCoreApplication::translate("DialogDemo1", "Abrir un di\303\241logo que su padre es este di\303\241logo principal", nullptr));
        btnSinPadre->setText(QCoreApplication::translate("DialogDemo1", "Abrir un di\303\241logo que no tiene padre", nullptr));
        rotuloPrincipal->setText(QCoreApplication::translate("DialogDemo1", "Principal Di\303\241logo", nullptr));
        btnConPadre_modalDialogo->setText(QCoreApplication::translate("DialogDemo1", "Abrir un di\303\241logo como un \"modal di\303\241logo\" que tiene el padre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDemo1: public Ui_DialogDemo1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDEMO1_H
