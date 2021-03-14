#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void entrar();
int adm();
int gerente();
int main(){
    int op;
    do{
    printf("\n\n\n\n\n");
    printf("\t\t\t\t\tSistema SUS\n\n");
    printf("\t\t\t\t\t(1) - Entrar\n");
    printf("\t\t\t\t\t(2) - Sair\n\n");
    printf("\t\t\t\t\tO que deseja fazer\n");
    printf("\t\t\t\t\t");
    fflush(stdin);
    scanf("%d",&op);
    system("cls");
    switch(op){
        case 1:
            entrar();
            break;
            case 2:
                exit(0);
                    break;
                default:
                    printf("\t\t\t\tOpcao Invalida\n");
    }
}while(op!=0);
return 0;
}
void entrar(){
    int i;
    char admin[3][25], senha[3][16];
    system("cls");
    printf("\n\n\n");
    for(i=0;i<=3;i++){
    printf("\t\t\t***Usuario do SUS!!***\n");
    printf("\t\t\tLogin : ");
    fflush(stdin);
    gets(admin[i]);
    printf("\t\t\tSenha : ");
    fflush(stdin);
    gets(senha[i]);
    if(!strcmp(admin[i],"admin") && !strcmp(senha[i],"abc123")){
        adm();
        break;
    }else
    {printf("Usuario nao encontrado\n");}
}
getchar();
}
int adm(){
    int menu;
    do{
        system("pause");
        printf("Administrator\n");
        printf("(0) - Sair\n");
        printf("(1) - Cadastro\n");
        printf("(2) - Pesquisa\n");
        fflush(stdin);
        scanf("%d",&menu);
        system("cls");
        switch(menu){
            case 0:
                exit(0);
                break;
                case 1:
                    break;
                    case 2:
                        break;
                        case 3:
                            gerente();
                            break;
                        default:
                            printf("Opcao ivalida\n");
        }
    }while(menu!=0);
}
int gerente(){
    printf("Bem Vindo Gerente\n");
    
}
