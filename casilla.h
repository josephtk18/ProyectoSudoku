#ifndef CASILLA_H
#define CASILLA_H


class Casilla
{    

public:
    explicit Casilla(int cont, int f, int c, int reg);
    int getContenido();
    int getFila();
    int getColumna();
    int getRegion();
    bool isDisponible();
    void setContenido(int cont);
    void setFila(int f);
    void setColumna(int c);
    void setRegion(int r);
    void setDisponible(bool d);
    int buscarRegion(int f, int c);

private:
    int contenido, fila, columna, region;
    bool disponible;
};

#endif // CASILLA_H
