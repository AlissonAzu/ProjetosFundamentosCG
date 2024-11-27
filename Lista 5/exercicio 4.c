/*
4. Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um 
programa que:
a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
b. Calcule o total de passos dados na semana.
c. Calcule a média diária de passos.
d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim, 
informe quais dias a meta foi alcançada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main ()
{
    int passo, total = 0, maior = 0, diaMaior = 0;
    int passosSemana[7];
    float media;
    bool bateuMeta = false;
    for (int i = 0; i < 7; i++)
    {   
        printf("Digite total de passos dados no dia %dº dia da semana\n", i+1);
        scanf("%d", &passo);
        if(passo >= 10000){
            bateuMeta=true;
        }
        passosSemana[i] = passo;
        total += passo;
        media = total / 5;
    }    
    
     printf("Total de passos dados na semana foi %d passos\n", total);
     printf("Média diaria de passos dados na semana foi %.2f passos\n", media);
    if (bateuMeta){
        printf("A Meta foi batida nos dias:\n");
        for (int i = 0; i < 7; i++){
            if (passosSemana[i]>= 10000){
            printf("%dº dia \n", i+1);
            }
        }
    }else{
        printf("A Meta não foi batida em nenhum dos dias!\n");
    }

    return 0;
}
