#include <stdio.h>
#include <stdlib.h>

/*16. Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O seu
algoritmo deve receber do a informação de quantos produtos o cliente comprou e, para
cada produto, deverá ler o seu preço. Ao final, deverá informar quanto o cliente deve pagar
pelas compras*/

int main()
{
    printf("Exercicio 16\n\n");

    int i;
    float valor, valorTotal=0;

    printf("Quantidade de produtos:");
    scanf("%d", &i);

    for(int j=1;j<=i;j++){
        printf("Valor do %d produto:", j);
        scanf("%f", &valor);
        valorTotal+=valor;
    }
    printf("Valor total da compra R$%.2f", valorTotal);
}
