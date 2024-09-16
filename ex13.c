#include <stdio.h>

int main() {
    int VET[50], repetidos = 0;

    for (int i = 0; i < 50; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &VET[i]);
    }

    printf("Números repetidos e suas posições:\n");
    for (int i = 0; i < 50; i++) {
        for (int j = i + 1; j < 50; j++) {
            if (VET[i] == VET[j]) {
                printf("Número %d repetido nas posições %d e %d\n", VET[i], i + 1, j + 1);
                repetidos = 1;
            }
        }
    }

    if (!repetidos) {
        printf("Não há números repetidos no vetor.\n");
    }

    return 0;
}
