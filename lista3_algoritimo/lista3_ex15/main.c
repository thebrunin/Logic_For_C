#include <stdio.h>
#include <stdlib.h>

/*15. Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado
pelo usuário*/

int main()
{
    printf("Exercicio 15\n\n");
    int num, fatorial=1;
    printf("Insira o numero cujo deseja o fatorial:");
    scanf("%d", &num);
    for(num;num>0;num--){
        fatorial=fatorial*num;
    }
    printf("n!=n(-1n)\nResultado: %d", fatorial);
    return 0;
}
