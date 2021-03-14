#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct ficha{
    char nome[15], sexo[2], dn[9], queixa[100], cpf[11];
    char end[10], bairro[20];
    int num, cep, rg;
};
int main(){
    struct ficha sus;
    int menu,op;
    char cpf[11];
    do{
    system("cls");
    printf("\n");
    printf("\t**** Cadastro SUS **** \n");
    printf("\t(0) - Sair\n");
    printf("\t(1) - Pre cadastro\n");
    printf("\t(2) - Pesquisa CPF\n");
    fflush(stdin);
    printf("\t");
    scanf("%d",&menu);
    system("cls");
    switch(menu){
    case 1:
        system("cls");
        printf("\n");
    printf("1 - Dados do Paciente\n");
    printf("Nome Completo : ");
    fflush(stdin);
    gets(sus.nome);
    printf("CPF           :* ");
    fflush(stdin);
    gets(sus.cpf);
    printf("RG            :* ");
    scanf("%d",&sus.rg);
    printf("Sexo (F / M)  :* ");
    fflush(stdin);
    gets(sus.sexo);
    printf("Data de Nasc  :* ");
    fflush(stdin);
    gets(sus.dn);
    printf("Endereco      :* ");
    fflush(stdin);
    gets(sus.end);
    printf("Numero        :* ");
    scanf("%d",&sus.num);
    printf("Bairro        :* ");
    fflush(stdin);
    gets(sus.bairro);
    printf("Cep           :* ");
    scanf("%d",&sus.cep);
    printf("Queixa principal:* ");
    fflush(stdin);
    gets(sus.queixa);
    break;
    case 2:
            do{
        printf("\n");
        printf("\t**** Pesquisa CPF **** \n");
        printf("\t(1) - Informe o CPF:\n");
        printf("\t(0) - Sair.\n");
        fflush(stdin);
        printf("\t");
        scanf("%d",&op);
        system("cls");
               switch(op){
            case 1:
                system("cls");
                printf("\tInforme o CPF: ");
                fflush(stdin);
                gets(cpf);
                if(strcmp(cpf,sus.cpf)==0){//errrooooo observação ultrapassou valor de int comporta apenas 10 caracte
                printf("\tDados do Paciente:\n\n");
                    printf("\tNome : %s \n",sus.nome);
                    printf("\tCPF  : %s \n",sus.cpf);
                    printf("\tRG   : %d \n",sus.rg);
                    printf("\tD/N  : %s \n",sus.dn);
                }else{
                printf("\tCPF nao encontrado\n");
                }
            break;
            case 0:
                break;
            default:
            printf("\tOpcao invalida\n");       
        }
system("pause");
    }while(op!=0);
        break;
    case 0:
        system("cls");
        printf("\n\n\n");
        printf("\t\t\t\tSaindo do sistema...");
        getch();
        exit(0);
        break;
    default:
        printf("Opcao invalida\n");
    }
}while(menu!=0);
system("pause");
}
