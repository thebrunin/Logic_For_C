#include <stdio.h>
#include <stdlib.h>

/*17. Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 23.59) ]. Só encerre a
execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
a 0.*/

int main()
{
    printf("Exercicio 17\n");
    float prato, bebida, vConta;
    do{
        printf("\nPeso do prato (KG):");
        scanf("%f", &prato);
        printf("Valor da bebida:");
        scanf("%f", &bebida);
        vConta=(prato*23.59)+bebida;
        if((prato!=0)&&(bebida!=0)){
            printf("Valor total R$%.2f.", vConta);
        }
        system("pause");
        system("cls");
    }while((prato!=0)&&(bebida!=0));

}
