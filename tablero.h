#ifndef TABLERO_H
#define TABLERO_H

#include "casilla.h"
#include <QObject>
#include <QTime>
#include <QGlobal.h>


class Tablero
{

public:
    Tablero();
    Casilla **getCasillas();
    void inicializarCasillas();
    void generarTablero();
    bool hayRepetidoFila(Casilla* c, int cont);
    void pasarBloquesAFila(int F[], int B1[], int B2[], int B3[]);
    void cambiarOrdenBloques(int B1[], int B2[], int B3[]);
    int randInt(int min, int max);

private:
    Casilla *casillas[81];
};

#endif // TABLERO_H
