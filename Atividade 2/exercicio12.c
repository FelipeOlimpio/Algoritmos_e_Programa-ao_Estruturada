#include <stdio.h>

int main() {
    int numeroConta;
    float saldo, debito, credito, saldoAtual;

    printf("Digite o número da conta: ");
    scanf("%d", &numeroConta);
    printf("Digite o saldo: ");
    scanf("%f", &saldo);
    printf("Digite o débito: ");
    scanf("%f", &debito);
    printf("Digite o crédito: ");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;

    printf("Saldo atual: R$%.2f\n", saldoAtual);

    if (saldoAtual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}
