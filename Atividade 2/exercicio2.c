#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("POSITIVO\n");
    } else {
        printf("NEGATIVO\n");
    }

    return 0;
}
