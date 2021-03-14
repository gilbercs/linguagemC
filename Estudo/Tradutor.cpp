#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
char tradutor();
main(){
    int op;
    do{
        system("cls");
    setlocale(LC_ALL,"portuguese");
    printf("\n\n");
    printf("\t\t\t\t(1) - Tradutor\n");
    printf("\t\t\t\t(0) - sair\n");
    printf("\t\t\t\t");
    scanf("%d",&op);
    system("cls");
    switch(op){
    case 1:
        tradutor();
        break;
        default:
            printf("\t\t\t\tOpção Invalida\n");
    }
}while(op!=0);
    system("pause");
}
char tradutor(){
    char nome[20];
    char palavra[6]="wakak";
    int op, resp,i;
    do{
    system("cls");
    printf("\n\n");
    printf("\t\t\t\t(1) - Portuques para o katukina\n");
    printf("\t\t\t\t(2) - Katukina para o Portugues\n");
    printf("\t\t\t\t(0) - sair\n");
    printf("\t\t\t\t");
    fflush(stdin);
    scanf("%d",&op);
    system("cls");
    switch(op){
        case 1:
            printf("\n\n");
    printf("\t\t\t\tPortuquês para o Katukina\n");
    printf("\t\t\t\tInforme a palavra\n");
    printf("\t\t\t\t");
    fflush(stdin);
    gets(nome);
    if(!strcmp(nome,"abacaxi")|| !strcmp(nome,"ABACAXI")){
        system("cls");
        printf("\n\n\t\t\t\t");
        printf("%s => %s\n\n",nome,palavra);
    }else
    {printf("Palavra ainda não cadastrada\n\n");}
    break;
}
printf("\t\t\t\tVOLTAR...");
getch();
}while(op!=0);
}

