#include "acercade.h"
#include "ui_acercade.h"

AcercaDe::AcercaDe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AcercaDe)
{
    ui->setupUi(this);
    setWindowTitle("Acerca De");
    setWindowIcon(QIcon(":/recursos/Imagenes/logo.JPG"));
    setBackgroundImage();
    setFixedSize(width(),height());
}

AcercaDe::~AcercaDe()
{
    delete ui;
}

void AcercaDe::setBackgroundImage(){
    QPixmap bg(":/recursos/Imagenes/yingyangsudoku.jpg");
    QPalette p(palette());
    p.setBrush(QPalette::Background, bg);
    setAutoFillBackground(true);
    setPalette(p);
}
