#include "casilla.h"

Casilla::Casilla(int cont, int f, int c, int reg)
{
    contenido=cont;
    fila=f;
    columna=c;
    region=reg;
    disponible=true;
}

//GETTERS
int Casilla::getContenido(){
   return contenido;
}
int Casilla::getFila(){
    return fila;
}
int Casilla::getColumna(){
    return columna;
}
int Casilla::getRegion(){
   return region;
}
bool Casilla::isDisponible(){
    return disponible;
}

//SETTERS
void Casilla::setContenido(int cont){
    contenido=cont;
}
void Casilla::setFila(int f){
    fila=f;
}
void Casilla::setColumna(int c){
    columna=c;
}
void Casilla::setRegion(int r){
    region=r;
}
void Casilla::setDisponible(bool d){
    disponible=d;
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

