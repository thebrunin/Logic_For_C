#include <stdio.h>
#include <stdlib.h>

/*18. Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
 para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior
ou igual a 6*/

int main(){
    printf("Exercicio 18\n\n");
    int num_alunos;
    float nota1=0.0, nota2=0.0;
    printf("Insira a quantidade de alunos:");
    scanf("%d", &num_alunos);
    float mediaAluno[num_alunos];
    for(int i=0;i<num_alunos;i++){
        printf("Insira a nota 1 do aluno %d:", i+1);
        scanf("%f", &nota1);
        printf("Insira a nota 2 do aluno %d:", i+1);
        scanf("%f", &nota2);
        mediaAluno[i]=(nota1+nota2)/2;
    }
    for(int j=0;j<num_alunos;j++){
        printf("\nMedia aluno %d: %.2f", j+1, mediaAluno[j]);
        if(mediaAluno[j]>=7.0){
            printf(" Aluno aprovado!");
        }else printf(" Aluno reprovado!");
    }
}
