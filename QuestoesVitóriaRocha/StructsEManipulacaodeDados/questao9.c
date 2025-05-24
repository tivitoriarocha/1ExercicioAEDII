/*Agenda de Contatos
Crie uma struct Contato e permita adicionar, buscar por nome e exibir todos os contatos.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CONTATOS 100
#define TAM_NOME 50
#define TAM_TELEFONE 15

typedef struct {
    char nome[TAM_NOME];
    char telefone[TAM_TELEFONE];
} Contato;

Contato agenda[MAX_CONTATOS];
int totalContatos = 0;

void limparBuffer() {
    while(getchar() != '\n');
}

void adicionarContato() {
    if(totalContatos >= MAX_CONTATOS) {
        printf("Agenda cheia! Não é possível adicionar mais contatos.\n");
        return;
    }
    Contato novo;
    printf("\n--- Novo Contato ---\n");
    printf("Nome: ");
    fgets(novo.nome, TAM_NOME, stdin);
    novo.nome[strcspn(novo.nome, "\n")] = '\0';
    printf("Telefone: ");
    fgets(novo.telefone, TAM_TELEFONE, stdin);
    novo.telefone[strcspn(novo.telefone, "\n")] = '\0';
    agenda[totalContatos++] = novo;
    printf("Contato adicionado com sucesso!\n");
}

void buscarPorNome() {
    char nomeBusca[TAM_NOME];
    int encontrados = 0;
    printf("\n--- Buscar Contato ---\n");
    printf("Digite o nome para buscar: ");
    fgets(nomeBusca, TAM_NOME, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';
    printf("\nResultados da busca:\n");
    for(int i = 0; i < totalContatos; i++) {
        if(strstr(agenda[i].nome, nomeBusca) != NULL) {
            printf("\nContato %d:\n", i+1);
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            encontrados++;
        }
    }
    if(encontrados == 0) {
        printf("Nenhum contato encontrado com esse nome.\n");
    }
}

void listarTodos() {
    printf("\n--- Todos os Contatos ---\n");
    if(totalContatos == 0) {
        printf("Nenhum contato na agenda.\n");
        return;
    }
    for(int i = 0; i < totalContatos; i++) {
        printf("\nContato %d:\n", i+1);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
    }
    printf("\nTotal de contatos: %d\n", totalContatos);
}

int main() {

    int opcao;
    do {
        printf("\n--- Agenda de Contatos ---\n");
        printf("1. Adicionar contato\n");
        printf("2. Buscar contato por nome\n");
        printf("3. Listar todos os contatos\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        limparBuffer();
        switch(opcao) {
            case 1:
                adicionarContato();
                break;
            case 2:
                buscarPorNome();
                break;
            case 3:
                listarTodos();
                break;
            case 4:
                printf("Saindo da agenda...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 4);
    
return 0;
}