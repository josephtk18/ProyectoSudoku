/********************************************************************************
** Form generated from reading UI file 'sudoku.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKU_H
#define UI_SUDOKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sudoku
{
public:
    QWidget *centralWidget;
    QPushButton *Btn_validar;
    QWidget *gridLayoutWidget;
    QGridLayout *bloque1;
    QPushButton *Btn_Guardar;
    QPushButton *Btn_Cargar;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *gridTeclado;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_8;
    QFrame *line_9;
    QWidget *gridLayoutWidget_2;
    QGridLayout *bloque2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *bloque3;
    QWidget *gridLayoutWidget_4;
    QGridLayout *bloque4;
    QWidget *gridLayoutWidget_5;
    QGridLayout *bloque5;
    QWidget *gridLayoutWidget_6;
    QGridLayout *bloque6;
    QWidget *gridLayoutWidget_7;
    QGridLayout *bloque7;
    QWidget *gridLayoutWidget_8;
    QGridLayout *bloque8;
    QWidget *gridLayoutWidget_9;
    QGridLayout *bloque9;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Sudoku)
    {
        if (Sudoku->objectName().isEmpty())
            Sudoku->setObjectName(QStringLiteral("Sudoku"));
        Sudoku->resize(681, 686);
        centralWidget = new QWidget(Sudoku);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Btn_validar = new QPushButton(centralWidget);
        Btn_validar->setObjectName(QStringLiteral("Btn_validar"));
        Btn_validar->setGeometry(QRect(590, 10, 75, 23));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 171, 171));
        bloque1 = new QGridLayout(gridLayoutWidget);
        bloque1->setSpacing(6);
        bloque1->setContentsMargins(11, 11, 11, 11);
        bloque1->setObjectName(QStringLiteral("bloque1"));
        bloque1->setSizeConstraint(QLayout::SetDefaultConstraint);
        bloque1->setContentsMargins(0, 0, 0, 0);
        Btn_Guardar = new QPushButton(centralWidget);
        Btn_Guardar->setObjectName(QStringLiteral("Btn_Guardar"));
        Btn_Guardar->setGeometry(QRect(590, 50, 75, 23));
        Btn_Cargar = new QPushButton(centralWidget);
        Btn_Cargar->setObjectName(QStringLiteral("Btn_Cargar"));
        Btn_Cargar->setGeometry(QRect(590, 90, 75, 23));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 570, 681, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 590, 551, 61));
        gridTeclado = new QHBoxLayout(horizontalLayoutWidget);
        gridTeclado->setSpacing(6);
        gridTeclado->setContentsMargins(11, 11, 11, 11);
        gridTeclado->setObjectName(QStringLiteral("gridTeclado"));
        gridTeclado->setContentsMargins(0, 0, 0, 0);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(190, 10, 20, 551));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(380, 10, 20, 551));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(20, 180, 551, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(20, 370, 551, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(210, 10, 171, 171));
        bloque2 = new QGridLayout(gridLayoutWidget_2);
        bloque2->setSpacing(6);
        bloque2->setContentsMargins(11, 11, 11, 11);
        bloque2->setObjectName(QStringLiteral("bloque2"));
        bloque2->setSizeConstraint(QLayout::SetDefaultConstraint);
        bloque2->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(400, 10, 171, 171));
        bloque3 = new QGridLayout(gridLayoutWidget_3);
        bloque3->setSpacing(6);
        bloque3->setContentsMargins(11, 11, 11, 11);
        bloque3->setObjectName(QStringLiteral("bloque3"));
        bloque3->setSizeConstraint(QLayout::SetDefaultConstraint);
        bloque3->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_4 = new QWidget(centralWidget);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(20, 200, 171, 171));
        bloque4 = new QGridLayout(gridLayoutWidget_4);
        bloque4->setSpacing(6);
        bloque4->setContentsMargins(11, 11, 11, 11);
        bloque4->setObjectName(QStringLiteral("bloque4"));
        bloque4->setSizeConstraint(QLayout::SetDefaultConstraint);
        bloque4->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_5 = new QWidget(centralWidget);
        gridLayoutWidget_5->setObjectName(QStringLiteral("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(210, 200, 171, 171));
        bloque5 = new QGridLayout(gridLayoutWidget_5);
        bloque5->setSpacing(6);
        bloque5->setContentsMargins(11, 11, 11, 11);
        bloque5->setObjectName(QStringLiteral("bloque5"));
        bloque5->setSizeConstraint(QLayout::SetDefaultConstraint);
        bloque5->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_6 = new QWidget(centralWidget);
        gridLayoutWidget_6->setObjectName(QStringLiteral("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(400, 200, 171, 171));
        bloque6 = new QGridLayout(gridLayoutWidget_6);
        bloque6->setSpacing(6);
        bloque6->setContentsMargins(11, 11, 11, 11);
        bloque6->setObjectName(QStringLiteral("bloque6"));
        bloque6->setSizeConstraint(QLayout::SetDefaultConstraint);
        bloque6->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_7 = new QWidget(centralWidget);
        gridLayoutWidget_7->setObjectName(QStringLiteral("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(20, 390, 171, 171));
        bloque7 = new QGridLayout(gridLayoutWidget_7);
        bloque7->setSpacing(6);
        bloque7->setContentsMargins(11, 11, 11, 11);
        bloque7->setObjectName(QStringLiteral("bloque7"));
        bloque7->setSizeConstraint(QLayout::SetDefaultConstraint);
        bloque7->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_8 = new QWidget(centralWidget);
        gridLayoutWidget_8->setObjectName(QStringLiteral("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(210, 390, 171, 171));
        bloque8 = new QGridLayout(gridLayoutWidget_8);
        bloque8->setSpacing(6);
        bloque8->setContentsMargins(11, 11, 11, 11);
        bloque8->setObjectName(QStringLiteral("bloque8"));
        bloque8->setSizeConstraint(QLayout::SetDefaultConstraint);
        bloque8->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_9 = new QWidget(centralWidget);
        gridLayoutWidget_9->setObjectName(QStringLiteral("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(400, 390, 171, 171));
        bloque9 = new QGridLayout(gridLayoutWidget_9);
        bloque9->setSpacing(6);
        bloque9->setContentsMargins(11, 11, 11, 11);
        bloque9->setObjectName(QStringLiteral("bloque9"));
        bloque9->setSizeConstraint(QLayout::SetDefaultConstraint);
        bloque9->setContentsMargins(0, 0, 0, 0);
        Sudoku->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Sudoku);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 681, 20));
        Sudoku->setMenuBar(menuBar);
        statusBar = new QStatusBar(Sudoku);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Sudoku->setStatusBar(statusBar);

        retranslateUi(Sudoku);

        QMetaObject::connectSlotsByName(Sudoku);
    } // setupUi

    void retranslateUi(QMainWindow *Sudoku)
    {
        Sudoku->setWindowTitle(QApplication::translate("Sudoku", "Sudoku", 0));
        Btn_validar->setText(QApplication::translate("Sudoku", "Validar", 0));
        Btn_Guardar->setText(QApplication::translate("Sudoku", "Guardar", 0));
        Btn_Cargar->setText(QApplication::translate("Sudoku", "Cargar", 0));
    } // retranslateUi

};

namespace Ui {
    class Sudoku: public Ui_Sudoku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKU_H
