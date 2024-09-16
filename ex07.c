#include <stdio.h>

int main() {
    float temperaturas[365], soma = 0, mediaAnual, menorTemp, maiorTemp;
    int diasAbaixoMedia = 0;

    for (int i = 0; i < 365; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    mediaAnual = soma / 365;

    menorTemp = temperaturas[0];
    maiorTemp = temperaturas[0];

    for (int i = 0; i < 365; i++) {
        if (temperaturas[i] < menorTemp) {
            menorTemp = temperaturas[i];
        }
        if (temperaturas[i] > maiorTemp) {
            maiorTemp = temperaturas[i];
        }
        if (temperaturas[i] < mediaAnual) {
            diasAbaixoMedia++;
        }
    }

    printf("Menor temperatura do ano: %.2f\n", menorTemp);
    printf("Maior temperatura do ano: %.2f\n", maiorTemp);
    printf("Temperatura média anual: %.2f\n", mediaAnual);
    printf("Número de dias com temperatura abaixo da média: %d\n", diasAbaixoMedia);

    return 0;
}
