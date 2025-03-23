#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    unsigned long quantidade; // Usando unsigned long para grandes quantidades
    double valorUnitario;
} Produto;

int main() {
    Produto produto1, produto2;

    // Cadastro do Produto 1
    printf("Digite o nome do Produto 1: ");
    scanf(" %[^\n]", produto1.nome);

    printf("Digite a quantidade em estoque do Produto 1: ");
    scanf("%lu", &produto1.quantidade); // %lu para unsigned long

    printf("Digite o valor unitario do Produto 1: ");
    scanf("%lf", &produto1.valorUnitario); // %lf para double

    // Cadastro do Produto 2
    printf("\nDigite o nome do Produto 2: ");
    scanf(" %[^\n]", produto2.nome);

    printf("Digite a quantidade em estoque do Produto 2: ");
    scanf("%lu", &produto2.quantidade); // %lu para unsigned long

    printf("Digite o valor unitario do Produto 2: ");
    scanf("%lf", &produto2.valorUnitario); // %lf para double

    // Comparação da quantidade em estoque
    printf("\nComparacao de quantidade em estoque:\n");
    printf("%s tem %s quantidade em estoque que %s\n", produto1.nome, (produto1.quantidade > produto2.quantidade) ? "mais" : (produto1.quantidade < produto2.quantidade) ? "menos" : "a mesma", produto2.nome);

    // Comparação do valor total em estoque
    double valorTotal1 = produto1.quantidade * produto1.valorUnitario;
    double valorTotal2 = produto2.quantidade * produto2.valorUnitario;

    printf("\nComparacao do valor total em estoque:\n");
    printf("%s tem %s valor total em estoque que %s\n", produto1.nome, (valorTotal1 > valorTotal2) ? "maior" : (valorTotal1 < valorTotal2) ? "menor" : "o mesmo", produto2.nome);

    return 0;
}
