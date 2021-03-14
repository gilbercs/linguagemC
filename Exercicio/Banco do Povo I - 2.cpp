#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
typedef struct Endereco{//Registro para armazenar dados de Endereço
char rua[20], bairro[12],complemento[40];
int numero,cep;	
}Endereco;
typedef struct CadastroCliente{ //Registro Cadastro de Cliente
int rg,cpf,tel;
char nome[30],nascimento[10],estadocivil[10],endereco[40];
Endereco end;
}CadastroCliente;
typedef struct gerente{
char loging[5] ;      
char senhag[5];       
}gerente;
void menuprincipal();
int main(){
    setlocale(LC_ALL,"portuguese");
    menuprincipal();
    
return 0;
}
void menuprincipal(){
    int op;
    do{
system("cls");
system("color 1f");
printf("\n\n\n\n");
printf("\t\t\t\t+-----------------------------------------+\n");
printf("\t\t\t\t|           SESSÃO DE LOGIN               |\n");
printf("\t\t\t\t+-----------------------------------------+\n");
printf("\t\t\t\t|          1 - ACESSAR CONTA              |\n");
printf("\t\t\t\t|          2 - OPERACÃO SEM CARTÃO        |\n");
printf("\t\t\t\t|          0 - SAIR DO SISTEMA            |\n");
printf("\t\t\t\t+-----------------------------------------+\n");
printf("\t\t\t\t");
scanf("%i",&op);
system("cls");
switch(op){
    case 0:
        exit(0);
        break;
    case 1:
        break;
        default:
            system("cls");
            printf("\n\n\n\n\t\t\t\tOpção Invalida...");
            getch();
}
    }while(op!=0);
}

