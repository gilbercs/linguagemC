#include<stdio.h>
#include<stdlib.h>
int main (){
    //6)Faça um algoritmo que leia três nomes e mostre-os
    //na ordem inversa de leitura.
    char n1[25],n2[25],n3[25];
    printf("\n\tInforme o primeiro nome:\n\n\t");
    gets(n1);
    printf("\n\tInforme o segundo nome:\n\n\t");
    gets(n2);
    printf("\n\tInforme o terceiro nome:\n\n\t");
    gets(n3);
    system("cls");
    printf("\n\t 1- %s\n\t 2- %s\n\t 3- %s",n3,n2,n1);
    printf("\n\n");
system("pause");
}
