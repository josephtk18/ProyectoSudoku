#ifndef DIGITO_H
#define DIGITO_H

#include <QLabel>
#include <QPixmap>

class Digito : public QLabel
{
public:
    Digito(int num);
    int getDigito();
    void setDigito(int num);
    void setGrafic(int i);
private:
    int dig;
};

#endif // DIGITO_H
