#include <stdio.h>

int main() {
    float notas[20], soma = 0, media;
    int acimaMedia = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 20;
    printf("Média da turma: %.2f\n", media);

    for (int i = 0; i < 20; i++) {
        if (notas[i] > media) {
            acimaMedia++;
        }
    }

    printf("Número de alunos com nota acima da média: %d\n", acimaMedia);

    return 0;
}
