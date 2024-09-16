#include <stdio.h>

int main() {
    int V1[15], V2[15], contador = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite o valor de V1[%d]: ", i);
        scanf("%d", &V1[i]);
    }
    for (int i = 0; i < 15; i++) {
        printf("Digite o valor de V2[%d]: ", i);
        scanf("%d", &V2[i]);
    }

    for (int i = 0; i < 15; i++) {
        if (V1[i] == V2[i]) {
            contador++;
        }
    }

    printf("Quantidade de números iguais na mesma posição: %d\n", contador);

    return 0;
}
