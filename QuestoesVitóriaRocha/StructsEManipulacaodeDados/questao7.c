/*Cadastro de Alunos
Crie uma struct Aluno com nome, matrícula e média. Cadastre n alunos e mostre os aprovados.*/

#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    
    int n;
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);
    struct Aluno alunos[n];
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome); 
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média: ");
        scanf("%f", &alunos[i].media);
    }
    printf("\nAlunos aprovados:\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("- Nome: %s\n", alunos[i].nome);
            printf("  Matrícula: %d\n", alunos[i].matricula);
            printf("  Média: %.2f\n\n", alunos[i].media);
        }
    }

return 0;
}