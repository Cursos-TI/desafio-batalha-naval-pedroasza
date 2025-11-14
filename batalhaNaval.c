#include <stdio.h>

/#include <stdio.h>

int main() {

    // Criando o tabuleiro 10x10
    // 0 significa água
    int tabuleiro[10][10];

    // Preenchendo o tabuleiro inteiro com 0 (água)
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Criando os navios (tamanho 3)
    // Vou usar o número 3 para representar o navio
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    // Escolhendo onde colocar os navios no tabuleiro
    // Aqui escolhemos manualmente (sem pedir paro usuário)
    int linhaNavioH = 2;   // navio horizontal na linha 2
    int colunaNavioH = 3;  // começa na coluna 3

    int linhaNavioV = 5;   // navio vertical na linha 5
    int colunaNavioV = 6;  // começa na coluna 6

    // Colocando o navio horizontal no tabuleiro
    // Ele ocupa 3 espaços da esquerda pra direita
    tabuleiro[linhaNavioH][colunaNavioH]     = navio1[0];
    tabuleiro[linhaNavioH][colunaNavioH + 1] = navio1[1];
    tabuleiro[linhaNavioH][colunaNavioH + 2] = navio1[2];

    // Colocando o navio vertical no tabuleiro
    // Ele ocupa 3 espaços de cima pra baixo
    tabuleiro[linhaNavioV][colunaNavioV]     = navio2[0];
    tabuleiro[linhaNavioV + 1][colunaNavioV] = navio2[1];
    tabuleiro[linhaNavioV + 2][colunaNavioV] = navio2[2];

    // Mostrando o tabuleiro na tela
    printf("TABULEIRO BATALHA NAVAL:\n\n");

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
    return 0;
}
