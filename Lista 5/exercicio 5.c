#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIAS 30
#define MIN_CONSUMO 100
#define MAX_CONSUMO 500

int main() {
    int consumo[DIAS];
    int total = 0;
    float media;
    int maior_consumo = MIN_CONSUMO, menor_consumo = MAX_CONSUMO;
    int dia_maior = 0, dia_menor = 0;

    srand(time(NULL));

    for (int i = 0; i < DIAS; i++) {
        consumo[i] = MIN_CONSUMO + rand() % (MAX_CONSUMO - MIN_CONSUMO + 1);
        total += consumo[i];

        if (consumo[i] > maior_consumo) {
            maior_consumo = consumo[i];
            dia_maior = i + 1;
        }
        if (consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            dia_menor = i + 1;
        }
    }

    media = (float)total / DIAS;

    printf("Consumo diário:\n");
    for (int i = 0; i < DIAS; i++) {
        printf("Dia %d: %d litros\n", i + 1, consumo[i]);
    }

    printf("\nConsumo total do mês: %d litros\n", total);
    printf("Média de consumo diário: %.2f litros\n", media);
    printf("\nMaior consumo: %d litros (Dia %d)\n", maior_consumo, dia_maior);
    printf("Menor consumo: %d litros (Dia %d)\n", menor_consumo, dia_menor);

    return 0;
}
