#include "ventana_principal.h"
#include "ui_ventana_principal.h"


Ventana_principal::Ventana_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ventana_principal)
{
    ui->setupUi(this);
    setWindowTitle("Sudoku");
    setWindowIcon(QIcon("Imagenes/logo.jpg"));
    setBackgroundImage();
    setFixedSize(width(),height());
}

Ventana_principal::~Ventana_principal()
{
    delete ui;    
}

void Ventana_principal::setBackgroundImage(){
    QPixmap bg("Imagenes/yingyang.jpg");
    QPalette p(palette());
    p.setBrush(QPalette::Background, bg);
    setAutoFillBackground(true);
    setPalette(p);
}

void Ventana_principal::on_Btn_Iniciar_clicked()
{
    Ventana_Jugar *v = new Ventana_Jugar();
    close();
    v->show();
}

void Ventana_principal::on_Btn_estadisticas_clicked()
{

}

void Ventana_principal::on_Btn_Ayuda_clicked()
{
    Ayuda *a = new Ayuda();
    a->show();
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




