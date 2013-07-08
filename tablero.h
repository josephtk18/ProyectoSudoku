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
    /**
        @brief Genera las casillas del tablero lógico.
        */
    void inicializarCasillas();
    /**
    @brief Genera el tablero lógico.
    */
    void generarTablero();
    /**
      @brief Verifica si hay un número repetido en la fila.
      @param c Casillas a verificar.
      @param cont Contador de repeticiones.
      @return Retorna true si se encuentra algun valor repetido.
      */
    bool hayRepetidoFila(Casilla* c, int cont);
    /**
    @brief Ubica la posicion del bloque y lo pasa a la fila.
    @param F[] fila a la cual se va a pasar la posición.
    @param B1[] Bloques de la primera columna.
    @param B2[] Bloques de la segunda columna.
    @param B3[] Bloques de la tercera columna.
    */
    void pasarBloquesAFila(int F[], int B1[], int B2[], int B3[]);
    /**
    @brief Cambia de forma aleatorioa los 9 bloques del tablero.
    @param B1[] Bloques de la primera columna.
    @param B2[] Bloques de la segunda columna.
    @param B3[] Bloques de la tercera columna.
    */
    void cambiarOrdenBloques(int B1[], int B2[], int B3[]);
    int randInt(int min, int max);
    Casilla *casillas[81];
};

#endif // TABLERO_H
