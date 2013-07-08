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
    void setGrafic(int i);

protected:
    void mousePressEvent(QMouseEvent *ev);

signals:
    void asignDigit(QObject *obj);

private:
    int dig;
};

#endif // DIGITO_H
