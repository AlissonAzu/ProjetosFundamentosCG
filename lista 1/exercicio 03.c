#include <stdio.h> 

int main()
{
    int op;
    printf("Qual é o verdadeiro nome do super-herói Batman?\n");
    printf("1) Bruce Wayne\n"); 
    printf("2) Clark Kent\n"); 
    printf("3) Peter Parker\n");
    printf("4) Tony Stark\n");
    printf("5) Steve Rogers\n");

    scanf("%d", &op);
    switch(op)
        {
        case 1:
            printf("Você Acertou!!!!!\n");
            break;
        case 2:
            printf("Você Errou!\n");
            break; 
        case 3:
            printf("Você Errou!\n");
            break;
        case 4:
            printf("Você Errou!\n");
            break;
        case 5:
            printf("Você Errou!\n");
            break;
        }
    return 0;
}