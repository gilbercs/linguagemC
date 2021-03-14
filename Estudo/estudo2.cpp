#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int admin();
int conta(int);
int main(){
    admin();
    system("pause");
}
int admin(){
    int i=1,a;
    char admin[2][25]={"super","admin"}, senha[2][25]={"abc123","12345"};
    printf("****Usuario****\n\n");
    for(i=0;i<=2;i++){
        printf("LOGIN : ");
        fflush(stdin);
        gets(admin[i]);
        printf("SENHA : ");
        fflush(stdin);
        gets(senha[i]);
        if(!strcmp(admin[i],"super") && !strcmp(senha[i],"abc123")){
            a=0;
            break;
        }else
        if(!strcmp(admin[i],"admin") && !strcmp(senha[i],"12345")){
            a=1;
            break;
        }else
        printf("Tente de novo\n");
    }
}
int conta(){
    do{
        printf("(1) - Cadastro");
        printf("(2) - pesquisa nome\n");
        printf("(0) - sair\n");
        scanf("%d",&op);
    }while(op!=0);
        system("system");
}
