#include <stdio.h>
#include <stdlib.h>
int main(){
    //Faça um programa que receba três notas de um aluno,
    //Calcule e escreva a média aritmética entre essas notas.
    float nota1,nota2,nota3,media;
    printf("\t-\32\tInforme o valor da primeira nota:\n");
    printf("\t\t");
    scanf("%f",&nota1);
    printf("\t-\32\tInforme o valor da segunda nota:\n");
    printf("\t\t");
    scanf("%f",&nota2);
    printf("\t-\32\tInforme o valor da terceira nota:\n");
    printf("\t\t");
    scanf("%f",&nota3);
    media=(nota1+nota2+nota3)/3;
    system("cls");
    printf("\n");
    printf("\t-\32\tA media aritmetica e: %1.f\n",media);
    printf("\n\n");
system("pause");}
