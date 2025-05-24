/*Interseção de Vetores
Dado dois vetores de inteiros, mostre os elementos comuns entre eles.*/

#include <stdio.h>
#include <stdlib.h>

void encontrarElementosComuns(int *vetor1, int tamanho1, int *vetor2, int tamanho2) {
    printf("\nElementos em comum entre os vetores:\n");
    for (int i = 0; i < tamanho1; i++) {
        int jaFoiVerificado = 0;
        for (int k = 0; k < i; k++) {
            if (vetor1[k] == vetor1[i]) {
                jaFoiVerificado = 1;
                break;
            }
        }
        if (jaFoiVerificado) {
            continue; 
        }

        for (int j = 0; j < tamanho2; j++) {
            if (vetor1[i] == vetor2[j]) {
                printf("- %d\n", vetor1[i]); 
                break; 
            }
        }
    }
}

int main() {

    int tamanho1, tamanho2;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamanho1);
    int *vetor1 = (int*)malloc(tamanho1 * sizeof(int));
    printf("Digite os %d elementos do primeiro vetor:\n", tamanho1);
    for (int i = 0; i < tamanho1; i++) {
        scanf("%d", &vetor1[i]);
    }
    printf("\nDigite o tamanho do segundo vetor: ");
    scanf("%d", &tamanho2);
    int *vetor2 = (int*)malloc(tamanho2 * sizeof(int));
    printf("Digite os %d elementos do segundo vetor:\n", tamanho2);
    for (int i = 0; i < tamanho2; i++) {
        scanf("%d", &vetor2[i]);
    }
    encontrarElementosComuns(vetor1, tamanho1, vetor2, tamanho2);
    free(vetor1);
    free(vetor2);

return 0;
}
