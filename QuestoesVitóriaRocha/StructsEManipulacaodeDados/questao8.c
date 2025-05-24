/*Estoque Simples
Crie uma struct Produto com nome, código, quantidade e preço. Permita cadastrar, buscar e listar produtos.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PRODUTOS 100
#define TAM_NOME 50

typedef struct {
    char nome[TAM_NOME];
    int codigo;
    int quantidade;
    float preco;
} Produto;

Produto produtos[MAX_PRODUTOS];
int totalProdutos = 0;

void cadastrarProduto() {
    if (totalProdutos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }
    Produto p;
    printf("\n--- Cadastro de Produto ---\n");
    printf("Nome: ");
    scanf(" %[^\n]", p.nome);
    printf("Código: ");
    scanf("%d", &p.codigo);
    printf("Quantidade: ");
    scanf("%d", &p.quantidade);
    printf("Preço: ");
    scanf("%f", &p.preco);
    produtos[totalProdutos++] = p;
    printf("Produto cadastrado com sucesso!\n");
}

void listarProdutos() {
    printf("\n--- Lista de Produtos ---\n");
    if (totalProdutos == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    for (int i = 0; i < totalProdutos; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preço: R$ %.2f\n", produtos[i].preco);
    }
}

void buscarProduto() {
    int opcao, codigo;
    char nome[TAM_NOME];
    printf("\n--- Buscar Produto ---\n");
    printf("1. Buscar por código\n");
    printf("2. Buscar por nome\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("Digite o código: ");
        scanf("%d", &codigo);
        for (int i = 0; i < totalProdutos; i++) {
            if (produtos[i].codigo == codigo) {
                printf("\nProduto encontrado:\n");
                printf("Nome: %s\n", produtos[i].nome);
                printf("Código: %d\n", produtos[i].codigo);
                printf("Quantidade: %d\n", produtos[i].quantidade);
                printf("Preço: R$ %.2f\n", produtos[i].preco);
                return;
            }
        }
        printf("Produto não encontrado.\n");
    }
    else if (opcao == 2) {
        printf("Digite o nome: ");
        scanf(" %[^\n]", nome);
        for (int i = 0; i < totalProdutos; i++) {
            if (strcmp(produtos[i].nome, nome) == 0) {
                printf("\nProduto encontrado:\n");
                printf("Nome: %s\n", produtos[i].nome);
                printf("Código: %d\n", produtos[i].codigo);
                printf("Quantidade: %d\n", produtos[i].quantidade);
                printf("Preço: R$ %.2f\n", produtos[i].preco);
                return;
            }
        }
        printf("Produto não encontrado.\n");
    }
    else {
        printf("Opção inválida!\n");
    }
}

int main() {
    int opcao;
    do {
        printf("\n--- Sistema de Produtos ---\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Buscar produto\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                buscarProduto();
                break;
            case 4:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 4);
    
return 0;
}