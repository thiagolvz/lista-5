#include <stdio.h>

int main() {
    int A[10], M[10], X;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor da posição %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    for (int i = 0; i < 10; i++) {
        M[i] = A[i] * X;
    }

    printf("Vetor M (A multiplicado por X):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", M[i]);
    }
    printf("\n");

    return 0;
}
