#include <stdio.h>

int main() {
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char tabuleiro[10][10]; // Matriz para representar o tabuleiro

    // Inicializa o tabuleiro com '0'
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    // Posiciona um navio (exemplo: de 3 células na linha 6, colunas D a F)
    for (int j = 3; j < 6; j++) {
        tabuleiro[5][j] = '3'; // 'X' representa uma parte do navio
    }

    for (int i = 2; i < 5; i++)
    {
       tabuleiro[i][8] = '3';
    }
    

    printf("TABULEIRO BATALHA NAVAL\n\n");

    // Imprime os cabeçalhos das colunas (A a J)
    printf("   "); // Espaço para alinhar com os números à esquerda
    for (int j = 0; j < 10; j++) {
        printf(" %c ", letras[j]); 
    }
    printf("\n");

    // Imprime o tabuleiro com numeração das linhas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Garante alinhamento correto para números de 1 a 10
        for (int j = 0; j < 10; j++) {
            printf(" %c ", tabuleiro[i][j]); // Agora imprime os valores corretos da matriz
        }
        printf("\n");
    }

    return 0;
}