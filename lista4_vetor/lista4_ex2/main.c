#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 2\n\n");
    int i, num[20], par=0, impar=0, maior50=0, menor7=0;
    for(i=0;i<20;i++){
        printf("Insira o valor de num[%d]:", i);
        scanf("%d", &num[i]);
        if(num[i]%2==0){
            par++;
        }else {
            impar++;
        }
        if(num[i]>50){
            maior50++;
        }
        if(num[i]<7){
            menor7++;
        }
    }
    printf("\nTotal de numeros PAR: %d", par);
    printf("\nTotal de numeros IMPAR: %d", impar);
    printf("\nTotal de numeros >50: %d", maior50);
    printf("\nTotal de numeros <7 : %d", menor7);
}
