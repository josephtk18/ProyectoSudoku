#include "estadisticas.h"
#include "ui_estadisticas.h"


Estadisticas::Estadisticas(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Estadisticas)
{
    ui->setupUi(this);
    setWindowTitle("Estadísticas");
    setWindowIcon(QIcon("Imagenes/logo.jpg"));
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
    QPixmap bg("Imagenes/yingyangsudoku.jpg");
    QPalette p(palette());
    p.setBrush(QPalette::Background, bg);
    setAutoFillBackground(true);
    setPalette(p);
}

QString Estadisticas::cargarGanadores(){
    QString ganadores;
    QFile archivo("ganadores.txt");
    if (archivo.exists("ganadores.txt")){
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
