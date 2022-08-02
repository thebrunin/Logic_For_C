#include <stdio.h>
#include <stdlib.h>

/*23. Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. Para cada
casa visitada, foi preenchida uma ficha contendo o número do canal (3, 5, 8, 11 ou 13) e o número
de pessoas que estavam assistindo o canal naquela casa. Faça um algoritmo que:
a. Leia a informação da quantidade de casas participantes da pesquisa.
b. Receba as informações coletadas em cada uma das casas participantes da
c. pesquisa: a informação do canal que estava sendo assistido e a quantidade de
d. pessoas que estava assistindo aquele canal na casa.
e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
f. quantidade de pessoas que assistia cada canal em cada casa)
g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua
h. respectiva porcentagem de audiência*/

int main()
{
    printf("Exercicio 23\n\n");
    int casasParticipantes,canalAssistido, canal3=0, canal5=0, canal8=0, canal11=0, canal13=0;
    int assistindo=0, pessoas3=0, pessoas5=0, pessoas8=0, pessoas11=0, pessoas13=0, totalPessoas=0;
    printf("Insira a quantidade de participantes:");
    scanf("%d", &casasParticipantes);
    for(int i=0;i<casasParticipantes;i++){

        printf("\nQual o canal que esta sendo assistido na %d casa:", i+1);
        scanf("%d", &canalAssistido);

        switch(canalAssistido){

            case 3:
                canal3++;
                printf("\nQuantas pessoas estao assistindo:");
                scanf("%d", &assistindo);
                pessoas3=pessoas3+assistindo;
                break;

            case 5:
                canal5++;
                printf("\nQuantas pessoas estao assistindo:");
                scanf("%d", &assistindo);
                pessoas5=pessoas5+assistindo;
                break;

            case 8:
                canal8++;
                printf("\nQuantas pessoas estao assistindo:");
                scanf("%d", &assistindo);
                pessoas8=pessoas8+assistindo;
                break;

            case 11:
                canal11++;
                printf("\nQuantas pessoas estao assistindo:");
                scanf("%d", &assistindo);
                pessoas11=pessoas11+assistindo;
                break;

            case 13:
                canal13++;
                printf("\nQuantas pessoas estao assistindo:");
                scanf("%d", &assistindo);
                pessoas13=pessoas13+assistindo;
                break;

            default:
                printf("\nCanal invalido, reinicie a operacao!");

        }

    }

    totalPessoas= pessoas3+pessoas5+pessoas8+pessoas11+pessoas13;
    printf("\n%d%% da audiencia assiste o canal 3, assistido em %d casas.\n", ((pessoas3*100)/totalPessoas), canal3);
    printf("\n%d%% da audiencia assiste o canal 5, assistido em %d casas.\n", ((pessoas5*100)/totalPessoas), canal5);
    printf("\n%d%% da audiencia assiste o canal 8, assistido em %d casas.\n", ((pessoas8*100)/totalPessoas), canal8);
    printf("\n%d%% da audiencia assiste o canal 11, assistido em %d casas.\n", ((pessoas11*100)/totalPessoas), canal11);
    printf("\n%d%% da audiencia assiste o canal 13, assistido em %d casas.\n", ((pessoas13*100)/totalPessoas), canal13);
    return 0;
}
