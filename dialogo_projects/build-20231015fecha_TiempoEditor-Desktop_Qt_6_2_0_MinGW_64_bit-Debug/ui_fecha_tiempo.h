/********************************************************************************
** Form generated from reading UI file 'fecha_tiempo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FECHA_TIEMPO_H
#define UI_FECHA_TIEMPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_fecha_tiempo
{
public:
    QFormLayout *formLayout;
    QGridLayout *gridLayout;
    QLabel *fechaRotulo;
    QDateEdit *fechaEditor;
    QLabel *tiempoRotulo;
    QTimeEdit *tiempoEditor;
    QLabel *comboRotulo;
    QDateTimeEdit *comboEditor;
    QHBoxLayout *horizontalLayout;
    QPushButton *registrarBtn;
    QPushButton *rechazarBtn;

    void setupUi(QDialog *fecha_tiempo)
    {
        if (fecha_tiempo->objectName().isEmpty())
            fecha_tiempo->setObjectName(QString::fromUtf8("fecha_tiempo"));
        fecha_tiempo->resize(443, 328);
        formLayout = new QFormLayout(fecha_tiempo);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fechaRotulo = new QLabel(fecha_tiempo);
        fechaRotulo->setObjectName(QString::fromUtf8("fechaRotulo"));

        gridLayout->addWidget(fechaRotulo, 0, 0, 1, 1);

        fechaEditor = new QDateEdit(fecha_tiempo);
        fechaEditor->setObjectName(QString::fromUtf8("fechaEditor"));

        gridLayout->addWidget(fechaEditor, 0, 1, 1, 1);

        tiempoRotulo = new QLabel(fecha_tiempo);
        tiempoRotulo->setObjectName(QString::fromUtf8("tiempoRotulo"));

        gridLayout->addWidget(tiempoRotulo, 1, 0, 1, 1);

        tiempoEditor = new QTimeEdit(fecha_tiempo);
        tiempoEditor->setObjectName(QString::fromUtf8("tiempoEditor"));

        gridLayout->addWidget(tiempoEditor, 1, 1, 1, 1);

        comboRotulo = new QLabel(fecha_tiempo);
        comboRotulo->setObjectName(QString::fromUtf8("comboRotulo"));

        gridLayout->addWidget(comboRotulo, 2, 0, 1, 1);

        comboEditor = new QDateTimeEdit(fecha_tiempo);
        comboEditor->setObjectName(QString::fromUtf8("comboEditor"));

        gridLayout->addWidget(comboEditor, 2, 1, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        registrarBtn = new QPushButton(fecha_tiempo);
        registrarBtn->setObjectName(QString::fromUtf8("registrarBtn"));

        horizontalLayout->addWidget(registrarBtn);

        rechazarBtn = new QPushButton(fecha_tiempo);
        rechazarBtn->setObjectName(QString::fromUtf8("rechazarBtn"));

        horizontalLayout->addWidget(rechazarBtn);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout);


        retranslateUi(fecha_tiempo);

        QMetaObject::connectSlotsByName(fecha_tiempo);
    } // setupUi

    void retranslateUi(QDialog *fecha_tiempo)
    {
        fecha_tiempo->setWindowTitle(QCoreApplication::translate("fecha_tiempo", "fecha_tiempo", nullptr));
        fechaRotulo->setText(QCoreApplication::translate("fecha_tiempo", "Fecha", nullptr));
        tiempoRotulo->setText(QCoreApplication::translate("fecha_tiempo", "Tiempo", nullptr));
        comboRotulo->setText(QCoreApplication::translate("fecha_tiempo", "Combo", nullptr));
        registrarBtn->setText(QCoreApplication::translate("fecha_tiempo", "Registrar", nullptr));
        rechazarBtn->setText(QCoreApplication::translate("fecha_tiempo", "Rechazar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fecha_tiempo: public Ui_fecha_tiempo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FECHA_TIEMPO_H
