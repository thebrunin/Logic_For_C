#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 1\n\n");
    int i, a[10], b[10], c[10];
    for(i=0;i<10;i++){
        printf("\nInsira o valor de a[%d]:", i);
        scanf("%d", &a[i]);
        printf("\nInsira o valor de b[%d]:", i);
        scanf("%d", &b[i]);
        c[i]=a[i]+b[i];

    }
    for(i=0;i<10;i++){
        if(i==0)
        printf("\nSoma dos vetores de mesmo indice:");
        printf("[%d] ", c[i]);
}
}
