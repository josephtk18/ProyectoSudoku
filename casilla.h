#ifndef CASILLA_H
#define CASILLA_H

#include <QLabel>
#include <QPixmap>

class Casilla : public QLabel
{
    Q_OBJECT
public:
    Casilla(int cont, int f, int c, int reg);
    int getContenido();
    int getFila();
    int getColumna();
    int getRegion();
    bool isOcupada();
    bool isModificable();
    void setContenido(int cont);
    void setFila(int f);
    void setColumna(int c);
    void setRegion(int r);
    void setOcupada(bool d);
    void setModificable(bool m);
    /**
        @brief Ubica la región específica donde se ubica la casilla.
        @param f fila de la casilla.
        @param c columna de la casilla.
        @return El número de la región de la casilla.
        */
    int buscarRegion(int f, int c);
    /**
        @brief Funcion que asigna la imagen del numero que está en el tablero al QLabel.
        @param i Region del tablero.
        */
    void setGrafic(int i);
    /**
        @brief Funcion que asigna la imagen del número que está en el teclado al QLabel.
        @param i Region del tablero.
        */
    void setGrafic2(int i);

protected:
    void mousePressEvent(QMouseEvent *ev);

signals:
    void clickedChange(QObject *obj);

private:
    int contenido, fila, columna, region;
    bool ocupada,modificable;
};

#endif // CASILLA_H
