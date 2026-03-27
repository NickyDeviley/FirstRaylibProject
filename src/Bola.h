#ifndef BOLA_H
#define BOLA_H

class Bola {

public:
    Bola();
    int getBolaPosX();
    int getBolaPosY();
    int getBolaTam();

    void bolaMoveX(int velocidade);
    void bolaMoveY(int velocidade);

private:
    int bolaPosX;
    int bolaPosY;
    int bolaTam;


};

#endif