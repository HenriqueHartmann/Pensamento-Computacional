#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <Windows.h>

#define STOP 0
#define ESQD 1
#define DIRT 2
#define CIMA 3
#define BAIX 4
#define MURO 178
#define COBR 219
#define FRUT 149
#define sleep(x) Sleep(1000 * (x))

int fimdojogo;
const int largura = 20;
const int altura = 20;
int x, y, frutax, frutay, pontos, direcao;
int rcobrax[100], rcobray[100];
int tamrcobra;

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
    tamrcobra = 0;
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
    int i, j, k;
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
                else
                {
                    int flag = 0; // Falso
                    for (k = 0; k < tamrcobra; k++)
                    {
                        if (rcobrax[k] == i && rcobray[k] == j)
                        {
                            printf("%c", char(COBR));
                            flag = 1; // Verdadeiro
                        }
                    }
                    if (!flag) printf(" ");
                }
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
    int rcantx = rcobrax[0];
    int rcanty = rcobray[0];
    int auxx, auxy;

    rcobrax[0] = x;
    rcobray[0] = y;
    for (int i = 1; i < tamrcobra; i++)
    {
        auxx = rcobrax[i];
        auxy = rcobray[i];
        rcobrax[i] = rcantx;
        rcobray[i] = rcanty;
        rcantx = auxx;
        rcanty = auxy;
    }

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
        fimdojogo = 1; // Verdadeiro
    }
    for (int i = 0; i < tamrcobra; i++)
    {
        if (rcobrax[i] == x && rcobray[i] == y)
        {
            fimdojogo = 1; // Verdadeiro
        }
    }
    if (x == frutax && y == frutay)
    {
        pontos = pontos + 10;
        frutax = rand() % largura + 1;
        frutay = rand() % altura + 1;
        tamrcobra++;
    }
}

void finaliza() // Finalização do jogo
{
    FILE* arquivo;
    errno_t erro;
    int leuok = 0; // Falso
    char nome[20];

    struct tprecords
    {
        char nome[20];
        int pontos;
    };

    tprecords scores[5];

    printf("\n Entre com seu Apelido: ");
    scanf_s("%19s", nome, 20);

    erro = fopen_s(&arquivo, "records.txt", "r");
    if (erro)
    {
        printf("Erro ao tentar abrir o arquivo de records");
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            leuok = fscanf_s(arquivo, "%19s", &scores[i].nome, 20);
            if (!leuok)
            {
                printf("Erro ao tentar ler o arquivo de records! na iteração %d", i);
                break;
            }
            else
            {
                leuok = fscanf_s(arquivo, "%d", &scores[i].pontos);
                if (!leuok)
                {
                    printf("Erro ao tentar ler o arquivo de records! na iteração %d", i);
                    break;
                }
            }
        }
        fclose(arquivo);
        if (leuok)
        {
            for (int i = 0; i < 5; i++)
            {
                if (pontos > scores[i].pontos)
                {
                    for (int j = 4; j > i; j--)
                    {
                        scores[j].pontos = scores[j - 1].pontos;
                        strcpy_s(scores[j].nome, scores[j - 1].nome);
                    }
                    scores[i].pontos = pontos;
                    strcpy_s(scores[i].nome, nome);
                    break;
                }
            }
            erro = fopen_s(&arquivo, "records.txt", "w");
            if (erro)
            {
                printf("Erro ao tentar abrir o arquivo de records!");
            }
            else
            {
                for (int i = 0; i < 5; i++)
                {
                    fprintf_s(arquivo, "%s %d\n", scores[i].nome, scores[i].pontos);
                }
            }
            fclose(arquivo);
        }
    }
    printf("\n\n\n*** FIM DE JOGO ***\n\n\nSua pontuação foi: %d", pontos);
}
