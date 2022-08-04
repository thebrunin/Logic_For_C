#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 3\n\n");
    int A[]={1,2,3,4,5,6,7,8}, B[8];
    for(int i=0;i<8;i++){
        B[i]=A[i]*2;
        printf("[%d] ", B[i]);
    }
}
