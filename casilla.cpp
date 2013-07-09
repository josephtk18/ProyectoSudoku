#include "casilla.h"

Casilla::Casilla(int cont, int f, int c, int reg){
    contenido=cont;
    fila=f;
    columna=c;
    region=reg;
    ocupada=true;
    modificable=false;
    setMinimumSize(50,50);
    setGrafic(cont);
    setVisible(true);

}

//GETTERS
int Casilla::getContenido(){
   return this->contenido;
}
int Casilla::getFila(){
    return this->fila;
}
int Casilla::getColumna(){
    return this->columna;
}
int Casilla::getRegion(){
   return this->region;
}
bool Casilla::isOcupada(){
    return this->ocupada;
}
bool Casilla::isModificable(){
    return this->modificable;
}

//SETTERS
void Casilla::setContenido(int cont){
    this->contenido=cont;
}
void Casilla::setFila(int f){
    this->fila=f;
}
void Casilla::setColumna(int c){
    this->columna=c;
}
void Casilla::setRegion(int r){
    this->region=r;
}
void Casilla::setOcupada(bool d){
    this->ocupada=d;
}
void Casilla::setModificable(bool m){
    this->modificable=m;
}

int Casilla::buscarRegion(int f, int c){
    if(f>=1 && f<=3){
        if(c>=1 && c<=3) return 1;
        if(c>=4 && c<=6) return 2;
        if(c>=6 && c<=9) return 3;
    }
    if(f>=4 && f<=6){
        if(c>=1 && c<=3) return 4;
        if(c>=4 && c<=6) return 5;
        if(c>=6 && c<=9) return 6;
    }
    if(f>=7 && f<=9){
        if(c>=1 && c<=3) return 7;
        if(c>=4 && c<=6) return 8;
        if(c>=6 && c<=9) return 9;
    }
}

void Casilla::setGrafic(int i){
    //Funcion que asigna la imagen del numero al QLabel
    switch (i) {
    case 0:
        this->setPixmap(QPixmap(":/recursos/Imagenes/0.jpg"));
        break;
    case 1:
        this->setPixmap(QPixmap(":/recursos/Imagenes/1.jpg"));
        break;
    case 2:
        this->setPixmap(QPixmap(":/recursos/Imagenes/2.jpg"));
        break;
    case 3:
        this->setPixmap(QPixmap(":/recursos/Imagenes/3.jpg"));
        break;
    case 4:
        this->setPixmap(QPixmap(":/recursos/Imagenes/4.jpg"));
        break;
    case 5:
        this->setPixmap(QPixmap(":/recursos/Imagenes/5.jpg"));
        break;
    case 6:
        this->setPixmap(QPixmap(":/recursos/Imagenes/6.jpg"));
        break;
    case 7:
        this->setPixmap(QPixmap(":/recursos/Imagenes/7.jpg"));
        break;
    case 8:
        this->setPixmap(QPixmap(":/recursos/Imagenes/8.jpg"));
        break;
    case 9:
        this->setPixmap(QPixmap(":/recursos/Imagenes/9.jpg"));
        break;
    default:
        break;
    }
}

void Casilla::setGrafic2(int i){
    //Funcion que asigna la imagen del numero al QLabel
    switch (i) {
    case 1:
        this->setPixmap(QPixmap(":/recursos/Imagenes/ds1.jpg"));
        break;
    case 2:
        this->setPixmap(QPixmap(":/recursos/Imagenes/ds2.jpg"));
        break;
    case 3:
        this->setPixmap(QPixmap(":/recursos/Imagenes/ds3.jpg"));
        break;
    case 4:
        this->setPixmap(QPixmap(":/recursos/Imagenes/ds4.jpg"));
        break;
    case 5:
        this->setPixmap(QPixmap(":/recursos/Imagenes/ds5.jpg"));
        break;
    case 6:
        this->setPixmap(QPixmap(":/recursos/Imagenes/ds6.jpg"));
        break;
    case 7:
        this->setPixmap(QPixmap(":/recursos/Imagenes/ds7.jpg"));
        break;
    case 8:
        this->setPixmap(QPixmap(":/recursos/Imagenes/ds8.jpg"));
        break;
    case 9:
        this->setPixmap(QPixmap(":/recursos/Imagenes/ds9.jpg"));
        break;
    default:
        break;
    }
}
void Casilla::mousePressEvent(QMouseEvent *ev){
    emit clickedChange(this);
}
