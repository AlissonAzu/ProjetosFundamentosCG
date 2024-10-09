#include <stdio.h>

int main ()
{
    int minutos, segundos;
    printf("\nQuantos minutos você quer transformar?\n");
    scanf("%d", &minutos);

    segundos = minutos * 60;

    printf("\nSeu tempo é igual %d segundos\n", segundos);
    
    return 0;
}