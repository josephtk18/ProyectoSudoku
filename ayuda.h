#ifndef AYUDA_H
#define AYUDA_H

#include <QMainWindow>

namespace Ui {
class Ayuda;
}

class Ayuda : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Ayuda(QWidget *parent = 0);
    ~Ayuda();
    void setBackgroundImage();
    
private:
    Ui::Ayuda *ui;
};

#endif // AYUDA_H
