#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGADORES 4
#define RODADAS 5
#define MAX_PONTOS 100

int main() {
    int pontuacao[JOGADORES] = {0}; // pontuação acumulada dos jogadores
    int rodada_pontos[JOGADORES];  // pontuação de cada jogador na rodada

    srand(time(NULL));

    for (int rodada = 1; rodada <= RODADAS; rodada++) {
        printf("\n--- Rodada %d ---\n", rodada);

        for (int jogador = 0; jogador < JOGADORES; jogador++) {
            rodada_pontos[jogador] = rand() % (MAX_PONTOS + 1);
            pontuacao[jogador] += rodada_pontos[jogador];

            printf("Jogador %d marcou %d pontos nesta rodada. Pontuação acumulada: %d\n",
                   jogador + 1, rodada_pontos[jogador], pontuacao[jogador]);

            if (rodada_pontos[jogador] > 80) {
                printf("Jogador %d teve uma Rodada de Destaque!\n", jogador + 1);
            }
        }
    }

    printf("\n--- Pontuação Final ---\n");
    int maior_pontuacao = 0;
    int vencedor = -1;
    int empate = 0;

    for (int jogador = 0; jogador < JOGADORES; jogador++) {
        printf("Jogador %d: %d pontos\n", jogador + 1, pontuacao[jogador]);

        if (pontuacao[jogador] > maior_pontuacao) {
            maior_pontuacao = pontuacao[jogador];
            vencedor = jogador;
            empate = 0;
        } else if (pontuacao[jogador] == maior_pontuacao) {
            empate = 1;
        }
    }

    if (empate) {
        printf("\nHouve um empate entre os jogadores com %d pontos!\n", maior_pontuacao);
    } else {
        printf("\nO vencedor foi o Jogador %d com %d pontos!\n", vencedor + 1, maior_pontuacao);
    }

    return 0;
}