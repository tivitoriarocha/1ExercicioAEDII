/*Soma Diagonal Principal
Crie uma matriz 4x4 e calcule a soma da diagonal principal.*/

#include <stdio.h>

#define TAMANHO 4

int main() {

    int matriz[TAMANHO][TAMANHO];
    int soma = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][i]; // A diagonal principal tem i == j
    }
    printf("\nMatriz informada:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma da diagonal principal: %d\n", soma);

return 0;
}