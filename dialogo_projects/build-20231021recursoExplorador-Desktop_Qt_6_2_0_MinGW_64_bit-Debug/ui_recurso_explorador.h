/********************************************************************************
** Form generated from reading UI file 'recurso_explorador.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECURSO_EXPLORADOR_H
#define UI_RECURSO_EXPLORADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_recurso_explorador
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listaArtilugios;
    QHBoxLayout *horizontalLayout;
    QLabel *rotuloIcono;
    QLabel *rotuloPaso;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnBueno;

    void setupUi(QDialog *recurso_explorador)
    {
        if (recurso_explorador->objectName().isEmpty())
            recurso_explorador->setObjectName(QString::fromUtf8("recurso_explorador"));
        recurso_explorador->resize(436, 463);
        verticalLayout = new QVBoxLayout(recurso_explorador);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listaArtilugios = new QListWidget(recurso_explorador);
        listaArtilugios->setObjectName(QString::fromUtf8("listaArtilugios"));

        verticalLayout->addWidget(listaArtilugios);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rotuloIcono = new QLabel(recurso_explorador);
        rotuloIcono->setObjectName(QString::fromUtf8("rotuloIcono"));
        rotuloIcono->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(rotuloIcono);

        rotuloPaso = new QLabel(recurso_explorador);
        rotuloPaso->setObjectName(QString::fromUtf8("rotuloPaso"));

        horizontalLayout->addWidget(rotuloPaso);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnBueno = new QPushButton(recurso_explorador);
        btnBueno->setObjectName(QString::fromUtf8("btnBueno"));

        horizontalLayout_2->addWidget(btnBueno);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(recurso_explorador);

        QMetaObject::connectSlotsByName(recurso_explorador);
    } // setupUi

    void retranslateUi(QDialog *recurso_explorador)
    {
        recurso_explorador->setWindowTitle(QCoreApplication::translate("recurso_explorador", "recurso_explorador", nullptr));
        rotuloIcono->setText(QCoreApplication::translate("recurso_explorador", "X", nullptr));
        rotuloPaso->setText(QCoreApplication::translate("recurso_explorador", ":/", nullptr));
        btnBueno->setText(QCoreApplication::translate("recurso_explorador", "Bueno", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recurso_explorador: public Ui_recurso_explorador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECURSO_EXPLORADOR_H
