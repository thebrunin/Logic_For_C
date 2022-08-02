#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 12\n\n");
    int i, num, x=0, y=0, z=0;
    for(i=0;i<20;i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num);
        if(num>=0&&num<=100){
            x++;
        }else if(num<=200){
            y++;
        }else{
            z++;
        }
    }
    printf("\nNumeros entre 0 e 100: %d", x);
    printf("\nNumeros entre 101 e 200: %d", y);
    printf("\nNumeros > 200: %d", z);
}
