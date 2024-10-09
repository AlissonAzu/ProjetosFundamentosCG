#include <stdio.h>

int main ()
{
    float graua, graub, notafinal;
    printf("\n Qual foi sua nota no grau A?\n");
    scanf("%f", &graua);
    
    printf("\n Qual foi sua nota no grau B?\n");
    scanf("%f", &graub);
    
    notafinal = (graua + (graub * 2)) / 3;

    printf("Sua Nota final é %g \n", notafinal);
    
    return 0;
}
