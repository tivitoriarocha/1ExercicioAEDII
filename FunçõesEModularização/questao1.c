// 1. Números Primos em Intervalo
// Escreva uma função bool ehPrimo(int n) e use-a para listar todos os primos entre dois números dados pelo usuário.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool PrimeNumber(int num){
    int cont=0;
    for (int j = 1; j <= num; j++){
            if(num%j==0){
                cont++;
            }
    }

    /*if (cont == 2){
        return true;
    }else return false;*/
    return cont==2;
}

int main(){

    int num1;
    int num2;

    printf("Informe dois numeros:");
    scanf("%d", &num1);
    scanf("%d", &num2);

    for(int i = num1+1; i < num2; i++){
        if (PrimeNumber(i)){
            printf("%d eh primo.\n",i);
        }
    }
    
return 0;
}


