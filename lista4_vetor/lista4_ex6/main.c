#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 6\n\n");
    int a[10], i, maior, menor, posicao1, posicao2;
    for(i=0;i<10;i++){
        printf("Insira a %d idade:", i+1);
        scanf("%d", &a[i]);
        if(i==0){
            maior=a[i];
            menor=a[i];
        }
        if(maior<a[i]){
            maior=a[i];
            posicao1=i+1;
        }
        if(menor>a[i]){
            menor=a[i];
            posicao2=i+1;
        }
    }
    printf("\nA maior idade eh de %d anos, na posicao %d.", maior, posicao1);
    printf("\nA menor idade eh de %d anos, na posicao %d.", menor, posicao2);
}
