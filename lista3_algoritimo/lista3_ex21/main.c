#include <stdio.h>
#include <stdlib.h>

/*21. O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
em cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução
quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não
fumantes)*/

int main()
{
    printf("Exercicio 21!\n\n");
    int nfuma=25, fuma=50;
    char reservar[4], mesa[4];
    for(int i=0; (nfuma>0||fuma>0); i++){
        printf("Mesas disponiveis\nArea de fumantes: %d\nArea comum: %d\n", fuma-25, nfuma);
        printf("Gostaria de reservar uma mesa:(sim/nao)");
        scanf("%s", reservar);
        if(strcmp(reservar, "sim")==0){
            printf("Mesa para fumante:(sim/nao)");
            scanf("%s", mesa);
            if((strcmp(mesa, "sim")==0)&& fuma>25){
                printf("Reservado! Sua mesa eh a %d, aguardamos sua visita!\n", fuma);
                fuma=fuma-1;
                system("pause");
                system("cls");
            }else if((strcmp(mesa, "sim")==0)&& fuma<=25){
                printf("\nLamento, nao temos mesas disponiveis na area de fumantes...\n");
                printf("Gostaria de reservar uma mesa na area comum:(sim/nao)");
                scanf("%s", mesa);
                if((strcmp(mesa, "sim")==0)&& nfuma>0){
                    printf("Reservado! Sua mesa eh a %d, aguardamos sua visita!\n", nfuma);
                    nfuma=nfuma-1;
                    system("pause");
                    system("cls");
                }else if((strcmp(mesa, "sim")==0)&& nfuma<=0){
                    printf("\nLamento, nao temos nenhuma mesa disponivel\n");
                    system("pause");
                    system("cls");
            }
            }else if((strcmp(mesa, "nao")==0)&& nfuma>0){
                printf("Reservado! Sua mesa eh a %d, aguardamos sua visita!\n", nfuma);
                nfuma=nfuma-1;
                system("pause");
                system("cls");
            }else if((strcmp(mesa, "nao")==0)&& nfuma<=0){
                printf("\nLamento, nao temos mesas disponiveis na area comum...\n");
                printf("Gostaria de reservar uma mesa na area de fumantes:(sim/nao)");
                scanf("%s", mesa);
                if((strcmp(mesa, "sim")==0)&& fuma>25){
                    printf("Reservado! Sua mesa eh a %d, aguardamos sua visita!\n", fuma);
                    fuma=fuma-1;
                    system("pause");
                    system("cls");
                }else if((strcmp(mesa, "sim")==0)&& fuma<=25){
                    printf("\nLamento, nao temos nenhuma mesa disponivel\n");
                    system("pause");
                    system("cls");
                }
            }
        }
        if(strcmp(reservar, "nao")==0){
            printf("Agradecemos pelo contato, volte sempre!");
            system("pause");
            system("cls");
        }
    }
}
