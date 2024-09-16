#include <stdio.h>

int main() {
    int Q[20], maior, pos;

    for (int i = 0; i < 20; i++) {
        do {
            printf("Digite o número positivo para a posição %d: ", i + 1);
            scanf("%d", &Q[i]);
        } while (Q[i] <= 0);
    }

    maior = Q[0];
    pos = 0;
    for (int i = 1; i < 20; i++) {
        if (Q[i] > maior) {
            maior = Q[i];
            pos = i;
        }
    }

    printf("Maior elemento: %d na posição %d\n", maior, pos);

    return 0;
}
