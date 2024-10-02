/*
Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor 
da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço 
for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na 
tela o valor de venda.
*/
#include <stdio.h>

int main()
{
    int ValorProduto, valorfinal;
    printf("Qual o valor do produto?\n");
    scanf("%d", &ValorProduto);
    
    if(ValorProduto < 20)
    {
        valorfinal = ValorProduto + (ValorProduto * 0.45);
        printf("O valor de venda do produto é %d", valorfinal);
    }else if(ValorProduto <= 50){
        valorfinal = ValorProduto + (ValorProduto * 0.35);
        printf("O valor de venda do produto é %d", valorfinal);
    }else if(ValorProduto > 50){
        valorfinal = ValorProduto + (ValorProduto * 0.25);
        printf("O valor de venda do produto é %d", valorfinal);
    }

    return 0;
}