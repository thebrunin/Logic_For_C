#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10\n\n");
    int i, num, x=0;
    for(i=0;i<20;i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num);
        if(num%2==0){
          x++;
        }
    }
    printf("\nNumeros pares: %d", x);
}
