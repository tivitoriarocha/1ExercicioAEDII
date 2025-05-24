/*Busca Binária
Implemente busca binária em um vetor ordenado.*/

#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int elemento) {
    int inicio = 0;
    int fim = tamanho - 1;
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2; 

        if (vetor[meio] == elemento) {
            return meio; 
        } else if (vetor[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1; 
        }
    }
return -1;
}

int main() {
    
    int vetor[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; 
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento;
    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nDigite o elemento a ser buscado: ");
    scanf("%d", &elemento);
    int resultado = buscaBinaria(vetor, tamanho, elemento);
    if (resultado != -1) {
        printf("Elemento encontrado no índice %d.\n", resultado);
    } else {
        printf("Elemento não encontrado no vetor.\n");
    }

return 0;
}