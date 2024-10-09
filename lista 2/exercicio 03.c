#include <stdio.h>

int main ()
{
    float peso, ValorPrato;
    printf("Quantos quilos pesou seu prato?");
    scanf("%f", &peso);

    ValorPrato = peso * 40;

    printf("Seu prato custará %g reais", ValorPrato);
    
    return 0;
}