#include "tablero.h"


Tablero::Tablero()
{
    inicializarCasillas();

}

Casilla** Tablero::getCasillas(){
    return this->casillas;
}

void Tablero::inicializarCasillas(){
    int pos=0;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            casillas[pos]=new Casilla(0,i,j,casillas[pos]->buscarRegion(i,j));
            pos++;
        }
    }
}

void Tablero::generarTablero(){
    int cont,fila_actual,k,col=1,pos_bloque=0,fila[9],bloque1[3],bloque2[3],bloque3[3];
    bool listo=false;
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    for(int i=0; i<81; i++){
        while(!listo){
            cont=randInt(1,9);
            if(!hayRepetidoFila(casillas[i],cont)){
                casillas[i]->setContenido(cont);
                casillas[i]->setOcupada(true);
                if(col>=1 && col<=3){
                    bloque1[pos_bloque]=cont;
                    pos_bloque++;
                }
                if(col>=4 && col<=6){
                    bloque2[pos_bloque]=cont;
                    pos_bloque++;
                }
                if(col>=7 && col<=9){
                    bloque3[pos_bloque]=cont;
                    pos_bloque++;
                }
                if(pos_bloque>2) pos_bloque=0;
                col++;
                listo=true;
            }
        }
        listo=false;
    }

    fila_actual=2;
    k=1;
    while(fila_actual<=9){
        if(k==0) pasarBloquesAFila(fila,bloque1,bloque2,bloque3);
        if(k==1) pasarBloquesAFila(fila,bloque2,bloque3,bloque1);
        if(k==2) pasarBloquesAFila(fila,bloque3,bloque1,bloque2);
        pos_bloque=0;
        for(int i=0; i<81; i++){
            if(casillas[i]->getFila()==fila_actual){
                casillas[i]->setContenido(fila[pos_bloque]);
                casillas[i]->setOcupada(true);
                pos_bloque++;
            }
        }
        if(fila_actual==3 || fila_actual==6) cambiarOrdenBloques(bloque1,bloque2,bloque3);
        if(k==2) k=0;
        else k++;
        fila_actual++;
    }
}

bool Tablero::hayRepetidoFila(Casilla* c, int cont){
    for(int i=0; i<81; i++){
        if(casillas[i]->getFila()==c->getFila()){
            if(casillas[i]->getContenido()==cont) return true;
        }
    }
    return false;
}

void Tablero::pasarBloquesAFila(int F[], int B1[], int B2[], int B3[]){
    int pos=0;
    for(int bloque=1; bloque<=3; bloque++){
        for(int i=0; i<=2; i++){
            if(pos>=0 && pos<=2) F[pos]=B1[i];
            if(pos>=3 && pos<=5) F[pos]=B2[i];
            if(pos>=6 && pos<=8) F[pos]=B3[i];
            pos++;
        }
    }
}

void Tablero::cambiarOrdenBloques(int B1[], int B2[], int B3[]){
    int i,j,k;

    i=B1[0];
    j=B1[1];
    k=B1[2];
    B1[0]=k;
    B1[1]=i;
    B1[2]=j;

    i=B2[0];
    j=B2[1];
    k=B2[2];
    B2[0]=k;
    B2[1]=i;
    B2[2]=j;

    i=B3[0];
    j=B3[1];
    k=B3[2];
    B3[0]=k;
    B3[1]=i;
    B3[2]=j;
}

int Tablero::randInt(int min,int max){
    return qrand()%((max+1)-min)+min;
}
