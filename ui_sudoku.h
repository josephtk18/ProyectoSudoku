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
    QGridLayout *gridTabla;
    QPushButton *Btn_Guardar;
    QPushButton *Btn_Cargar;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *gridTeclado;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Sudoku)
    {
        if (Sudoku->objectName().isEmpty())
            Sudoku->setObjectName(QStringLiteral("Sudoku"));
        Sudoku->resize(681, 678);
        centralWidget = new QWidget(Sudoku);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Btn_validar = new QPushButton(centralWidget);
        Btn_validar->setObjectName(QStringLiteral("Btn_validar"));
        Btn_validar->setGeometry(QRect(590, 10, 75, 23));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 551, 521));
        gridTabla = new QGridLayout(gridLayoutWidget);
        gridTabla->setSpacing(6);
        gridTabla->setContentsMargins(11, 11, 11, 11);
        gridTabla->setObjectName(QStringLiteral("gridTabla"));
        gridTabla->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridTabla->setContentsMargins(0, 0, 0, 0);
        Btn_Guardar = new QPushButton(centralWidget);
        Btn_Guardar->setObjectName(QStringLiteral("Btn_Guardar"));
        Btn_Guardar->setGeometry(QRect(590, 50, 75, 23));
        Btn_Cargar = new QPushButton(centralWidget);
        Btn_Cargar->setObjectName(QStringLiteral("Btn_Cargar"));
        Btn_Cargar->setGeometry(QRect(590, 90, 75, 23));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 540, 681, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 560, 661, 80));
        gridTeclado = new QHBoxLayout(horizontalLayoutWidget);
        gridTeclado->setSpacing(6);
        gridTeclado->setContentsMargins(11, 11, 11, 11);
        gridTeclado->setObjectName(QStringLiteral("gridTeclado"));
        gridTeclado->setContentsMargins(0, 0, 0, 0);
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
