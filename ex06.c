#include <stdio.h>

int main() {
    int N;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    int A[N], B[N], Soma[N];

    for (int i = 0; i < N; i++) {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("Digite o valor de B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++) {
        Soma[i] = A[i] + B[i];
    }

    printf("Vetor Soma:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", Soma[i]);
    }
    printf("\n");

    return 0;
}
