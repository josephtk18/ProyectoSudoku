#ifndef DIGITO_H
#define DIGITO_H

#include <QLabel>
#include <QPixmap>

class Digito : public QLabel
{
    Q_OBJECT
public:
    Digito(int num);
    int getDigito();
    void setDigito(int num);
    /**
        @brief Funcion que asigna la imagen del numero al QLabel.
        @param i Region del tablero.
        */
    void setGrafic(int i);

protected:
    /**
        @brief Recibe la señal para cuando ocurra un 'press' en el mouse.
        */
    void mousePressEvent(QMouseEvent *ev);

signals:
    /**
        @brief Recibe la señal para cuando ocurra un 'press' en el mouse.
        */
    void asignDigit(QObject *obj);

private:
    int dig;
};

#endif // DIGITO_H
