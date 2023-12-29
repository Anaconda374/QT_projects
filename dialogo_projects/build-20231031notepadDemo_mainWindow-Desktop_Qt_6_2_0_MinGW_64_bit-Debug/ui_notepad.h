/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNuevo;
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionGuardar_como;
    QAction *actionBorrar;
    QAction *actionCopiar;
    QAction *actionCortar;
    QAction *actionPegar;
    QAction *actionElegir_todo;
    QAction *actionElegir_nada;
    QAction *actionToolBarra_arriba;
    QAction *actionToolBarra_abajo;
    QAction *actionToolBarra_izquierda;
    QAction *actionToolBarra_derecha;
    QAction *actionToolBarra_flotable;
    QAction *actionTool_Barra_movible;
    QAction *actionProductos;
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QSplitter *splitter;
    QListWidget *listWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEditar;
    QMenu *menuVista;
    QMenu *menuInsertar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(595, 428);
        actionNuevo = new QAction(Notepad);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconos/simbolos2/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon);
        actionAbrir = new QAction(Notepad);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconos/simbolos2/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionGuardar = new QAction(Notepad);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconos/simbolos2/disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon2);
        actionGuardar_como = new QAction(Notepad);
        actionGuardar_como->setObjectName(QString::fromUtf8("actionGuardar_como"));
        actionBorrar = new QAction(Notepad);
        actionBorrar->setObjectName(QString::fromUtf8("actionBorrar"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconos/simbolos1/application_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBorrar->setIcon(icon3);
        actionCopiar = new QAction(Notepad);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        actionCortar = new QAction(Notepad);
        actionCortar->setObjectName(QString::fromUtf8("actionCortar"));
        actionPegar = new QAction(Notepad);
        actionPegar->setObjectName(QString::fromUtf8("actionPegar"));
        actionElegir_todo = new QAction(Notepad);
        actionElegir_todo->setObjectName(QString::fromUtf8("actionElegir_todo"));
        actionElegir_nada = new QAction(Notepad);
        actionElegir_nada->setObjectName(QString::fromUtf8("actionElegir_nada"));
        actionToolBarra_arriba = new QAction(Notepad);
        actionToolBarra_arriba->setObjectName(QString::fromUtf8("actionToolBarra_arriba"));
        actionToolBarra_abajo = new QAction(Notepad);
        actionToolBarra_abajo->setObjectName(QString::fromUtf8("actionToolBarra_abajo"));
        actionToolBarra_izquierda = new QAction(Notepad);
        actionToolBarra_izquierda->setObjectName(QString::fromUtf8("actionToolBarra_izquierda"));
        actionToolBarra_derecha = new QAction(Notepad);
        actionToolBarra_derecha->setObjectName(QString::fromUtf8("actionToolBarra_derecha"));
        actionToolBarra_flotable = new QAction(Notepad);
        actionToolBarra_flotable->setObjectName(QString::fromUtf8("actionToolBarra_flotable"));
        actionToolBarra_flotable->setCheckable(true);
        actionToolBarra_flotable->setEnabled(true);
        actionTool_Barra_movible = new QAction(Notepad);
        actionTool_Barra_movible->setObjectName(QString::fromUtf8("actionTool_Barra_movible"));
        actionTool_Barra_movible->setCheckable(true);
        actionTool_Barra_movible->setEnabled(true);
        actionProductos = new QAction(Notepad);
        actionProductos->setObjectName(QString::fromUtf8("actionProductos"));
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(180, 16777215));
        splitter->addWidget(listWidget);
        plainTextEdit = new QPlainTextEdit(splitter);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        splitter->addWidget(plainTextEdit);

        formLayout->setWidget(0, QFormLayout::LabelRole, splitter);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 595, 23));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuVista = new QMenu(menubar);
        menuVista->setObjectName(QString::fromUtf8("menuVista"));
        menuInsertar = new QMenu(menubar);
        menuInsertar->setObjectName(QString::fromUtf8("menuInsertar"));
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuVista->menuAction());
        menubar->addAction(menuInsertar->menuAction());
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_como);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionBorrar);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionCortar);
        menuEditar->addAction(actionPegar);
        menuEditar->addAction(actionElegir_todo);
        menuEditar->addAction(actionElegir_nada);
        menuVista->addAction(actionToolBarra_arriba);
        menuVista->addAction(actionToolBarra_abajo);
        menuVista->addAction(actionToolBarra_izquierda);
        menuVista->addAction(actionToolBarra_derecha);
        menuVista->addSeparator();
        menuVista->addAction(actionToolBarra_flotable);
        menuVista->addAction(actionTool_Barra_movible);
        menuInsertar->addAction(actionProductos);
        toolBar->addAction(actionNuevo);
        toolBar->addAction(actionGuardar);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionBorrar);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNuevo->setText(QCoreApplication::translate("Notepad", "Nuevo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("Notepad", "Abrir", nullptr));
        actionGuardar->setText(QCoreApplication::translate("Notepad", "Guardar", nullptr));
        actionGuardar_como->setText(QCoreApplication::translate("Notepad", "Guardar como", nullptr));
        actionBorrar->setText(QCoreApplication::translate("Notepad", "Borrar", nullptr));
#if QT_CONFIG(tooltip)
        actionBorrar->setToolTip(QCoreApplication::translate("Notepad", "Borrar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopiar->setText(QCoreApplication::translate("Notepad", "Copiar", nullptr));
        actionCortar->setText(QCoreApplication::translate("Notepad", "Cortar", nullptr));
        actionPegar->setText(QCoreApplication::translate("Notepad", "Pegar", nullptr));
        actionElegir_todo->setText(QCoreApplication::translate("Notepad", "Elegir todo", nullptr));
        actionElegir_nada->setText(QCoreApplication::translate("Notepad", "Elegir nada", nullptr));
        actionToolBarra_arriba->setText(QCoreApplication::translate("Notepad", "ToolBarra arriba", nullptr));
        actionToolBarra_abajo->setText(QCoreApplication::translate("Notepad", "ToolBarra abajo", nullptr));
        actionToolBarra_izquierda->setText(QCoreApplication::translate("Notepad", "ToolBarra izquierda", nullptr));
        actionToolBarra_derecha->setText(QCoreApplication::translate("Notepad", "ToolBarra derecha", nullptr));
        actionToolBarra_flotable->setText(QCoreApplication::translate("Notepad", "ToolBarra flotable", nullptr));
        actionTool_Barra_movible->setText(QCoreApplication::translate("Notepad", "Tool Barra movible", nullptr));
        actionProductos->setText(QCoreApplication::translate("Notepad", "Productos", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("Notepad", "Archivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("Notepad", "Editar", nullptr));
        menuVista->setTitle(QCoreApplication::translate("Notepad", "Vista", nullptr));
        menuInsertar->setTitle(QCoreApplication::translate("Notepad", "Insertar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
