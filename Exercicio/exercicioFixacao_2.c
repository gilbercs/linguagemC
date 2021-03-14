#include <stdio.h>
#include <stdlib.h>
int main (){
    float n1,n2,media;
    //1) Criar um algoritmo que leia duas notas e gere a média artmetica.
    //Ao final especifique a situação dos alunos.(média=6,0)
    printf("\n\tInforme o valor da primeira nota:\n\t");
    scanf("%f",&n1);
    printf("\n\tInforme o valor da segunda nota:\n\t");
    scanf("%f",&n2);
    system("cls");
    media=(n1 + n2)/2;
    printf("\n\tSua media e: %2.f\n\t",media);
    if(media>=6)
    {
    printf("\n\tAprovado.\n");
    }
    else
    {
    printf("\n\tReprovado.\n");}
    printf("\n\n");

system("pause");
}
