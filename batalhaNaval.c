#include <stdio.h>

int main() {
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char tabuleiro[10][10]; 

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = '0';
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                tabuleiro[i][j] = '3';   
            }
            
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i + j == 9)
            {
                tabuleiro[i][j] = '3';   
            }
            
        }
        
    }
    




    // Exibe o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");

    printf("   "); 
    for (int j = 0; j < 10; j++) {
        printf(" %c ", letras[j]); 
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < 10; j++) {
            printf(" %c ", tabuleiro[i][j]); 
        }
        printf("\n");
    }

    return 0;
}