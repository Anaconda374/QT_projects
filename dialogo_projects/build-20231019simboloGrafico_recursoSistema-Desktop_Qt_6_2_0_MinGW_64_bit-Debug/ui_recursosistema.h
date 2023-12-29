/********************************************************************************
** Form generated from reading UI file 'recursosistema.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECURSOSISTEMA_H
#define UI_RECURSOSISTEMA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recursoSistema
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNuevo;
    QPushButton *btnAlmacenar;
    QPushButton *btnAbrir;
    QPlainTextEdit *textoEditor;
    QDialogButtonBox *btnCaja;

    void setupUi(QDialog *recursoSistema)
    {
        if (recursoSistema->objectName().isEmpty())
            recursoSistema->setObjectName(QString::fromUtf8("recursoSistema"));
        recursoSistema->resize(474, 374);
        widget = new QWidget(recursoSistema);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 70, 278, 234));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnNuevo = new QPushButton(widget);
        btnNuevo->setObjectName(QString::fromUtf8("btnNuevo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/simbolos/simbolos_graficos/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNuevo->setIcon(icon);

        horizontalLayout->addWidget(btnNuevo);

        btnAlmacenar = new QPushButton(widget);
        btnAlmacenar->setObjectName(QString::fromUtf8("btnAlmacenar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/simbolos/simbolos_graficos/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAlmacenar->setIcon(icon1);

        horizontalLayout->addWidget(btnAlmacenar);

        btnAbrir = new QPushButton(widget);
        btnAbrir->setObjectName(QString::fromUtf8("btnAbrir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/simbolos/simbolos_graficos/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAbrir->setIcon(icon2);

        horizontalLayout->addWidget(btnAbrir);


        verticalLayout->addLayout(horizontalLayout);

        textoEditor = new QPlainTextEdit(widget);
        textoEditor->setObjectName(QString::fromUtf8("textoEditor"));

        verticalLayout->addWidget(textoEditor);

        btnCaja = new QDialogButtonBox(widget);
        btnCaja->setObjectName(QString::fromUtf8("btnCaja"));
        btnCaja->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout->addWidget(btnCaja);


        retranslateUi(recursoSistema);

        QMetaObject::connectSlotsByName(recursoSistema);
    } // setupUi

    void retranslateUi(QDialog *recursoSistema)
    {
        recursoSistema->setWindowTitle(QCoreApplication::translate("recursoSistema", "recursoSistema", nullptr));
        btnNuevo->setText(QCoreApplication::translate("recursoSistema", "Nuevo", nullptr));
        btnAlmacenar->setText(QCoreApplication::translate("recursoSistema", "Almacenar", nullptr));
        btnAbrir->setText(QCoreApplication::translate("recursoSistema", "Abrir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recursoSistema: public Ui_recursoSistema {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECURSOSISTEMA_H
