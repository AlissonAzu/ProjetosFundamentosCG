#include <stdio.h>

int main() {
    int valor1, valor2;
    
    printf("Soma de números\n");
    printf("Digite o valor 1:\n");
    scanf("%d", &valor1);
    
    printf("Digite o valor 2:\n");
    scanf("%d", &valor2);
    
    printf("Soma dos números é: %d", valor1 + valor2);

    return 0;
}