#include <stdio.h>
#include <stdlib.h>

/*22. Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quil�metro 0 at�
ultrapassar o quil�metro 4000, parando em v�rias cidades durante o
percurso. Crie um algoritmo que, em cada cidade que o viajante parar, leia a
informa��o da quilometragem percorrida e adicione ao valor da quilometragem total.
Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
ultrapassar os 4000 km*/

int main()
{
    printf("Exercicio 22\n\n");
    int cidade=0;
    float km, kmTotal;
    for(int i=0;i<4000;i=i+km){
        printf("Quantos km ate a %d cidade:", cidade+1);
        scanf("%f", &km);
        cidade++;
        kmTotal = kmTotal+km;
    }
    printf("%.2f km em um total de %d cidades.", kmTotal, cidade);

}
