#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Exercicio 14\n\n");
    char answer[50];

    printf("Answer yes or no\n");

    for(int i=0;i>=0;i++){
        printf("Hi, are you okay:");
        scanf("%s", answer);
        if(answer[0]=='y'){
            i=-2;
        }
    }
}
