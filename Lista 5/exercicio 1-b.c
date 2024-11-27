/*
Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    int v[10];
    int i;
    int achou50 = 0;
    
    for(i = 0; i < 10; i++) {
        v[i] = rand() % (90 -10 + 1) + 10;
    }    

    printf("Vetor gerado:\n");
    for(int i = 0; i < 10; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    
    for(i = 0; i < 10; i++){
        if(v[i] == 50){
            achou50 = 1;
        }
    }

    if(achou50 > 0){
            printf("O valor 50 foi encontrado no vetor.\n");
        }else{
            printf("O valor 50 não foi encontrado no vetor.\n");
        }
    return 0;

}