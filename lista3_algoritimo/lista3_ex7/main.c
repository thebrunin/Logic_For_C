#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 7\n\n");

    int i, idade, x=0;

    for(i=1;i<=20;i++){
        printf("%Insira a %d idade:", i);
        scanf("%d", &idade);

        if(idade>=18){
        x++;
        }
    }
    printf("\n%d pessoas sao maiores de idade!", x);
}
