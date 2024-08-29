#include <stdio.h>

int main() {
    int quantidade;
    float custo;

    printf("Digite o número de maçãs compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        custo = quantidade * 1.30;
    } else {
        custo = quantidade * 1.00;
    }

    printf("Custo total: R$%.2f\n", custo);

    return 0;
}
