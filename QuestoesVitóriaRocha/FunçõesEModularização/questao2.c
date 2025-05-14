// 2. Potência (sem usar pow)
// Implemente uma função int potencia(int base, int expoente) que calcule potências usando apenas multiplicações.

#include <stdio.h>
#include <math.h>

int Potencia(int base, int expoente){
    int num = base;
    for (int i = 1; i < expoente; i++){
        num *= base;
    }
return (num);
}


int main(){

    int base, expoente;
    printf("Informe a base:");
    scanf("%d", &base);
    printf("Informe seu expoente:");
    scanf("%d", &expoente);
    printf("%d",Potencia(base, expoente));

return (0);
}