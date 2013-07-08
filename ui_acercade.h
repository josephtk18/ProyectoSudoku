/********************************************************************************
** Form generated from reading UI file 'acercade.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACERCADE_H
#define UI_ACERCADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AcercaDe
{
public:
    QWidget *centralwidget;
    QLabel *acercaDe;
    QLabel *contenido;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AcercaDe)
    {
        if (AcercaDe->objectName().isEmpty())
            AcercaDe->setObjectName(QStringLiteral("AcercaDe"));
        AcercaDe->resize(395, 274);
        centralwidget = new QWidget(AcercaDe);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        acercaDe = new QLabel(centralwidget);
        acercaDe->setObjectName(QStringLiteral("acercaDe"));
        acercaDe->setGeometry(QRect(120, 20, 191, 61));
        QPalette palette;
        QBrush brush(QColor(0, 140, 140, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(112, 111, 113, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        acercaDe->setPalette(palette);
        contenido = new QLabel(centralwidget);
        contenido->setObjectName(QStringLiteral("contenido"));
        contenido->setGeometry(QRect(50, 100, 311, 151));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        contenido->setPalette(palette1);
        AcercaDe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AcercaDe);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 395, 20));
        AcercaDe->setMenuBar(menubar);
        statusbar = new QStatusBar(AcercaDe);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AcercaDe->setStatusBar(statusbar);

        retranslateUi(AcercaDe);

        QMetaObject::connectSlotsByName(AcercaDe);
    } // setupUi

    void retranslateUi(QMainWindow *AcercaDe)
    {
        AcercaDe->setWindowTitle(QApplication::translate("AcercaDe", "MainWindow", 0));
        acercaDe->setText(QApplication::translate("AcercaDe", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600; font-style:italic;\">Acerca De</span></p></body></html>", 0));
        contenido->setText(QApplication::translate("AcercaDe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Sudoku V1.0</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Proyecto creado por:<br /></span>- Joseph Gallardo<br />- Charlie Medina<br />- Kevin Zambrano</p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Lenguajes de Programaci\303\263n"
                        "</span><br /><span style=\" font-weight:600;\">2013</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AcercaDe: public Ui_AcercaDe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCADE_H
