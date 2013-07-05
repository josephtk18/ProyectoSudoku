#ifndef CASILLA_H
#define CASILLA_H

class Casilla
{
public:
    Casilla();
    int getContenido(Casilla c);
    int getFila(Casilla c);
    int getColumna(Casilla c);
    int getRegion(Casilla c);
    bool isDisponible(Casilla c);
    void setContenido(int cont);
    void setFila(int f);
    void setColumna(int c);
    void setRegion(int r);
    void setDisponible(bool d);

private:
    int contenido, fila, columna, region;
    bool disponible;
};

#endif // CASILLA_H
