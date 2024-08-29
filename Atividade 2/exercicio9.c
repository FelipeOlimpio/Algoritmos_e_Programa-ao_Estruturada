#include <stdio.h>

int main() {
    float horasTrabalhadas, salarioHora, salarioTotal;
    float horasExtras = 0;

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);
    printf("Digite o salário por hora: ");
    scanf("%f", &salarioHora);

    if (horasTrabalhadas > 160) {  // 40 horas/semana * 4 semanas
        horasExtras = horasTrabalhadas - 160;
        salarioTotal = (160 * salarioHora) + (horasExtras * salarioHora * 1.5);
    } else {
        salarioTotal = horasTrabalhadas * salarioHora;
    }

    printf("O salário total é: R$%.2f\n", salarioTotal);

    return 0;
}
