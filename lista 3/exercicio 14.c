/*
Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do 
conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes) 
conforme a seguinte tabela:
a) crianças com menos de 10 anos pagam R$100;
b) dependentes com idade entre 10 e 30 anos pagam R$220;
c) dependentes com idade entre 31 e 60 anos pagam R$ 395; e
d) dependentes com mais de 60 anos pagam R$ 480
*/

#include <stdio.h>

int main ()
{
    float total;
    int crincas, adultos, meiaIdade, idosos, opcao;
    printf("Deseja abrir um plano de saúde?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%d", &opcao);
    
    if(opcao == 1){
        printf("Quantos dependentes crianças deseja incluir no plano?\n");
        scanf("%d", &crincas);
    
        printf("Quantos dependentes com idade entre 10 e 30 anos deseja incluir no plano?\n");
        scanf("%d", &adultos);
    
        printf("Quantos dependentes com idade entre 31 e 60 anos deseja incluir no plano?\n");
        scanf("%d", &meiaIdade);

        printf("Quantos dependentes com mais de 60 anos deseja incluir no plano?\n");
        scanf("%d", &idosos);

        total = 300 + (crincas*100) + (adultos*220) + (meiaIdade*395) + (idosos*480);

        printf("O total do seu plano de saúde deu R$%.2f", total);
    }else if(opcao == 2){
        return 0;
    }

    return 0;
}