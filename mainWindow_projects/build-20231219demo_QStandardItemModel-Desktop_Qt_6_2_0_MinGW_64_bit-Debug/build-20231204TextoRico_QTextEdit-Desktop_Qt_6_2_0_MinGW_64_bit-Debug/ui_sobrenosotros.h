/********************************************************************************
** Form generated from reading UI file 'sobrenosotros.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBRENOSOTROS_H
#define UI_SOBRENOSOTROS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SobreNosotros
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *etiquetaVersion;
    QLabel *textoVersion;
    QLabel *etiquetaNombre;
    QLabel *etiquetaCompania;
    QLabel *textoCompania;
    QLabel *textoNombre;
    QLabel *textoUrl;
    QLabel *etiquetaUrl;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SobreNosotros)
    {
        if (SobreNosotros->objectName().isEmpty())
            SobreNosotros->setObjectName(QString::fromUtf8("SobreNosotros"));
        SobreNosotros->resize(375, 279);
        SobreNosotros->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0); background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(SobreNosotros);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        etiquetaVersion = new QLabel(SobreNosotros);
        etiquetaVersion->setObjectName(QString::fromUtf8("etiquetaVersion"));

        gridLayout->addWidget(etiquetaVersion, 1, 0, 1, 1);

        textoVersion = new QLabel(SobreNosotros);
        textoVersion->setObjectName(QString::fromUtf8("textoVersion"));

        gridLayout->addWidget(textoVersion, 1, 1, 1, 1);

        etiquetaNombre = new QLabel(SobreNosotros);
        etiquetaNombre->setObjectName(QString::fromUtf8("etiquetaNombre"));

        gridLayout->addWidget(etiquetaNombre, 0, 0, 1, 1);

        etiquetaCompania = new QLabel(SobreNosotros);
        etiquetaCompania->setObjectName(QString::fromUtf8("etiquetaCompania"));

        gridLayout->addWidget(etiquetaCompania, 2, 0, 1, 1);

        textoCompania = new QLabel(SobreNosotros);
        textoCompania->setObjectName(QString::fromUtf8("textoCompania"));

        gridLayout->addWidget(textoCompania, 2, 1, 1, 1);

        textoNombre = new QLabel(SobreNosotros);
        textoNombre->setObjectName(QString::fromUtf8("textoNombre"));

        gridLayout->addWidget(textoNombre, 0, 1, 1, 1);

        textoUrl = new QLabel(SobreNosotros);
        textoUrl->setObjectName(QString::fromUtf8("textoUrl"));

        gridLayout->addWidget(textoUrl, 3, 1, 1, 1);

        etiquetaUrl = new QLabel(SobreNosotros);
        etiquetaUrl->setObjectName(QString::fromUtf8("etiquetaUrl"));

        gridLayout->addWidget(etiquetaUrl, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(SobreNosotros);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SobreNosotros);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SobreNosotros, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SobreNosotros, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SobreNosotros);
    } // setupUi

    void retranslateUi(QDialog *SobreNosotros)
    {
        SobreNosotros->setWindowTitle(QCoreApplication::translate("SobreNosotros", "Dialog", nullptr));
        etiquetaVersion->setText(QCoreApplication::translate("SobreNosotros", "Versi\303\263n:", nullptr));
        textoVersion->setText(QString());
        etiquetaNombre->setText(QCoreApplication::translate("SobreNosotros", "Nombre:", nullptr));
        etiquetaCompania->setText(QCoreApplication::translate("SobreNosotros", "Compa\303\261\303\255a:", nullptr));
        textoCompania->setText(QString());
        textoNombre->setText(QString());
        textoUrl->setText(QString());
        etiquetaUrl->setText(QCoreApplication::translate("SobreNosotros", "Url:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SobreNosotros: public Ui_SobreNosotros {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBRENOSOTROS_H
