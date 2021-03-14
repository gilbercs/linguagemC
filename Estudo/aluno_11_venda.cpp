//Faça umm software p/ venda, cadastre funcionario nome, matricula, produto, descrisão, valor e quantidade
//Só poderá vender os produtos que tiverem no estoque
//Caso contrario apareça a quantidade do produto em estoque. So poderarar Vender se for um funcionario
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
typedef struct acesso{
    char user[25], pass[25];
}acesso;
typedef struct endereco{
    char bairro[25], cep[20], casa[15], rua[25];
    char complemento[25];
}endereco;
typedef struct cadastro_colaborador{
    char nome[30], cpf[12], rg[12];
    int matr;
    endereco local;
    acesso login;
}cadastro_colaborador;
typedef struct produto_estoque{
    char produt[25], descrisao[25];
    float preco;
    int qtd;
}produto_estoque;
cadastro_colaborador dados[10];
void logar();
void administrator();
void cadastro_funcionario();
void cadastro_produto();
void menufuncionario();
int main(){
    setlocale(LC_ALL,"portuguese");
    logar();
}
void logar(){
    char usuario[30], senha[16];
    int x=1, y=3, i;
    do{
        system("cls");
        i++;
        printf("\n\n\n\n\t\t\t\tAcesso Restrito!!\n\n");
        printf("\t\t\t\tUsuario : ");
        fflush(stdin);
        gets(usuario);
        printf("\t\t\t\tSenha : ");
        fflush(stdin);
        gets(senha);
        if(!strcmp(usuario,"admin") && !strcmp(senha,"abc123")){
            x=0;
            administrator();
        }
        else
        {
        y--;//quando y for = 0 bloqueia o sistema
        system("cls");
        if(y){printf("\n\n\n\n\t\t\t\tSenha Invalida...Tente Novamente...");
        getch();
        }
        }
    }while(x && y);
    if(!y){printf("\n\n\n\n\t\t\t\tConta Bloqueada... Você errou 3 vezes...\n\n");
    }
    getchar();
}
void administrator(){
    int menu;
    do{
        system("cls");
        printf("\n\n\n\n\t\t\t\t(1) - Cadastrar Funcionario\n");
        printf("\t\t\t\t(2) - Cadastrar Produtos\n");
        printf("\t\t\t\t(3) - Buscar Funcionario\n");
        printf("\t\t\t\t(4) - Buscar Produto no Estoque\n");
        printf("\t\t\t\t(0) - sair\n\t\t\t\t");
        scanf("%d",&menu);
        switch(menu){
            case 0:
                logar();
                break;
                case 1:
                    cadastro_funcionario();
                    break;
                    case 2:
                        cadastro_produto();
                        break;
                default:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tOpção Invalido..."); getch();
        }
        getch();
    }while(menu!=0);
}
void cadastro_funcionario(){
    int i;
    char x;
    do{
        i++;
    system("cls");
    printf("\t\t\t\tCadastro de Funcionário\n\n");
    printf("\t\t\t\tInforme os dados pessoais: \n\n");
    printf("\t\t\t\tNome Completo: ");
    fflush(stdin);
    gets(dados[i].nome);
    printf("\t\t\t\tC.P.F: "); fflush(stdin);
    gets(dados[i].cpf);
    printf("\t\t\t\tR.G: "); fflush(stdin);
    gets(dados[i].rg);
    printf("\t\t\t\tCadastro de endereço\n\n");
    printf("\t\t\t\tBairro : "); fflush(stdin);
    gets(dados[i].local.bairro);
    printf("\t\t\t\tRua : "); fflush(stdin);
    gets(dados[i].local.rua);
    printf("\t\t\t\tCasa: "); fflush(stdin);
    gets(dados[i].local.casa);
    printf("\t\t\t\tComplemento: "); fflush(stdin);
    gets(dados[i].local.complemento);
    printf("\t\t\t\tCEP : "); fflush(stdin);
    gets(dados[i].local.cep);
    printf("\t\t\t\tCadastro de Acesso\n\n");
    printf("\t\t\t\tMatricula : "); fflush(stdin);
    gets(dados[i].login.user);
    printf("\t\t\t\tSenha : "); fflush(stdin);
    gets(dados[i].login.pass);
    printf("\t\t\t\t");
    printf("\t\t\t\tTem outro Funcionário (S/N)\n");
    x=getche();
}while(x=='s');
}
void cadastro_produto(){
    char opcao;
    int i;
    do{
        i++;
    produto_estoque produto[i];
    printf("\t\t\t\tCadastro de Produto\n\n");
    printf("\t\t\t\tNome do produto : "); fflush(stdin);
    gets(produto[i].produt);
    printf("\t\t\t\tDescrisão do produto: "); fflush(stdin);
    gets(produto[i].descrisao);
    printf("\t\t\t\tTem outro produto\n\n");
    printf("\t\t\t\t");
    opcao=getche();
}while(opcao=='s');
}
void menufuncionario(){
    printf("\t\t\t\tMenu Funcionário\n\n");
}
