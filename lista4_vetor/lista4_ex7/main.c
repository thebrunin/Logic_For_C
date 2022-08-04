#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Exercicio 7\n\n");

    int a=1, x[5], r[5], s[10];
    for (int y=0;y<10;y++){
        if(y<5){
            printf("\nInsira o valor de r[%d]:", y);
            scanf("%d", &r[y]);
        }
        printf("\nInsira o valor de s[%d]:", y);
        scanf("%d", &s[y]);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            if(r[i]==s[j]){
                x[i]=r[i];
                break;
            }else x[i]=0;
        }
    }

    for(int l=0;l<(sizeof(x)/sizeof(int));l++){
        printf("\nVetor x[%d]: %d", l, x[l]);
    }

}
