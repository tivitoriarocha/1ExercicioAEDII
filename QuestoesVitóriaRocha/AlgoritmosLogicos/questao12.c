/*Verificador de Palíndromo
Dada uma string (array de char), diga se ela é um palíndromo (ex: “arara”, “radar”).*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char *palavra = NULL;
    char c;
    int tamanho = 0;

    printf("Digite uma palavra: ");
    while ((c = getchar()) != '\n' && c != EOF) {
        palavra = (char *)realloc(palavra, (tamanho + 1) * sizeof(char));
        palavra[tamanho++] = c;
    }
    palavra = (char *)realloc(palavra, (tamanho + 1) * sizeof(char));
    palavra[tamanho] = '\0'; 
    int eh_palindromo = 1; 
    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            eh_palindromo = 0;
            break;
        }
    }
    printf("\"%s\" %s um palíndromo.\n", palavra, eh_palindromo ? "é" : "NÃO é");
    free(palavra); 
    
return 0;
}