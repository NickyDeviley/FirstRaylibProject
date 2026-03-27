#include "Bola.h"

Bola::Bola() {

    this->bolaPosX = 400;
    this->bolaPosY = 400;
    this->bolaTam = 20;

}

int Bola::getBolaPosX() { return this->bolaPosX; }
int Bola::getBolaPosY() { return this->bolaPosY; }
int Bola::getBolaTam() { return this->bolaTam; }

void Bola::bolaMoveX(int velocidade) { this->bolaPosX += velocidade; }
void Bola::bolaMoveY(int velocidade) { this->bolaPosY += velocidade; }
