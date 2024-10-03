/*
Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme 
as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou 
em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau 
A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o 
grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado.
*/
#include <stdio.h>

int main()
{
    float notaA, notaB, final, notaC;
    int opcao;
    printf("Qual sua nota do grau A?\n");
    scanf("%f", &notaA);

    printf("Qual sua nota do grau B?\n");
    scanf("%f", &notaB);

    final = (notaA + (notaB *2)) / 3;
    
    if(final >= 6)
    {
        printf("\nAPROVADO! Sua média final foi %.1f", final);
    }else if(final < 6)
    {
        printf("Você está em recuperação!\n");
        printf("Digite sua nota do grau C:\n");
        scanf("%f", &notaC);

        printf("Deseja Substitituir qual grau?\n");
        printf("1 - Grau A\n");
        printf("2 - Grau B\n");
        scanf("%d", &opcao);
        if (opcao == 1)
        {
            final = (notaC + (notaB * 2)) / 3;
            if(final >= 6){
                printf("APROVADO! Sua média final foi %.1f", final);
            }else if (final < 6){
                printf("Você está reprovado! Sua média final foi %.1f", final);
            }
        }else if(opcao == 2){
            final = (notaA + (notaC * 2)) / 3;
            if(final >= 6){
                printf("APROVADO! Sua média final foi %.1f", final);
            }else if (final < 6){
                printf("Você está reprovado! Sua média final foi %.1f", final);
            }
        }
    }
    return 0;
}