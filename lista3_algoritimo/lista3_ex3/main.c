#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 3\n\n");
    char nome[50];
    printf("Insira seu nome:");
    scanf("%s", nome);
    for(int i=0;i<10;i++){
        printf("%d %s\n", i+1, nome);
    }
}
