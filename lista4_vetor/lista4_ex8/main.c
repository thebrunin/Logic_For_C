#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 8\n\n");
    int a=0, aposta[10], gabarito[5];
    for (int y=0;y<10;y++){
        printf("\Insira o %d numero da aposta:", y+1);
        scanf("%d", &aposta[y]);
    }
    for (int y=0;y<5;y++){
        printf("\Insira o %d numero do gabarito:", y+1);
        scanf("%d", &gabarito[y]);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            if(gabarito[i]==aposta[j]){
                a++;
                break;
            }
        }
    }
    printf("%d acertos!", a);


    return 0;
}
