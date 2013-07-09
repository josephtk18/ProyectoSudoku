#include "estadisticas.h"
#include "ui_estadisticas.h"


Estadisticas::Estadisticas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Estadisticas)
{
    ui->setupUi(this);
    setWindowTitle(":/recursos/Estadísticas");
    setWindowIcon(QIcon(":/recursos/Imagenes/logo.JPG"));
    setBackgroundImage();
    setFixedSize(width(),height());
    QString ganadores=cargarGanadores();
    anadirGanadores(ganadores);
}


Estadisticas::~Estadisticas()
{
    delete ui;
}

void Estadisticas::setBackgroundImage(){
    QPixmap bg(":/recursos/Imagenes/yingyangsudoku.jpg");
    QPalette p(palette());
    p.setBrush(QPalette::Background, bg);
    setAutoFillBackground(true);
    setPalette(p);
}

QString Estadisticas::cargarGanadores(){
    QString ganadores;
    QFile archivo(":/recursos/ganadores.txt");
    if (archivo.exists(":/recursos/ganadores.txt")){
        archivo.open(QFile::ReadOnly);
        QTextStream stream(&archivo);
        ganadores=stream.readAll();
    }
    archivo.close();
    return ganadores;
}

void Estadisticas::anadirGanadores(QString g){
    ui->ganadores->setText(g);

}
