#include "JogoBola.h"
#include "Bola.h"

#include <iostream>
#include <raylib.h>
#include <math.h>

JogoBola::JogoBola() {

    bola = new Bola();
    green = {20, 160, 133, 255};

    // Gera uma janela
    InitWindow(alturaJanela, larguraJanela, "Meu primeiro código com Raylib!");
    
    // Limita o FPS a 60
    SetTargetFPS(FPS);

    this->lacoJogo();
}

void JogoBola::lacoJogo() {

    // Bola que se movimenta sozinha
    int centroX = 400;
    int centroY = 400;
    int raio = 90;
    float angulo = 0;

    // Bola que se move sozinha em espiral
    int raioEspiral = 90;
    float anguloEspiral = 0;

    // Altera o raio
    int movimento = 1;

    // GAMELOOP
    while(WindowShouldClose() == false) {
        /*
            A função WindowShouldClose() retorna um boolean se
            a tecla "ESC" foi pressionada ou se o X da janela foi clicado.

            Existem 2 bolas, uma se move sozinha, a outra
            é movida pelo usuário através das setas.
        */
        
        // 1. Event Handling - "segurador" de eventos
        if (IsKeyDown(KEY_RIGHT)) {
            
            if (velocidadeBolaX > 0) {
                bola->bolaMoveX(velocidadeBolaX);
            }
            else {
                velocidadeBolaX *= -1;
            }

        }
        if (IsKeyDown(KEY_LEFT)) {
            if (velocidadeBolaX < 0) {
                bola->bolaMoveX(velocidadeBolaX);
            }
            else {
                velocidadeBolaX *= -1;
            }
        }
        if (IsKeyDown(KEY_UP)) {
            if (velocidadeBolaY < 0) {
                bola->bolaMoveY(velocidadeBolaY);
            }
            else {
                velocidadeBolaY *= -1;
            }
        }
        if (IsKeyDown(KEY_DOWN)) {
            if (velocidadeBolaY > 0) {
                bola->bolaMoveY(velocidadeBolaY);
            }
            else {
                velocidadeBolaY *= -1;
            }
        }


        // 2. Updating Positions - atualizar posição
        
        int novoX = centroX + (raio * cos(angulo));
        int novoY = centroY + (raio * sin(angulo));

        int espiralX = centroX + (raioEspiral * cos(anguloEspiral));
        int espiralY = centroY + (raioEspiral * sin(anguloEspiral));

        if (raioEspiral >= 300) {
            movimento = -1;
        }
        if (raioEspiral <= 10) {
            movimento = 1;
        }

        raioEspiral += movimento;

        /*
            bola->bolaMoveX(velocidadeBolaX);
            bola->bolaMoveY(velocidadeBolaY);

            if (bola->getBolaPosX() >= larguraJanela || bola->getBolaPosX() <= 0) {
                velocidadeBolaX *= -1;
            }
            if (bola->getBolaPosY() >= 450 || bola->getBolaPosY() <= 350) {
                velocidadeBolaY *= -1;
            }
        */



        // 3. Drawing - Desenhando
        BeginDrawing(); // Gera um canvas preto para desenharmos

        // BLACK
        ClearBackground(green);

        // Circulo movido pelo usuário
        DrawCircle(bola->getBolaPosX(), bola->getBolaPosY(), bola->getBolaTam(), RED);   // Desenha um circulo

        // Circulo que se move sozinho
        DrawCircle(novoX, novoY, 20, YELLOW);
        anguloEspiral += 0.05;

        // Circulo que se move sozinho em espiral
        DrawCircle(espiralX, espiralY, 20, BLUE);
        angulo += 0.05;

        EndDrawing();   // Finaliza o desenho no canvas
    }

    delete(bola);
    bola = nullptr;
    CloseWindow();

}