#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto {
    char nome[100];
    int estoque;
    float preco;
};

void trocar(struct produto *a, struct produto *b) {
    struct produto temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortNome(struct produto produtos[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(produtos[j].nome, produtos[j + 1].nome) > 0) {
                trocar(&produtos[j], &produtos[j + 1]);
            }
        }
    }
}

void bubbleSortEstoque(struct produto produtos[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (produtos[j].estoque > produtos[j + 1].estoque) {
                trocar(&produtos[j], &produtos[j + 1]);
            }
        }
    }
}

void bubbleSortPreco(struct produto produtos[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (produtos[j].preco > produtos[j + 1].preco) {
                trocar(&produtos[j], &produtos[j + 1]);
            }
        }
    }
}

int main() {

    FILE *arquivo;
    arquivo = fopen("produtos.csv", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    struct produto produtos[100];
    int i = 0;
    char linha[200];

    
    while (fgets(linha, sizeof(linha), arquivo)) {
        char *token;
        token = strtok(linha, ",");
        if (token != NULL) strcpy(produtos[i].nome, token);
        token = strtok(NULL, ",");
        if (token != NULL) produtos[i].estoque = atoi(token);
        token = strtok(NULL, ",");
        if (token != NULL) produtos[i].preco = atof(token);
        i++;
    }
    fclose(arquivo);

    int escolha;
    printf("selecione qual coluna deseja utilizar para ordenar os dados:\n");
    printf("1. Nome\r\n");
    printf("2. Estoque\r\n");
    printf("3. Preco\r\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &escolha);
if (escolha < 1 || escolha > 3) {
    printf("Opcao invalida! Escolha um numero entre 1 e 3.\n");
    return 1;
}
    switch (escolha) {
        case 1:
            bubbleSortNome(produtos, i);
            break;
        case 2:
            bubbleSortEstoque(produtos, i);
            break;
        case 3:
            bubbleSortPreco(produtos, i);
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    for (int j = 0; j < i; j++) {
        printf("Produto: %s, Estoque: %d, Preco: %.2f\n", produtos[j].nome, produtos[j].estoque, produtos[j].preco);
    }

    char nomeSaida[100];
    printf("Digite o nome do arquivo CSV que deseja armazenar o arquivo ordenado (ex: ordenado.csv): ");
    scanf("%s", nomeSaida);

    FILE *saida = fopen(nomeSaida, "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        return 1;
    }

    int totalProdutos = i;
for (int j = 0; j < i; j++) {
    fprintf(saida, "%s,%d,%.2f\n", produtos[j].nome, produtos[j].estoque, produtos[j].preco);
}
    fclose(saida);

    printf("Arquivo '%s' gerado com sucesso!\n", nomeSaida);

    return 0;
}