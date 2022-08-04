#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 5\n\n");
    int a[10], soma=0, iguais=0, superior=0, media=0, mfinal;
    for(int i=0;i<10;i++){
        printf("Insira o valor de A[%d]:", i);
        scanf("%d", &a[i]);
        if(a[i]<15){
            soma=soma+a[i];
        }
        if(a[i]==15){
            iguais++;
        }
        if(a[i]>15){
            media++;
            superior=superior+a[i];
        }
    }
    mfinal=superior/media;

    printf("\nSoma dos inferiores a 15: %d", soma);
    printf("\nElementos iguais a 15: %d", iguais);
    printf("\nMedia dos superiores a 15: %d", mfinal);
}
