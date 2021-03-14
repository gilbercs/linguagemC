#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int conta(int);
int saldo(char nome[], int age, int con, float sal);
int main(){
    int op;
    do{
    printf("(1) - abrir conta\n");
    printf("(2) - Saldo\n");
    printf("(5) - sair\n");
    scanf("%d",&op);
    conta(op);
    }while(op!=5);
    system("pause");
}
int conta(int op){
    int i, age, con;
    char nome[10];
    float sal;
    printf("nome: ");
    fflush(stdin);
    gets(nome);
    printf("Agencia: ");
    scanf("%d",&age);
    printf("Conta: ");
    scanf("%d",&con);
     printf("Saldo: ");
    scanf("%f",&sal);
    saldo(nome, age, con, sal);
}
int saldo(char nome[], int age, int con, float sal){
    printf("Saldo Atual:\n\n");
    printf("Nome   : %s\n",nome);
    printf("Agencia: %d\n",age);
    printf("Conta  : %d\n",con);
    printf("Saldo  : %f\n",sal);
}
