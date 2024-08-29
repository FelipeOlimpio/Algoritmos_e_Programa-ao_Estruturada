#include <stdio.h>

int main() {
    float salarioFixo, vendas, comissao, salarioTotal;

    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor das vendas efetuadas: ");
    scanf("%f", &vendas);

    if (vendas <= 1500) {
        comissao = vendas * 0.03;
    } else {
        comissao = 1500 * 0.03 + (vendas - 1500) * 0.05;
    }

    salarioTotal = salarioFixo + comissao;

    printf("O salário total é: R$%.2f\n", salarioTotal);

    return 0;
}
