#include <stdio.h>//Trabalha com entrada e saida de dados, printf e scanf
#include <stdlib.h>//Trabalha com o alocação de memoria e outras funções c/ varias funcionalidade
#include <string.h>//Trabalha com manipulação de string
#include <conio.h>//Trabalha com algumas funções como getche, getch
#include <locale.h>//Trabalha com acentuação
typedef struct acesso{
    char admin[25], senha[16];
}acesso;
typedef struct dados_funcionario{
    char nome[30], cpf[12], rg[15], cep[15], rua[25], bairro[25], email[25], sexo[12];
    int dia, mes, ano, celular, matricula;
    acesso login;
}dados_funcionario;
typedef struct dados_produto{
    char descricao[50];
    int qtd, estoque, codigo, dia, mes, ano;
    float vista, prazo, totalvista, totalprazo, receber,pagar, troco;
}dados_produto;
void logar();
void administrator();
void cadastro_funcionario();
void menu_buscar_funcionario();
void buscar_nome_funcionario();
void buscar_matricula_funcionario();
void cadastro_produto();
void menu_vendedor();
void vender_produto();
void codigo_produto();
dados_funcionario dados[100];
dados_produto produto[100];
int main(){
    setlocale(LC_ALL,"portuguese");
    logar();
}
void logar(){
    char user[25], pass[16];
    int i=0;
    do{
    i++;
    printf("\n\n\t\t\t\tAcesso Restrito!!\n\n");
    printf("\t\t\t\tUsuario : ");fflush(stdin);gets(user);
    printf("\t\t\t\tSenha   : ");fflush(stdin);gets(pass);
    if(!strcmp(user,"super") && !strcmp(pass,"abc123")){
    system("cls"); printf("\n\n\t\t\t\tLogado com Sucesso..."); getch();
    administrator();
    }else
    if(!strcmp(user,dados[i].login.admin) && !strcmp(pass,dados[i].login.senha)){
        system("cls"); printf("\n\n\t\tLogado com sucesso..."); getch();
        menu_vendedor();
    }
    else{printf("\t\t\t\tTente Novamente...");}}while(pass!=0);
}
void administrator(){
    int menu;
    do{
    system("cls");
    printf("\n\n\n\n\t\t\t\t MENU ADMINISTRATOR\n");
    printf("\t\t\t\t(0) - Sair\n");
    printf("\t\t\t\t(1) - Cadastrar Funcionário\n");
    printf("\t\t\t\t(2) - Cadastrar Produto\n");
    printf("\t\t\t\t(3) - Buscar Funcionário\n");
    printf("\t\t\t\t"); scanf("%d",&menu); system("cls");
    switch(menu){
        case 0: logar(); break;
        case 1: cadastro_funcionario(); break;
        case 2: cadastro_produto(); break;
        case 3: menu_buscar_funcionario(); break;
        default: system("cls"); printf("\n\n\n\n\t\t\t\tOpção Invalida...");
    } getch();
    }while(menu!=0);
}
void cadastro_funcionario(){
    char resposta;
    int i=0;
    do{
        system("cls");
        i++;
    printf("\n\n\n\n\t\t\t\tBem Vindo ao Cadastro Funcionario\n\n\n\n");
    printf("\t\t\t\tInforme Pessoais\n"); 
    printf("\t\t\t\tNome : "); fflush(stdin); gets(dados[i].nome);
    printf("\t\t\t\tData/Nascimento  \n"); 
    printf("\t\t\t\t\tDia : "); fflush(stdin); scanf("%d",&dados[i].dia);
    printf("\t\t\t\t\tMês : "); fflush(stdin); scanf("%d",&dados[i].mes);
    printf("\t\t\t\t\tAno : "); fflush(stdin); scanf("%d",&dados[i].ano);               
    printf("\t\t\t\tSexo : "); fflush(stdin); gets(dados[i].sexo); printf("\n\t\t\t\tGravar e continuar..."); getch(); system("cls");
    printf("\n\n\n\n\t\t\t\tDocumentos pessoais\n");
    printf("\t\t\t\tC.P.F : "); fflush(stdin); gets(dados[i].cpf);
    printf("\t\t\t\tR.G : "); fflush(stdin); gets(dados[i].rg); printf("\n\t\t\t\tGravar e continuar..."); getch(); system("cls");
    printf("\n\n\n\n\t\t\t\tEndereço\n");
    printf("\t\t\t\tRua : "); fflush(stdin); gets(dados[i].rua);
    printf("\t\t\t\tBairro: "); fflush(stdin); gets(dados[i].bairro);
    printf("\t\t\t\tCep: "); fflush(stdin); gets(dados[i].cep); printf("\n\t\t\t\tGravar e continuar..."); getch(); system("cls");
    printf("\n\n\n\n\t\t\t\tContato \n");
    printf("\t\t\t\tEmail : "); fflush(stdin); gets(dados[i].email);
    printf("\t\t\t\tCelular: "); scanf("%d",&dados[i].celular); printf("\n\t\t\t\tGravar e continuar..."); getch(); system("cls");
    printf("\n\n\n\n\t\t\t\tCadastro de Acesso\n");
    printf("\t\t\t\tlogin de Acesso: "); fflush(stdin); gets(dados[i].login.admin);
    printf("\t\t\t\tSenha de Acesso: "); fflush(stdin); gets(dados[i].login.senha);
    printf("\t\t\t\tNumero de Matricula : "); scanf("%d",&dados[i].matricula);
    printf("\t\t\t\tNovo cadastro\n");
    printf("\t\t\t\t(S) - Sim\n");
    printf("\t\t\t\t(N) - Não\n\t\t\t\t");
    resposta=getch();
}while(resposta!='n');
}
void menu_buscar_funcionario(){
    int menu;
    do{
        system("cls");
        printf("\n\n\n\n\t\t\t\t(0) - Sair\n");
        printf("\t\t\t\t(1) - Buscar Por Nome\n");
        printf("\t\t\t\t(2) - Buscar por Matricula\n");
        fflush(stdin); printf("\t\t\t\t");
        scanf("%d",&menu); system("cls");
        switch(menu){
            case 0: logar(); break;
            case 1: buscar_nome_funcionario(); break;
            case 2: buscar_matricula_funcionario(); break;
            default: system("cls"); printf("\n\n\n\n\t\t\t\tOpção invalida..."); getch();
        }
    }while(menu!=0);
}
void buscar_nome_funcionario(){
    char buscarnome[25], sair;
    int i=0;
    do{
        system("cls"); i++;
        printf("\n\n\n\n\t\t\t\tInfome Nome:  ");
        fflush(stdin); gets(buscarnome); system("cls");
        if(!strcmp(buscarnome,dados[i].nome)){
    printf("\n\t\t\t\tInforme Pessoais\n"); 
    printf("\t\t\t\tNome : %s\n",dados[i].nome);
    printf("\t\t\t\tData/Nascimento : %d / %d / %d\n",dados[i].dia,dados[i].mes,dados[i].ano);               
    printf("\t\t\t\tSexo : %s\n",dados[i].sexo);
    printf("\t\t\t\t----------------------------\n");
    printf("\t\t\t\tDocumentos pessoais\n");
    printf("\t\t\t\tC.P.F : %s\n",dados[i].cpf);
    printf("\t\t\t\tR.G : %s\n",dados[i].rg);
    printf("\t\t\t\t-----------------------------\n");
    printf("\t\t\t\tEndereço\n");
    printf("\t\t\t\tRua : %s\n",dados[i].rua);
    printf("\t\t\t\tBairro: %s\n",dados[i].bairro);
    printf("\t\t\t\tCep: %s\n",dados[i].cep);
    printf("\t\t\t\t----------------------------\n");
    printf("\t\t\t\tContato \n");
    printf("\t\t\t\tEmail : %s\n",dados[i].email);
    printf("\t\t\t\tCelular: %d\n",dados[i].celular);
    printf("\t\t\t\t-----------------------------\n");
    printf("\t\t\t\tCadastro de Acesso\n");
    printf("\t\t\t\tlogin de Acesso: %s\n",dados[i].login.admin);
    printf("\t\t\t\tSenha de Acesso: %s\n",dados[i].login.senha);
    printf("\t\t\t\tNumero de Matricula : %d\n",dados[i].matricula);
        }
        else{printf("\n\n\n\n\t\t\t\tNome não encontrado...");}
        printf("\n\n\n\n\t\t\t\tDeseja pesquisar outro nome (S /N)\n\t\t\t\t");
        sair=getch();
    }while(sair=='s');
}
void buscar_matricula_funcionario(){
    int buscarmatricula, i=0;
    char sair;
    do{
        system("cls"); i++;
        printf("\n\n\n\n\t\t\t\tInfome Matricula do Funcionario:  ");
        fflush(stdin); scanf("%d",&buscarmatricula); system("cls");
        if(buscarmatricula==dados[i].matricula){
    printf("\n\t\t\t\tInforme Pessoais\n"); 
    printf("\t\t\t\tNome : %s\n",dados[i].nome);
    printf("\t\t\t\tData/Nascimento : %d / %d / %d\n",dados[i].dia,dados[i].mes,dados[i].ano);               
    printf("\t\t\t\tSexo : %s\n",dados[i].sexo);
    printf("\t\t\t\t----------------------------\n");
    printf("\t\t\t\tDocumentos pessoais\n");
    printf("\t\t\t\tC.P.F : %s\n",dados[i].cpf);
   printf("\t\t\t\tR.G : %s\n",dados[i].rg);
   printf("\t\t\t\t-----------------------------\n");
    printf("\t\t\t\tEndereço\n");
    printf("\t\t\t\tRua : %s\n",dados[i].rua);
    printf("\t\t\t\tBairro: %s\n",dados[i].bairro);
    printf("\t\t\t\tCep: %s\n",dados[i].cep);
    printf("\t\t\t\t----------------------------\n");
    printf("\t\t\t\tContato \n");
    printf("\t\t\t\tEmail : %s\n",dados[i].email);
    printf("\t\t\t\tCelular: %d\n",dados[i].celular);
    printf("\t\t\t\t-----------------------------\n");
    printf("\t\t\t\tCadastro de Acesso\n");
    printf("\t\t\t\tlogin de Acesso: %s\n",dados[i].login.admin);
    printf("\t\t\t\tSenha de Acesso: %s\n",dados[i].login.senha);
    printf("\t\t\t\tNumero de Matricula : %d\n",dados[i].matricula);
        }
        else{printf("\n\n\n\n\t\t\t\tNome não encontrado...");}
        printf("\n\n\n\n\t\t\t\tDeseja pesquisar outra Matricula (S /N)\n\t\t\t\t");
        sair=getch();
    }while(sair=='s');
}
void cadastro_produto(){
    char sair;
    int i=0;
    do{
    i++; system("cls");
    printf("\t\t\t\tCadastro de Produto\n");
    printf("\t\t\t\tData do Cadastro: \n"); 
    printf("\t\t\t\tDia: "); scanf("%d",&produto[i].dia);
    printf("\t\t\t\tMês: "); scanf("%d",&produto[i].mes);
    printf("\t\t\t\tAno: "); scanf("%d",&produto[i].ano);
    printf("\t\t\t\tCodigo do Produto 0%d: ",i); fflush(stdin); scanf("%d",&produto[i].codigo);
    printf("\t\t\t\tDescrição do Produto: "); fflush(stdin); gets(produto[i].descricao);
    printf("\t\t\t\tPreço Unitário a Vista: R$ "); fflush(stdin); scanf("%f",&produto[i].vista);
    printf("\t\t\t\tPreço Unitário a Prazo: R$ "); fflush(stdin); scanf("%f",&produto[i].prazo);
    printf("\t\t\t\tQuantidade do Produto: "); scanf("%d",&produto[i].qtd);
    produto[i].totalvista= produto[i].vista * produto[i].qtd;
    produto[i].totalprazo= produto[i].prazo * produto[i].qtd;
    printf("\t\t\t\tTotal a Vista :R$ %00.f,00\n",produto[i].totalvista);
    printf("\t\t\t\tTotal a Prazo :R$ %00.f,00\n",produto[i].totalprazo);
    printf("\n\n\n\n\t\t\t\tNovo Cadastro (S / N)\n");
    printf("\t\t\t\t..."); sair=getch();
}while(sair=='s');
}
void menu_vendedor(){
    int menu;
    do{
        system("cls");
        printf("\n\n\n\n\t\t\t\t Menu Vendedor\n\n");
        printf("\t\t\t\t(0) - Sair\n");
        printf("\t\t\t\t(1) - Vender Produto\n");
        printf("\t\t\t\t(2) - Entradas de Produtos\n");
        printf("\t\t\t\t(3) - Saidas de Produtos\n");
        printf("\t\t\t\t(4) - Estoque Atual\n");
        printf("\t\t\t\t(5) - Faturamento mensal\n");
        printf("\t\t\t\t");
        fflush(stdin);
        scanf("%d",&menu);
        switch(menu){
            case 0: logar(); break;
            case 1: vender_produto(); break;
            default:
                system("cls");
                printf("\t\t\t\tOpção Invalida..."); getch();
        }
    }while(menu!=0);
}
void vender_produto(){
    char sair; int menu;
    do{ system("cls");
    printf("\t\t\t\t(0) - Sair\n");
    printf("\t\t\t\t(1) - Vender por Codigo do Produto\n");
    printf("\t\t\t\t(2) - Vender por Nome do produto\n");
    printf("\t\t\t\t");
    fflush(stdin);
    scanf("%d",&menu);
    switch(menu){
        case 0: menu_vendedor(); break;
        case 1: codigo_produto(); break;
    default:
        system("cls");
        printf("\t\t\t\tOpção Invalida..."); getch();
    }
    }while(sair=='s');
}
void codigo_produto(){
    int buscarcodigo, i=0, pedido;
    char novo;
    do{
        system("cls");
        i++;
        printf("\n\nInforme o codigo do Produto: ");
        fflush(stdin);
        scanf("%d",&buscarcodigo);
        if(buscarcodigo==produto[i].codigo){ system("cls");
        printf("\t\t\t\tDetalhes do Produto: %s\n",produto[i].descricao);
            printf("\t\t\t\tTotal em Estoque: %d\n",produto[i].qtd);
            printf("\t\t\t\tPreço Unitario a Vista: R$ %.00f,00\n",produto[i].vista);
            printf("Qtde do pedido: "); scanf("%d",&pedido);
            if(pedido<=produto[i].qtd){
                produto[i].qtd= produto[i].qtd - pedido;
                produto[i].receber= produto[i].vista * pedido;
                printf("\t\t\t\tValor a pagar: %f\n",produto[i].receber);
                printf("\t\t\t\tInforme o Valor Recebido: "); scanf("%f",&produto[i].pagar);
            }else
            {printf("\t\t\t\tPedido maior que no estoque...");}
        }else
        {printf("Produto não encontrado no estoque..."); getch();}
        printf("Nova buscar (S / N)"); novo=getch();
    }while(novo=='s');
}
