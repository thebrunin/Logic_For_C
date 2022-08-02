#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 11\n\n");
    int i, num, x=0;
    for(i=0;i<20;i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num);
        if(num>=0&&num<=100){
          x++;
        }
    }
    printf("\nNumeros entre 0 e 100: %d", x);
}
