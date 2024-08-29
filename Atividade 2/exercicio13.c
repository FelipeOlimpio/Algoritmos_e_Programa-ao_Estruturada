#include <stdio.h>

int main() {
    int quantidadeAtual, quantidadeMaxima, quantidadeMinima;
    float quantidadeMedia;

    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &quantidadeAtual);
    printf("Digite a quantidade máxima em estoque: ");
    scanf("%d", &quantidadeMaxima);
    printf("Digite a quantidade mínima em estoque: ");
    scanf("%d", &quantidadeMinima);

    quantidadeMedia = (quantidadeMaxima + quantidadeMinima) / 2.0;

    printf("Quantidade média: %.2f\n", quantidadeMedia);

    if (quantidadeAtual >= quantidadeMedia) {
        printf("Nao efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }

    return 0;
}
