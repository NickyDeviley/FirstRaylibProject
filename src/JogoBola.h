#ifndef JOGOBOLA_H
#define JOGOBOLA_H

#include <raylib.h>

#include "Bola.h"

class JogoBola {

public:
    JogoBola();
    void lacoJogo();

private:
    int velocidadeBolaX = 3;
    int velocidadeBolaY = 3;

    // Constantes para o código
    const int alturaJanela = 800;
    const int larguraJanela = 800;
    const int FPS = 60;

    // Declarando Objetos
    Bola* bola;
    Color green;

};

#endif