#include "ventana_jugar.h"
#include "ui_ventana_jugar.h"

Ventana_Jugar::Ventana_Jugar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ventana_Jugar)
{
    ui->setupUi(this);
    setWindowTitle("Iniciar Partida");
    setWindowIcon(QIcon("logo.jpg"));
    setBackgroundImage();
    setFixedSize(width(),height());
}

Ventana_Jugar::~Ventana_Jugar()
{
    delete ui;
}

void Ventana_Jugar::setBackgroundImage(){
    QPixmap bg("yingyang.jpg");
    //QPixmap bg("C:/Documents and Settings/usuario/Mis documentos/QTProjects/Sudoku/Imagenes/yingyang.jpg");
    QPalette p(palette());
    p.setBrush(QPalette::Background, bg);
    setAutoFillBackground(true);
    setPalette(p);
}

void Ventana_Jugar::on_Btn_facil_clicked()
{
    Sudoku *s = new Sudoku();
    close();
    s->show();
}

void Ventana_Jugar::on_Btn_normal_clicked()
{

}

void Ventana_Jugar::on_Btn_dificil_clicked()
{

}

void Ventana_Jugar::on_Btn_cargar_clicked()
{

}

void Ventana_Jugar::on_Btn_menu_clicked()
{
    Ventana_principal *v = new Ventana_principal();
    close();
    v->show();
}
