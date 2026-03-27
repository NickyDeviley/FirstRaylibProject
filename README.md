# Primeiro Projeto com Raylib em C++

Este projeto foi desenvolvido como um laboratório prático para explorar o framework Raylib utilizando C++. O objetivo principal foi sair do template básico e implementar objetos com diferentes tipos de comportamento e movimentação, aplicando conceitos de Orientação a Objetos e lógica matemática.

# 🧠 Objetivos de Aprendizado

    Integração com Raylib: Configuração de janelas, controle de FPS e ciclo de renderização (BeginDrawing/EndDrawing).

    Manipulação de Memória: Uso consciente de alocação dinâmica (new e delete) para gerenciar objetos na memória Heap.

    Trigonometria Aplicada: Implementação de movimentos circulares e em espiral utilizando as funções sin() e cos().

    Input Handling: Captura de eventos de teclado em tempo real para controle de personagens.

# 🕹️ Funcionalidades do Teste

O projeto apresenta três esferas com comportamentos distintos:

    Círculo Vermelho (Controle do Usuário): Movimentado através das setas do teclado. Demonstra a aplicação de velocidade e detecção de input.

    Círculo Amarelo (Orbital): Segue uma trajetória circular perfeita ao redor de um ponto central.

    Círculo Azul (Espiral): Realiza um movimento de órbita enquanto altera seu raio dinamicamente, criando um efeito de expansão e contração em espiral.
    Shutterstock

# 🛠️ Estrutura do Código

O código foi organizado em classes para separar a lógica do jogo da representação do objeto:

    JogoBola: Atua como o motor do jogo (Game Engine), gerenciando o Game Loop, o processamento de eventos e a renderização.

    Bola: Uma classe de entidade simples que encapsula os atributos de posição e tamanho, utilizando métodos getters e funções de translação.

# 🚀 Como Executar

    Certifique-se de ter o ambiente VS Code configurado para Raylib (este projeto utiliza o template v2).

    Abra o arquivo main.code-workspace.

    Navegue até src/main.cpp.

    Pressione F5 para compilar e rodar.
