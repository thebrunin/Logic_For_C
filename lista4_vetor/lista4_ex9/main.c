#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 9\n\n");
    int a=0, vet[10];
    for (int y=0;y<10;y++){
        printf("\Insira o %d numero:", y+1);
        scanf("%d", &vet[y]);
        if(vet[y]>0){
            a++;
        }
    }
    int vet2[a], i=0, j=0;
    printf("Maiores que 0:");
    while(i<a){
        if(vet[j]>0){
            vet2[i]=vet[j];
            printf("[%d] ", vet2[i]);
            i++;
        }
        j++;
    }


    return 0;
}
