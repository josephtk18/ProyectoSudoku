#include "digito.h"

Digito::Digito(int num){
    this->dig=num;
    setMinimumSize(50,50);
    setGrafic(num);
    setVisible(true);

}

int Digito::getDigito(){
    return dig;
}

void Digito::setDigito(int num){
    this->dig=num;

}

void Digito::setGrafic(int i){
    //Funcion que asigna la imagen del numero al QLabel
    switch (i) {
    case 1:
        this->setPixmap(QPixmap("imagenes/d1.jpg"));
        break;
    case 2:
        this->setPixmap(QPixmap("imagenes/d2.jpg"));
        break;
    case 3:
        this->setPixmap(QPixmap("imagenes/d3.jpg"));
        break;
    case 4:
        this->setPixmap(QPixmap("imagenes/d4.jpg"));
        break;
    case 5:
        this->setPixmap(QPixmap("imagenes/d5.jpg"));
        break;
    case 6:
        this->setPixmap(QPixmap("imagenes/d6.jpg"));
        break;
    case 7:
        this->setPixmap(QPixmap("imagenes/d7.jpg"));
        break;
    case 8:
        this->setPixmap(QPixmap("imagenes/d8.jpg"));
        break;
    case 9:
        this->setPixmap(QPixmap("imagenes/d9.jpg"));
        break;
    default:
        break;
    }
}

void Digito::mousePressEvent(QMouseEvent *ev){
    emit asignDigit(this);
}

