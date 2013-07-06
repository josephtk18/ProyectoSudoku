#include "ventana_principal.h"
#include "ui_ventana_principal.h"
#include <QPalette>
#include <QtGui>
#include <QMessageBox>
#include <acercade.h>
#include <sudoku.h>

Ventana_principal::Ventana_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ventana_principal)
{
    ui->setupUi(this);
    setBackgroundImage();
    setFixedSize(width(),height());
    //setWindowFlags(Qt::FramelessWindowHint);
}

Ventana_principal::~Ventana_principal()
{
    delete ui;    
}

void Ventana_principal::setBackgroundImage(){
    QPixmap bg("yingyang.jpg");
    //QPixmap bg("C:/Documents and Settings/usuario/Mis documentos/QTProjects/Sudoku/Imagenes/yingyang.jpg");
    QPalette p(palette());
    p.setBrush(QPalette::Background, bg);
    setAutoFillBackground(true);
    setPalette(p);
}

void Ventana_principal::on_Btn_nuevo_clicked()
{
    Sudoku *s = new Sudoku();
    close();
    s->show();
}

void Ventana_principal::on_Btn_cargar_clicked()
{

}

void Ventana_principal::on_Btn_acercaDe_clicked()
{
    AcercaDe *v = new AcercaDe();
    v->show();
}

void Ventana_principal::on_Btn_Salir_clicked()
{
    if (QMessageBox::Yes == QMessageBox::question(this, "Salir", "¿Seguro que desea salir?", QMessageBox::Yes|QMessageBox::No)){
        QMessageBox::information(this,"Salir","Vuelva pronto!");
        close();
    }

}
