#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Exercicio 8\n\n");
    char nome[50], novo[50];
    int idade=0, menor=0, x=0;
    for(int i=0;i<10;i++){
        printf("Insira o nome:");
        scanf("%s", nome);
        menor=idade;
        printf("Insira a idade:");
        scanf("%d", &idade);
        if((x==0)||idade<=x){
            if(idade<=menor||(menor==0)){
            x=idade;
            strcpy(novo, nome);
            }
        }
    }
    printf("%s eh o mais novo", novo);

}
