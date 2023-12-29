/********************************************************************************
** Form generated from reading UI file 'textoricoeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTORICOEDITOR_H
#define UI_TEXTORICOEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextoRicoEditor
{
public:
    QAction *actionNuevo;
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionGuardar_como;
    QAction *actionSalir;
    QAction *actionCopiar;
    QAction *actionCortar;
    QAction *actionPegar;
    QAction *actionBuscar_Reemplazar;
    QAction *actionElegir_todo;
    QAction *actionZoom_acercar;
    QAction *actionZoom_alejorar;
    QAction *actionNegrita;
    QAction *actionCursiva;
    QAction *actionSubrayar;
    QAction *actionColor;
    QAction *actionfuente;
    QAction *actionAyuda;
    QAction *actionSobre_nosotros;
    QAction *actionDeshacer;
    QAction *actionRehacer;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEditar;
    QMenu *menuVista;
    QMenu *menuTexto;
    QMenu *menuSobre;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *TextoRicoEditor)
    {
        if (TextoRicoEditor->objectName().isEmpty())
            TextoRicoEditor->setObjectName(QString::fromUtf8("TextoRicoEditor"));
        TextoRicoEditor->resize(800, 600);
        TextoRicoEditor->setStyleSheet(QString::fromUtf8("color: rgb(45, 45, 45);\n"
"background-color: rgb(138, 138, 138);"));
        actionNuevo = new QAction(TextoRicoEditor);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/iconos/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon);
        actionAbrir = new QAction(TextoRicoEditor);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagenes/iconos/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionGuardar = new QAction(TextoRicoEditor);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagenes/iconos/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon2);
        actionGuardar_como = new QAction(TextoRicoEditor);
        actionGuardar_como->setObjectName(QString::fromUtf8("actionGuardar_como"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imagenes/iconos/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar_como->setIcon(icon3);
        actionSalir = new QAction(TextoRicoEditor);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imagenes/iconos/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalir->setIcon(icon4);
        actionCopiar = new QAction(TextoRicoEditor);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/imagenes/iconos/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon5);
        actionCortar = new QAction(TextoRicoEditor);
        actionCortar->setObjectName(QString::fromUtf8("actionCortar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/imagenes/iconos/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCortar->setIcon(icon6);
        actionPegar = new QAction(TextoRicoEditor);
        actionPegar->setObjectName(QString::fromUtf8("actionPegar"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/imagenes/iconos/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPegar->setIcon(icon7);
        actionBuscar_Reemplazar = new QAction(TextoRicoEditor);
        actionBuscar_Reemplazar->setObjectName(QString::fromUtf8("actionBuscar_Reemplazar"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/imagenes/iconos/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBuscar_Reemplazar->setIcon(icon8);
        actionElegir_todo = new QAction(TextoRicoEditor);
        actionElegir_todo->setObjectName(QString::fromUtf8("actionElegir_todo"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/imagenes/iconos/select_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionElegir_todo->setIcon(icon9);
        actionZoom_acercar = new QAction(TextoRicoEditor);
        actionZoom_acercar->setObjectName(QString::fromUtf8("actionZoom_acercar"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/imagenes/iconos/zoom_in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_acercar->setIcon(icon10);
        actionZoom_alejorar = new QAction(TextoRicoEditor);
        actionZoom_alejorar->setObjectName(QString::fromUtf8("actionZoom_alejorar"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/imagenes/iconos/zoom_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_alejorar->setIcon(icon11);
        actionNegrita = new QAction(TextoRicoEditor);
        actionNegrita->setObjectName(QString::fromUtf8("actionNegrita"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/imagenes/iconos/text_bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNegrita->setIcon(icon12);
        actionCursiva = new QAction(TextoRicoEditor);
        actionCursiva->setObjectName(QString::fromUtf8("actionCursiva"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/imagenes/iconos/text_italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCursiva->setIcon(icon13);
        actionSubrayar = new QAction(TextoRicoEditor);
        actionSubrayar->setObjectName(QString::fromUtf8("actionSubrayar"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/imagenes/iconos/text_underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSubrayar->setIcon(icon14);
        actionColor = new QAction(TextoRicoEditor);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/imagenes/iconos/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon15);
        actionfuente = new QAction(TextoRicoEditor);
        actionfuente->setObjectName(QString::fromUtf8("actionfuente"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/imagenes/iconos/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionfuente->setIcon(icon16);
        actionAyuda = new QAction(TextoRicoEditor);
        actionAyuda->setObjectName(QString::fromUtf8("actionAyuda"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/imagenes/iconos/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAyuda->setIcon(icon17);
        actionSobre_nosotros = new QAction(TextoRicoEditor);
        actionSobre_nosotros->setObjectName(QString::fromUtf8("actionSobre_nosotros"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/imagenes/iconos/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre_nosotros->setIcon(icon18);
        actionDeshacer = new QAction(TextoRicoEditor);
        actionDeshacer->setObjectName(QString::fromUtf8("actionDeshacer"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/imagenes/iconos/arrow_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeshacer->setIcon(icon19);
        actionRehacer = new QAction(TextoRicoEditor);
        actionRehacer->setObjectName(QString::fromUtf8("actionRehacer"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/imagenes/iconos/arrow_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRehacer->setIcon(icon20);
        centralwidget = new QWidget(TextoRicoEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        TextoRicoEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextoRicoEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuVista = new QMenu(menubar);
        menuVista->setObjectName(QString::fromUtf8("menuVista"));
        menuTexto = new QMenu(menubar);
        menuTexto->setObjectName(QString::fromUtf8("menuTexto"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        TextoRicoEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(TextoRicoEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TextoRicoEditor->setStatusBar(statusbar);
        toolBar = new QToolBar(TextoRicoEditor);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        TextoRicoEditor->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(TextoRicoEditor);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        TextoRicoEditor->addToolBar(Qt::TopToolBarArea, toolBar_2);
        TextoRicoEditor->insertToolBarBreak(toolBar_2);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuVista->menuAction());
        menubar->addAction(menuTexto->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_como);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionDeshacer);
        menuArchivo->addAction(actionRehacer);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionCortar);
        menuEditar->addAction(actionPegar);
        menuEditar->addSeparator();
        menuEditar->addAction(actionBuscar_Reemplazar);
        menuEditar->addSeparator();
        menuEditar->addAction(actionElegir_todo);
        menuVista->addAction(actionZoom_acercar);
        menuVista->addAction(actionZoom_alejorar);
        menuTexto->addAction(actionNegrita);
        menuTexto->addAction(actionCursiva);
        menuTexto->addAction(actionSubrayar);
        menuTexto->addSeparator();
        menuTexto->addAction(actionColor);
        menuTexto->addSeparator();
        menuTexto->addAction(actionfuente);
        menuSobre->addAction(actionAyuda);
        menuSobre->addAction(actionSobre_nosotros);
        toolBar->addAction(actionNuevo);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionGuardar);
        toolBar->addAction(actionGuardar_como);
        toolBar->addSeparator();
        toolBar->addAction(actionCopiar);
        toolBar->addAction(actionCortar);
        toolBar->addAction(actionPegar);
        toolBar->addAction(actionBuscar_Reemplazar);
        toolBar->addAction(actionElegir_todo);
        toolBar->addSeparator();
        toolBar->addAction(actionDeshacer);
        toolBar->addAction(actionRehacer);
        toolBar_2->addAction(actionZoom_acercar);
        toolBar_2->addAction(actionZoom_alejorar);
        toolBar_2->addAction(actionNegrita);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionCursiva);
        toolBar_2->addAction(actionSubrayar);
        toolBar_2->addAction(actionColor);
        toolBar_2->addAction(actionfuente);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionAyuda);
        toolBar_2->addAction(actionSobre_nosotros);

        retranslateUi(TextoRicoEditor);

        QMetaObject::connectSlotsByName(TextoRicoEditor);
    } // setupUi

    void retranslateUi(QMainWindow *TextoRicoEditor)
    {
        TextoRicoEditor->setWindowTitle(QCoreApplication::translate("TextoRicoEditor", "TextoRicoEditor", nullptr));
        actionNuevo->setText(QCoreApplication::translate("TextoRicoEditor", "Nuevo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("TextoRicoEditor", "Abrir", nullptr));
        actionGuardar->setText(QCoreApplication::translate("TextoRicoEditor", "Guardar", nullptr));
        actionGuardar_como->setText(QCoreApplication::translate("TextoRicoEditor", "Guardar_como", nullptr));
        actionSalir->setText(QCoreApplication::translate("TextoRicoEditor", "Salir", nullptr));
        actionCopiar->setText(QCoreApplication::translate("TextoRicoEditor", "Copiar", nullptr));
        actionCortar->setText(QCoreApplication::translate("TextoRicoEditor", "Cortar", nullptr));
        actionPegar->setText(QCoreApplication::translate("TextoRicoEditor", "Pegar", nullptr));
        actionBuscar_Reemplazar->setText(QCoreApplication::translate("TextoRicoEditor", "Buscar y Reemplazar", nullptr));
        actionElegir_todo->setText(QCoreApplication::translate("TextoRicoEditor", "Elegir_todo", nullptr));
        actionZoom_acercar->setText(QCoreApplication::translate("TextoRicoEditor", "Zoom_acercar", nullptr));
        actionZoom_alejorar->setText(QCoreApplication::translate("TextoRicoEditor", "Zoom_alejorar", nullptr));
        actionNegrita->setText(QCoreApplication::translate("TextoRicoEditor", "Negrita", nullptr));
        actionCursiva->setText(QCoreApplication::translate("TextoRicoEditor", "Cursiva", nullptr));
        actionSubrayar->setText(QCoreApplication::translate("TextoRicoEditor", "Subrayar", nullptr));
        actionColor->setText(QCoreApplication::translate("TextoRicoEditor", "Color", nullptr));
        actionfuente->setText(QCoreApplication::translate("TextoRicoEditor", "fuente", nullptr));
        actionAyuda->setText(QCoreApplication::translate("TextoRicoEditor", "Ayuda", nullptr));
        actionSobre_nosotros->setText(QCoreApplication::translate("TextoRicoEditor", "Sobre_nosotros", nullptr));
        actionDeshacer->setText(QCoreApplication::translate("TextoRicoEditor", "Deshacer", nullptr));
        actionRehacer->setText(QCoreApplication::translate("TextoRicoEditor", "Rehacer", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("TextoRicoEditor", "Archivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("TextoRicoEditor", "Editar", nullptr));
        menuVista->setTitle(QCoreApplication::translate("TextoRicoEditor", "Vista", nullptr));
        menuTexto->setTitle(QCoreApplication::translate("TextoRicoEditor", "Texto", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("TextoRicoEditor", "Info", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("TextoRicoEditor", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("TextoRicoEditor", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextoRicoEditor: public Ui_TextoRicoEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTORICOEDITOR_H
