#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 9\n\n");
    int i, num, x=0;
    for(i=0;i<20;i++){
        printf("Insira o numero: ");
        scanf("%d", &num);
        if(num>8){
          x++;
        }
    }
    printf("\nNumeros maiores que 8: %d", x);
}
