#include<stdio.h>
#include<stdlib.h>
int main (){
    char nome1[20],nome2[20],nome3[20];
    printf("\n");
    printf("\tInforme o primerio nome:\n\n");
    printf("\t");
    gets(nome1);
    printf("\n\tInforme o segundo nome:\n\n");
    printf("\t");
    gets(nome2);
    printf("\n\tInforme o terceiro nome:\n\n");
    printf("\t");
    gets(nome3);
    system("cls");
    printf("\n");
    printf("\tOs nomes informados foram:\n\n");
    printf("\t%s %s %s",nome1,nome2,nome3);
    printf("\n\n");
system("pause");
}
