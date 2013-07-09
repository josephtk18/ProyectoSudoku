#include "ayuda.h"
#include "ui_ayuda.h"

Ayuda::Ayuda(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ayuda)
{
    ui->setupUi(this);
    setWindowTitle("Ayuda");
    setWindowIcon(QIcon(":/recursos/Imagenes/logo.JPG"));
    setBackgroundImage();
    setFixedSize(width(),height());
}

Ayuda::~Ayuda()
{
    delete ui;
}

void Ayuda::setBackgroundImage(){
    QPixmap bg(":/recursos/Imagenes/yingyangsudoku.jpg");
    QPalette p(palette());
    p.setBrush(QPalette::Background, bg);
    setAutoFillBackground(true);
    setPalette(p);
}
