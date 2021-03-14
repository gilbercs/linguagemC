#include<stdio.h>
#include<stdlib.h>
int main(){
    /*Exercicio 3*/
    //1)Faça um algoritmo que leia quatro numeros inteiros e mostre a soma deles.
    int n1,n2,n3,n4,total;
    printf("\tInforme o primeiro valor:\n");
    printf("\t");
    scanf("%d",&n1);
    printf("\tInforme o segundo valor:\n");
    printf("\t");
    scanf("%d",&n2);
    printf("\tInforme o terceiro valor:\n");
    printf("\t");
    scanf("%d",&n3);
    printf("\tInforme o quarto valor:\n");
    printf("\t");
    scanf("%d",&n4);
    system("cls");
    total=(n1+n2+n3+n4);
    printf("\n\n");
    printf("\tA soma dos valores e: %d\n\n",total);
    printf("\n\n");

system("pause");}
