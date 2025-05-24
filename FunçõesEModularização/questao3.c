/*3. Inverso de Número
Escreva uma função que inverte os dígitos de um número (ex: 1234 → 4321).*/

#include <stdio.h>
#include <stdlib.h>

int inverterNumero(int numero) {
    int negativo = (numero < 0);
    numero = abs(numero);
    
    int temp = numero;
    int digitos = 0;
    while (temp != 0) {
        temp /= 10;
        digitos++;
    }
    
    int *digitosArray = (int*)malloc(digitos * sizeof(int));
    if (digitosArray == NULL) {
        printf("Erro de alocação de memória!\n");
    return -1;
    }
    
    temp = numero;
    for (int i = 0; i < digitos; i++) {
        digitosArray[i] = temp % 10;
        temp /= 10;
    }
    
    int numeroInvertido = 0;
    for (int i = 0; i < digitos; i++) {
        numeroInvertido = numeroInvertido * 10 + digitosArray[i];
    }
    
    free(digitosArray); 
    
return negativo ? -numeroInvertido : numeroInvertido;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    int invertido = inverterNumero(num);
    printf("Número original: %d\n", num);
    printf("Número invertido: %d\n", invertido);
    
return 0;
}