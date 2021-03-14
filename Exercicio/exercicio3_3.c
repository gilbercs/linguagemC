#include<stdio.h>
#include<stdlib.h>
int main (){
    //3) Faça um programa que receba dois numeros inteiros,
    //Calcule e imprima a mutiplicação dos dois números.
    int num1,num2,resultado;
    printf("\n");
    printf("\t\32\tInforme o valor do primeiro numero:\n");
    printf("\t");
    scanf("%d",&num1);
    printf("\t\32\tInforme o valor do segundo numero:\n");
    printf("\t");
    scanf("%d", &num2);
    resultado=num1*num2;
    system("cls");
    printf("\n\n");
    printf("\tO resultado da multiplicacao dos dois numeros e \32 %d\n",resultado);
    printf("\n\n");
system("pause");}
