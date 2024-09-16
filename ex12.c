#include <stdio.h>

int main() {
    int A[30], numero, contador = 0;

    for (int i = 0; i < 30; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Digite um número para contar quantas vezes aparece no vetor: ");
    scanf("%d", &numero);

    for (int i = 0; i < 30; i++) {
        if (A[i] == numero) {
            contador++;
        }
    }

    printf("O número %d aparece %d vezes no vetor.\n", numero, contador);

    return 0;
}
