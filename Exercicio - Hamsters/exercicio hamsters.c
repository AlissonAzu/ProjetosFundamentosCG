#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int posHamster1 = 0, posHamster2 = 0;
    int dadoHamster1, dadoHamster2;
    srand(time(NULL));

    while (posHamster1 < 12 && posHamster2 < 12) {
        #ifdef _WIN32
            system("cls"); // Windows
        #else
            system("clear"); // Linux/macOS
        #endif

        dadoHamster1 = rand() % 5 + 1;
        dadoHamster2 = rand() % 5 + 1;

        if (dadoHamster1 == 1) posHamster1 += 1;
        else if (dadoHamster1 == 2) posHamster1 += 2;
        else if (dadoHamster1 == 3) posHamster1 += 0;
        else if (dadoHamster1 == 4) posHamster1 -= 1;
        else if (dadoHamster1 == 5) posHamster1 -= 2;

        if (dadoHamster2 == 1) posHamster2 += 1;
        else if (dadoHamster2 == 2) posHamster2 += 2;
        else if (dadoHamster2 == 3) posHamster2 += 0;
        else if (dadoHamster2 == 4) posHamster2 -= 1;
        else if (dadoHamster2 == 5) posHamster2 -= 2;

        if (posHamster1 < 0) posHamster1 = 0;
        if (posHamster2 < 0) posHamster2 = 0;

        printf("H1: ");
        for (int i = 0; i <= 12; i++) {
            if (i == posHamster1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\nH2: ");
        for (int i = 0; i <= 12; i++) {
            if (i == posHamster2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");

        printf("Pressione ENTER para o próximo turno...\n");
        while (getchar() != '\n');
    }

    if (posHamster1 >= 12 && posHamster2 >= 12) {
        printf("Empate! Ambos os hamsters chegaram à posição 12.\n");
    } else if (posHamster1 >= 12) {
        printf("O Hamster 1 venceu!\n");
    } else {
        printf("O Hamster 2 venceu!\n");
    }

    return 0;
}
