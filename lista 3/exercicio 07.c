/*
Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa 
deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto 
segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é 
318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20.
*/

#include <stdio.h>

#define DESCONTO_PERCENTUAL 0.11
#define VALOR_MAXIMO_DESCONTO 318.20

float calcular_desconto(float salario) {
    float desconto = salario * DESCONTO_PERCENTUAL;
    if (desconto > VALOR_MAXIMO_DESCONTO) {
        return VALOR_MAXIMO_DESCONTO;
    }
    return desconto;
}

int main() {
    float salario;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario < 0) {
        printf("Salário inválido. Por favor, insira um valor positivo.\n");
        return 1;
    }

    float desconto = calcular_desconto(salario);
    printf("O desconto previdenciário é: R$ %.2f\n", desconto);

    return 0;
}
