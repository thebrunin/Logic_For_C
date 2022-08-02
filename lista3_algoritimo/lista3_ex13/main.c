#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 13\n\n");
    int i=0, num, x=0;
    do{
        i++;
        printf("Insira o %d numero:", i);
        scanf("%d", &num);
        if(num>=0){
            x=x+num;
        }
    }while(num>=0);
    printf("Soma dos numeros positivos: %d", x);
}
