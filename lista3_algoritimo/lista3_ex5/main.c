#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 5\n\n");
    int a=0, b;
    for(int i=0;i<10;i++){
        printf("%d numero:", i+1);
        scanf("%d", &b);
        a=a+b;
    }
    printf("A soma dos 10 numeros eh: %d", a);
}
