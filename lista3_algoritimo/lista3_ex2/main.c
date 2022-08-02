#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 2\n\n");
    int i, x, y, soma=0;
    printf("insira o primeiro valor:");
    scanf("%d", &y);
    printf("insira o segundo valor:");
    scanf("%d", &x);
    for(i=0;i<=(x-y);i++){
        soma=soma+(y+i);
        printf("%d\n", soma);
    }
}
