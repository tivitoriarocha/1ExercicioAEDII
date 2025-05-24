/*Frequência de Números
Leia 10 números inteiros e mostre quantas vezes cada número distinto aparece.*/

#include <stdio.h>

void lerNumerosEContar(int numeros[]) {
    int i, j, contador;
    int jaContado[10] = {0}; 

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nOcorrências de cada número:\n");
    for (i = 0; i < 10; i++) {
        if (jaContado[i]) {
            continue;
        }
        contador = 1; 
        for (j = i + 1; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                contador++;
                jaContado[j] = 1; // Marca como já contado
            }
        }
        printf("%d aparece %d vez(es)\n", numeros[i], contador);
    }
}

int main() {
    
    int numeros[10]; 
    lerNumerosEContar(numeros);

return 0;
}