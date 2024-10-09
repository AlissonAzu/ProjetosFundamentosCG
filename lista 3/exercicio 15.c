/* Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço 
normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir 
para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
1 - À vista em dinheiro, recebe 15% de desconto
2 - À vista no cartão de crédito, recebe 10% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%
*/
#include <stdio.h>

int main()
{
    int opcao;
    float valorProduto, total, parcelado;
    printf("Qual o valor do produto que deseja comprar?\n");
    scanf("%f", &valorProduto);

    printf("Qual a condição de pagamento?\n");
    printf("1 - À vista em dinheiro, recebe 15 por cento de desconto\n");
    printf("2 - À vista no cartão de crédito, recebe 10 por cento de desconto\n");
    printf("3 - Em duas vezes, preço normal de etiqueta sem juros\n");
    printf("4 - Em três vezes, preço normal de etiqueta mais juros de 10 por cento\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        total = valorProduto - (valorProduto*0.15);
        printf("O total da compra ficou R$%.2f", total);
    }else if(opcao == 2){
        total = valorProduto - (valorProduto*0.1);
        printf("O total da compra ficou R$%.2f", total);
    }else if(opcao == 3){
        total = valorProduto / 2;
        printf("O total da compra ficou duas vezes de R$%.2f", total);
    }else if(opcao == 4){
        total = valorProduto + (valorProduto*0.1);
        parcelado = total / 3;
        printf("O total da compra ficou três vezes de R$%.2f", parcelado);
    }
    return 0;
}
