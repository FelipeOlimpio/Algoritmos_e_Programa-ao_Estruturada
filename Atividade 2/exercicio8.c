#include <stdio.h>

int main() {
    int horaInicio, horaFim, duracao;

    printf("Digite a hora de início do jogo: ");
    scanf("%d", &horaInicio);
    printf("Digite a hora de fim do jogo: ");
    scanf("%d", &horaFim);

    if (horaFim >= horaInicio) {
        duracao = horaFim - horaInicio;
    } else {
        duracao = (24 - horaInicio) + horaFim;
    }

    printf("A duração do jogo foi de %d horas\n", duracao);

    return 0;
}
