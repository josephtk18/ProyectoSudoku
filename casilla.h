#ifndef CASILLA_H
#define CASILLA_H

#include <QLabel>
#include <QPixmap>

class Casilla : public QLabel
{
public:
    Casilla(int cont, int f, int c, int reg);
    int getContenido();
    int getFila();
    int getColumna();
    int getRegion();
    bool isOcupada();
    void setContenido(int cont);
    void setFila(int f);
    void setColumna(int c);
    void setRegion(int r);
    void setOcupada(bool d);
    int buscarRegion(int f, int c);
    void setGrafic(int i);

private:
    int contenido, fila, columna, region;
    bool ocupada;
};

#endif // CASILLA_H
