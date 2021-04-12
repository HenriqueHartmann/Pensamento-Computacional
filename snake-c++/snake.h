#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define STOP 0
#define ESQD 1
#define DIRT 2
#define CIMA 3
#define BAIX 4
#define MURO 178
#define COBR 219
#define FRUT 149

int fimdojogo;
const int largura = 20;
const int altura = 20;
int x, y, frutax, frutay, pontos, direcao;

void inicializa() // Inicialização do jogo
{
    time_t t;
    fimdojogo = 0; // Falso
    direcao = STOP;
    x = largura / 2;
    y = altura / 2;
    pontos = 0;
    srand(time(&t));
    frutax = rand() % largura + 1;
    frutay = rand() % altura + 1;
}

void desenha() // Apresentação da interface para o usuário
    // ######...######
    // #             #
    // .             .
    // .             .
    // .             .
    // #             #
    // ######...######
{
    int i, j;
    system("cls");

    for (i = 0; i <= largura + 2; i++) // Imprime a primeira linha
    {
        printf("%c", char(MURO));
    }


    for (j = 1; j <= altura + 1; j++) // Imprime as outras linhas
    {
        printf("\n");
        for (i = 0; i <= largura + 2; i++)
        {
            if (i == 0 || i == largura + 2)
            {
                printf("%c", char(MURO));
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("%c", char(COBR));
                }
                else if (i == frutax && j == frutay)
                {
                    printf("%c", char(FRUT));
                }
                else printf(" ");
            }
        }
    }

    printf("\n");
    for (i = 0; i <= largura + 2; i++) // Imprime a última linha
    {
        printf("%c", char(MURO));
    }
    printf("\npontos = %d", pontos); // Imprime a pontuação

}

void entrada() // Captura os dados do usuário
// w para cima
// a para esquerda
// d para direita
// s para baixo
// x para terminar jogo

{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'w':
            direcao = CIMA;
            break;
        case 'W':
            direcao = CIMA;
            break;
        case 'a':
            direcao = ESQD;
            break;
        case 'A':
            direcao = ESQD;
            break;
        case 'd':
            direcao = DIRT;
            break;
        case 'D':
            direcao = DIRT;
            break;
        case 's':
            direcao = BAIX;
            break;
        case 'S':
            direcao = BAIX;
            break;
        case 'x':
            fimdojogo = 1;
            break;
        case 'X':
            fimdojogo = 1;
            break;
        case 224:
            if (_kbhit())
            {
                switch (_getch())
                {
                case 72:
                    direcao = CIMA;
                    break;
                case 75:
                    direcao = ESQD;
                    break;
                case 77:
                    direcao = DIRT;
                    break;
                case 80:
                    direcao = BAIX;
                    break;
                }
            }
        }
    }
}

void logica() // Executa a lógica do jogo
{
    switch (direcao)
    {
    case CIMA:
        y--;
        break;
    case ESQD:
        x--;
        break;
    case DIRT:
        x++;
        break;
    case BAIX:
        y++;
        break;
    case STOP:
        direcao = rand() % 4 + 1;
        break;
    }
    if (x == 0 || x == largura + 2 || y == 0 || y == altura + 2)
    {
        fimdojogo = 1;
    }
    if (x == frutax && y == frutay)
    {
        pontos = pontos + 10;
        frutax = rand() % largura + 1;
        frutay = rand() % altura + 1;
    }
}

void finaliza() // Finalização do jogo
{
    system("cls");
    printf("\n\n\n*** FIM DE JOGO ***\n\n\nSua pontuação foi: %d", pontos);
}

