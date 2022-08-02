#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*20. Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informação da espécie do animal (se é gato ou
cachorro). Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que
são cachorros existentes na loja*/

int main()
{
    printf("Exercicio 20\n\n");
    int num_animais, cat=0, dog=0;
    printf("Insira a quantidade de animais da loja:");
    scanf("%d", &num_animais);
    char especie[4];
    for(int i=0;i<num_animais;i++){
        printf("\nThe %d is a cat or dog:", i+1);
        scanf("%s", especie);
        if(strcmp(especie, "cat")==0){
            cat++;
        }else dog++;
    }
        printf("\n%d cat and %d dog", cat, dog);
    return 0;
}
