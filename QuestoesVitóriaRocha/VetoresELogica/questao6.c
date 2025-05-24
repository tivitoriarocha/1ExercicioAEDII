/*Soma de Matrizes
Crie duas matrizes 3x3, some seus valores e exiba o resultado.*/

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void somarMatrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    int matriz1[LINHAS][COLUNAS], matriz2[LINHAS][COLUNAS], resultado[LINHAS][COLUNAS];
    printf("Digite os elementos da primeira matriz 3x3:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("\nDigite os elementos da segunda matriz 3x3:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    somarMatrizes(matriz1, matriz2, resultado);
    printf("\nMatriz resultante (soma):\n");
    imprimirMatriz(resultado);

return 0;
}