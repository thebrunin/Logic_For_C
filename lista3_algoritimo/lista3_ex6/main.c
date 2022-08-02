#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 6\n\n");
    int i, idade, x=0;
    for(i=1;i<=20;i++){
        printf("%Insira a %d idade:", i);
        scanf("%d", &idade);
        x=x+idade;
}
    printf("A medias de idade das 20 pessoas eh: %d anos", x/20);
}
