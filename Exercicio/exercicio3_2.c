#include<stdio.h>
#include<stdlib.h>
int main(){
    //2) Faça um algoritmo que receba dois numeros reais,
    //calcule e mostre a subtração do primeiro pelo segundo.
    float num1,num2,resultado;
    printf("\tInforme o valor do primeiro numero:\n");
    printf("\t\32\t");
    scanf("%f",&num1);
    printf("\tInforme o valor do segundo numero:\n");
    printf("\t\32\t");
    scanf("%f",&num2);
    resultado=num1-num2;
    system("cls");
    printf("\n");
    printf("\t\32");
    printf("\tA subtracao e ; %0.f\n\n",resultado);
    printf("\n\n");

system("pause");
}

