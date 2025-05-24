/*Sequência de Fibonacci Recursiva
Escreva uma função recursiva para gerar o n-ésimo número de Fibonacci.*/

#include <stdio.h>

int fib(int n);

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    
    printf("Digite o valor de n número de Fibonacci: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Por favor, digite um número não negativo.\n");
        return 1;
    }
    printf("O %d-ésimo número de Fibonacci é: %d\n", n, fib(n));
    printf("Sequência até o termo %d: ", n);
    for(int i = 0; i <= n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
    
return 0;
}