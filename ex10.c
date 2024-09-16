#include <stdio.h>

int main() {
    int A[20], numero, encontrado = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Digite um número para verificar se existe no vetor: ");
    scanf("%d", &numero);

    printf("Novo vetor sem o número %d (se existir):\n", numero);
    for (int i = 0; i < 20; i++) {
        if (A[i] != numero) {
            printf("%d ", A[i]);
        } else {
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("\nO número %d não foi encontrado no vetor.\n", numero);
    } else {
        printf("\n");
    }

    return 0;
}
