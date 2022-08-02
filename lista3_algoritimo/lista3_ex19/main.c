#include <stdio.h>
#include <stdlib.h>

/*19. Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar :
a. A menor altura do grupo;
b. A maior altura do grupo;*/

void lerAltura(float vet[], int tam);
float menorAltura(float vet[], int tam);
float maiorAltura(float vet[], int tam);

int main()
{
    float altura[15], menor, maior;
    printf("Exercicio 19\n\n");
    lerAltura(altura, 15);
    /*for(int i=0;i<3;i++){
        printf("\nAltura %d: %.2f", i+1, altura[i]);
    }*/
    printf("\nMenor altura: %.2f", menorAltura(altura, 15));
    printf("\nMaior altura: %.2f", maiorAltura(altura, 15));
    return 0;
}
void lerAltura(float vet[], int tam)
{
    for(int i=0;i<tam;i++){
        printf("Insira a %d altura:", i+1);
        scanf("%f", &vet[i]);
    }
}
float menorAltura(float vet[], int tam)
{
    int i=0;
    float menor=vet[i];
    for(i;i<tam;i++){
        if(menor>vet[i]){
            menor=vet[i];
        }
    }
    return menor;
}
float maiorAltura(float vet[], int tam)
{
    int i=0;
    float maior=vet[i];
    for(i;i<tam;i++){
        if(maior<vet[i]){
            maior=vet[i];
        }
    }
    return maior;
}
