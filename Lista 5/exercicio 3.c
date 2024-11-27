/*Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número 
lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um 
array com 6 posições e ao final imprima o percentual do resultado de cada face.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    srand (time(0));
    int v[6] = {0, 0, 0, 0, 0, 0};
    int n, PosicaoAtualizada, valor;
    printf("Digite o número de vezes que o dado será laçado:\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        valor = rand() % (6 -1 + 1) + 1;
        PosicaoAtualizada = valor - 1;
        v[PosicaoAtualizada]= v[PosicaoAtualizada] + 1;
    }    
    for(int i = 0; i < 6; i++) {
        float percentual = (100 * v[i] / n);
        printf("\n Percentual do lado %d: %.2f", i+1, percentual);
       }
    return 0;
    
}
