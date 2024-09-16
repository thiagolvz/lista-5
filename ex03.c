#include <stdio.h>

int main() {
    int Q[20], menor, pos;

    for (int i = 0; i < 20; i++) {
        do {
            printf("Digite o número positivo para a posição %d: ", i + 1);
            scanf("%d", &Q[i]);
        } while (Q[i] <= 0);
    }

    menor = Q[0];
    pos = 0;
    for (int i = 1; i < 20; i++) {
        if (Q[i] < menor) {
            menor = Q[i];
            pos = i;
        }
    }

    printf("Menor elemento: %d na posição %d\n", menor, pos);

    return 0;
}
