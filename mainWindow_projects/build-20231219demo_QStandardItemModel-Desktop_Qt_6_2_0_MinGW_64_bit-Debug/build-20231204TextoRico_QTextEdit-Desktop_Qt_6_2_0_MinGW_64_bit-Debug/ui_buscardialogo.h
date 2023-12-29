/********************************************************************************
** Form generated from reading UI file 'buscardialogo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARDIALOGO_H
#define UI_BUSCARDIALOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BuscarDialogo
{
public:
    QFormLayout *formLayout;
    QGridLayout *gridLayout;
    QLabel *etiquetaBuscar;
    QLineEdit *lineaBuscarTexto;
    QPushButton *btnDetras;
    QPushButton *btnAdelante;
    QLabel *etiquetaReemplazar;
    QLineEdit *lineaReemplazarTexto;
    QPushButton *btnReemplazar;
    QPushButton *btnReemplazarTodo;
    QVBoxLayout *verticalLayout;
    QCheckBox *cajaCoincide;
    QCheckBox *cajaDistingue;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRechazar;

    void setupUi(QDialog *BuscarDialogo)
    {
        if (BuscarDialogo->objectName().isEmpty())
            BuscarDialogo->setObjectName(QString::fromUtf8("BuscarDialogo"));
        BuscarDialogo->resize(513, 226);
        BuscarDialogo->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 173, 173);\n"
"color:rgb(27, 27, 27)"));
        formLayout = new QFormLayout(BuscarDialogo);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        etiquetaBuscar = new QLabel(BuscarDialogo);
        etiquetaBuscar->setObjectName(QString::fromUtf8("etiquetaBuscar"));

        gridLayout->addWidget(etiquetaBuscar, 0, 0, 1, 1);

        lineaBuscarTexto = new QLineEdit(BuscarDialogo);
        lineaBuscarTexto->setObjectName(QString::fromUtf8("lineaBuscarTexto"));

        gridLayout->addWidget(lineaBuscarTexto, 0, 1, 1, 1);

        btnDetras = new QPushButton(BuscarDialogo);
        btnDetras->setObjectName(QString::fromUtf8("btnDetras"));

        gridLayout->addWidget(btnDetras, 0, 2, 1, 1);

        btnAdelante = new QPushButton(BuscarDialogo);
        btnAdelante->setObjectName(QString::fromUtf8("btnAdelante"));

        gridLayout->addWidget(btnAdelante, 0, 3, 1, 1);

        etiquetaReemplazar = new QLabel(BuscarDialogo);
        etiquetaReemplazar->setObjectName(QString::fromUtf8("etiquetaReemplazar"));

        gridLayout->addWidget(etiquetaReemplazar, 1, 0, 1, 1);

        lineaReemplazarTexto = new QLineEdit(BuscarDialogo);
        lineaReemplazarTexto->setObjectName(QString::fromUtf8("lineaReemplazarTexto"));

        gridLayout->addWidget(lineaReemplazarTexto, 1, 1, 1, 1);

        btnReemplazar = new QPushButton(BuscarDialogo);
        btnReemplazar->setObjectName(QString::fromUtf8("btnReemplazar"));

        gridLayout->addWidget(btnReemplazar, 1, 2, 1, 1);

        btnReemplazarTodo = new QPushButton(BuscarDialogo);
        btnReemplazarTodo->setObjectName(QString::fromUtf8("btnReemplazarTodo"));

        gridLayout->addWidget(btnReemplazarTodo, 1, 3, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cajaCoincide = new QCheckBox(BuscarDialogo);
        cajaCoincide->setObjectName(QString::fromUtf8("cajaCoincide"));

        verticalLayout->addWidget(cajaCoincide);

        cajaDistingue = new QCheckBox(BuscarDialogo);
        cajaDistingue->setObjectName(QString::fromUtf8("cajaDistingue"));

        verticalLayout->addWidget(cajaDistingue);


        formLayout->setLayout(1, QFormLayout::LabelRole, verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(388, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRechazar = new QPushButton(BuscarDialogo);
        btnRechazar->setObjectName(QString::fromUtf8("btnRechazar"));

        horizontalLayout->addWidget(btnRechazar);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout);


        retranslateUi(BuscarDialogo);

        QMetaObject::connectSlotsByName(BuscarDialogo);
    } // setupUi

    void retranslateUi(QDialog *BuscarDialogo)
    {
        BuscarDialogo->setWindowTitle(QCoreApplication::translate("BuscarDialogo", "Dialog", nullptr));
        etiquetaBuscar->setText(QCoreApplication::translate("BuscarDialogo", "BuscarTexto", nullptr));
        btnDetras->setText(QCoreApplication::translate("BuscarDialogo", "Buscar Detr\303\241s", nullptr));
        btnAdelante->setText(QCoreApplication::translate("BuscarDialogo", "Buscar Adelante", nullptr));
        etiquetaReemplazar->setText(QCoreApplication::translate("BuscarDialogo", "Reemplazar Texto", nullptr));
        btnReemplazar->setText(QCoreApplication::translate("BuscarDialogo", "Reemplazar", nullptr));
        btnReemplazarTodo->setText(QCoreApplication::translate("BuscarDialogo", "Reemplazar_todo", nullptr));
        cajaCoincide->setText(QCoreApplication::translate("BuscarDialogo", "Coincide la palabra completa en buscar", nullptr));
        cajaDistingue->setText(QCoreApplication::translate("BuscarDialogo", "Distingue may\303\272sculas y min\303\272sculas en buscar o reemplazar", nullptr));
        btnRechazar->setText(QCoreApplication::translate("BuscarDialogo", "Rechazar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuscarDialogo: public Ui_BuscarDialogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARDIALOGO_H
