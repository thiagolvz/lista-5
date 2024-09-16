#include <stdio.h>

void ordenar(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    int numeros[11], novoNumero;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    ordenar(numeros, 10);

    printf("Digite um novo número para inserir no vetor: ");
    scanf("%d", &novoNumero);

    numeros[10] = novoNumero;
    ordenar(numeros, 11);

    printf("Vetor atualizado:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
