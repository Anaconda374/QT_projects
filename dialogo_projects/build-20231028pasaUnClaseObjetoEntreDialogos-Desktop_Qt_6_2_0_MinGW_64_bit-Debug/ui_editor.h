/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Editor
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *etiquetaArtista;
    QLineEdit *editorArtista;
    QLabel *etiquetaAlbum;
    QLineEdit *editorAlbum;
    QLabel *etiquetaEstreno;
    QDateEdit *editorFecha;
    QLabel *etiquetaNotas;
    QPlainTextEdit *editorNotas;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnRechazar;
    QPushButton *btnAcceptar;

    void setupUi(QDialog *Editor)
    {
        if (Editor->objectName().isEmpty())
            Editor->setObjectName(QString::fromUtf8("Editor"));
        Editor->resize(365, 412);
        formLayout = new QFormLayout(Editor);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(Editor);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setUnderline(true);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        etiquetaArtista = new QLabel(Editor);
        etiquetaArtista->setObjectName(QString::fromUtf8("etiquetaArtista"));

        gridLayout->addWidget(etiquetaArtista, 0, 0, 1, 1);

        editorArtista = new QLineEdit(Editor);
        editorArtista->setObjectName(QString::fromUtf8("editorArtista"));

        gridLayout->addWidget(editorArtista, 0, 1, 1, 1);

        etiquetaAlbum = new QLabel(Editor);
        etiquetaAlbum->setObjectName(QString::fromUtf8("etiquetaAlbum"));

        gridLayout->addWidget(etiquetaAlbum, 1, 0, 1, 1);

        editorAlbum = new QLineEdit(Editor);
        editorAlbum->setObjectName(QString::fromUtf8("editorAlbum"));

        gridLayout->addWidget(editorAlbum, 1, 1, 1, 1);

        etiquetaEstreno = new QLabel(Editor);
        etiquetaEstreno->setObjectName(QString::fromUtf8("etiquetaEstreno"));

        gridLayout->addWidget(etiquetaEstreno, 2, 0, 1, 1);

        editorFecha = new QDateEdit(Editor);
        editorFecha->setObjectName(QString::fromUtf8("editorFecha"));

        gridLayout->addWidget(editorFecha, 2, 1, 1, 1);

        etiquetaNotas = new QLabel(Editor);
        etiquetaNotas->setObjectName(QString::fromUtf8("etiquetaNotas"));

        gridLayout->addWidget(etiquetaNotas, 3, 0, 1, 1);

        editorNotas = new QPlainTextEdit(Editor);
        editorNotas->setObjectName(QString::fromUtf8("editorNotas"));

        gridLayout->addWidget(editorNotas, 3, 1, 1, 1);


        formLayout->setLayout(1, QFormLayout::LabelRole, gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(138, 37, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnRechazar = new QPushButton(Editor);
        btnRechazar->setObjectName(QString::fromUtf8("btnRechazar"));

        horizontalLayout->addWidget(btnRechazar);

        btnAcceptar = new QPushButton(Editor);
        btnAcceptar->setObjectName(QString::fromUtf8("btnAcceptar"));

        horizontalLayout->addWidget(btnAcceptar);


        horizontalLayout_2->addLayout(horizontalLayout);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_2);


        retranslateUi(Editor);

        QMetaObject::connectSlotsByName(Editor);
    } // setupUi

    void retranslateUi(QDialog *Editor)
    {
        Editor->setWindowTitle(QCoreApplication::translate("Editor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Editor", "Editor", nullptr));
        etiquetaArtista->setText(QCoreApplication::translate("Editor", "Artista", nullptr));
        etiquetaAlbum->setText(QCoreApplication::translate("Editor", "Album", nullptr));
        etiquetaEstreno->setText(QCoreApplication::translate("Editor", "Estreno", nullptr));
        etiquetaNotas->setText(QCoreApplication::translate("Editor", "Notas", nullptr));
        btnRechazar->setText(QCoreApplication::translate("Editor", "Rechazar", nullptr));
        btnAcceptar->setText(QCoreApplication::translate("Editor", "Acceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editor: public Ui_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
