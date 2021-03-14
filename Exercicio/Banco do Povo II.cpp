#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
typedef struct cadastro_user{
    char user[25], pass[16];
}cadastro_user;
typedef struct endereco{
    char rua[25], bairro[25], cep[15], complemento[25], casa[25];
}endereco;
typedef struct cadastro_conta{
    int agencia, numero;
    float saldo;
}cadastro_conta;
typedef struct cadastro_cliente{
    char nomecliente[30], cpf[12], rg[11];
    endereco local;
    cadastro_conta conta;
    cadastro_user login;
}cadastro_clinte;
//sub rotinas
void menuprincipal();
void colaborador();
void menugerente();
void menucliente();
void cadastrofuncionario();
void cadastrocliente();
void consultar_saldo();
void realizar_saque();
void realizar_deposito();
void desenvolvedor();
//fim dos modulos
cadastro_cliente dados[5];
int main(){//Programa principal

    menuprincipal();
    system("pause");
}//fim do programa principal
void menuprincipal(){
    int opcao;
    do{
        system("cls");
        system("color 1f");
    setlocale(LC_ALL,"portuguese");
    printf("\n\n\n\n");
    printf("\t\t\t\t +-----------------------------------------+\n");
    printf("\t\t\t\t |           SESSÃO DE LOGIN               |\n");
    printf("\t\t\t\t +-----------------------------------------+\n");
    printf("\t\t\t\t |          (1) - ACESSAR CONTA            |\n");
    printf("\t\t\t\t |          (2) - COLOBORADOR              |\n");
    printf("\t\t\t\t |          (3) - DESENVOLVEDOR            |\n");
    printf("\t\t\t\t |          (0) - SAIR DO SISTEMA          |\n");
    printf("\t\t\t\t +-----------------------------------------+\n\n");
    printf("\t\t\t\t O QUE DESEJA FAZER\n");
    printf("\t\t\t\t ");
    scanf("%d",&opcao);
    switch(opcao){
        case 0:
            exit(0);
            break;
            case 1:
                menucliente();
                break;
            case 2:
                colaborador();
                break;
                case 3:
                    desenvolvedor();
                    break;
                default:
                    system("cls");
                    printf("\n\n\n\n");
                    printf("\t\t\t\tOpção Invalida...");
                    getch();
    }
}while(opcao!=0);
}
void menucliente(){
    int num;
    do{
        system("cls");
        system("color 2f");
        printf("\n\n\n\n");
        printf("\t\t\t\t*=================================================================*\n");
        printf("\t\t\t\t|                        BEM VINDO AO BANCO                       |\n");
        printf("\t\t\t\t*=================================================================*\n");
        printf("\t\t\t\t|(1) - Realizar Saque           |   (4) - Consultar Extrato       |\n");
        printf("\t\t\t\t|(2) - Realizar Deposito        |   (5) - Realizar Transferência  |\n");
        printf("\t\t\t\t|(3) - Consultar Saldo          |   (0) - Sair                    |\n");
        printf("\t\t\t\t|                               |                                 |\n");
        printf("\t\t\t\t*=================================================================*\n\n");
        printf("\t\t\t\tO QUE DESEJA FAZER...\n");
        printf("\t\t\t\t");
        fflush(stdin);
        scanf("%d",&num);
        system("cls");
        switch(num){
            case 0:
                menuprincipal();
                break;
            case 1:
                realizar_saque();
                break;
                case 2:
                    realizar_deposito();
            case 3:
                consultar_saldo();
                break;
                default:
                    system("cls");
                    printf("\n\n\n\n");
                    printf("\t\t\t\tOpção Invalida...");
                    getch();
        }
    }while(num!=0);
}
void colaborador(){
    int menu;
    char admin[25], senha[16];
    do{
        system("cls");
        system("color 3f");
        printf("\n\n\n\n");
        printf("\t\t\t\tACESSO RESTRITO!!\n\n");
        printf("\t\t\t\tAdmin : ");
        fflush(stdin);
        gets(admin);
        printf("\t\t\t\tSenha : ");
        fflush(stdin);
        gets(senha);
        if(!strcmp(admin,"admin") && !strcmp(senha,"abc123")){
            system("cls");
            menugerente();
        }
        else
        {
            system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t\tUsuario não encontrado...");
        getch();
        }
    }while(menu!=0);
}
void menugerente(){
    int menu;
    do{
        system("cls");
        system("color 4f");
        printf("\n\n\n\n");
        printf("\t\t\t\tBem - Vindo gerente fulano\n\n\n\n");
        printf("\t\t\t\t(1) - Cadastar Cliente\n");
        printf("\t\t\t\t(2) - Buscar Cliente\n");
        printf("\t\t\t\t(3) - Alterar dados do cliente\n");
        printf("\t\t\t\t(0) - Sair\n");
        printf("\t\t\t\t");
        fflush(stdin);
        scanf("%d",&menu);
        system("cls");
        switch(menu){
            case 0:
                menuprincipal();
                break;
            case 1:
                cadastrocliente();
                break;
            default:
                printf("\n\n\n\n");
                printf("\t\t\t\tOpção Invalida...");
                getch();
        }
    }while(menu!=0);
}
void cadastrocliente(){
    int n, i;
    printf("\t\t\t\tBem vindo ao Cadastro de clinte\n\n\n");
    printf("\t\t\t\tQuantos cliente deseja cadastrar\n");
    printf("\t\t\t\t");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("\t\t\t\tNome Completo do Cliente: ");
    fflush(stdin);
    gets(dados[i].nomecliente);
    printf("\t\t\t\tCPF do cliente: ");
    fflush(stdin);
    gets(dados[i].cpf);
    printf("\t\t\t\tRG do cliente: ");
    fflush(stdin);
    gets(dados[i].rg);
    printf("\n\n\t\t\t\tCadastro de Endereço\n\n");
    printf("\t\t\t\tBairro : ");
    fflush(stdin);
    gets(dados[i].local.bairro);
    printf("\t\t\t\tRua : ");
    fflush(stdin);
    gets(dados[i].local.rua);
    printf("\t\t\t\tNumero da Casa: ");
    fflush(stdin);
    gets(dados[i].local.casa);
    printf("\n\n\t\t\t\tCadastro da Agencia\n\n");
    printf("\t\t\t\tAgencia: ");
    fflush(stdin);
    scanf("%d",&dados[i].conta.agencia);
    printf("\t\t\t\t\Conta : ");
    fflush(stdin);
    scanf("%d",&dados[i].conta.numero);
    printf("\t\t\t\tSaldo  : R$ ");
    scanf("%f",&dados[i].conta.saldo);
    printf("\t\t\t\tCadastro da senha de acesso: ");
    fflush(stdin);
    gets(dados[i].login.pass);
}
    system("pause");
}
void consultar_saldo(){//Sub Rotina consultar Saldo
    int cont, agencia,i,a;
    char senha[16], sim;
    do{
        system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t\tAgência : ");
        scanf("%d",&agencia);
        printf("\t\t\t\tConta   : ");
        scanf("%d",&cont);
        printf("\t\t\t\tSenha   : ");
        fflush(stdin);
        gets(senha);
        for(i=0;i<5;i++){
        if(cont==dados[i].conta.numero && !strcmp(senha,dados[i].login.pass)){
            system("cls");
            printf("\t\t\t\tBem Vindos %s\n",dados[i].nomecliente);
            printf("\t\t\t\tAgencia    : %d\n",dados[i].conta.agencia);
            printf("\t\t\t\tConta      : %d\n",dados[i].conta.numero);
            printf("\t\t\t\tSaldo Atual: R$ %.f,00\n",dados[i].conta.saldo);
            a=0;
            break;
        }
        else
        {
            a=1;
        }
    }
    if(a!=0){
        system("cls");
        printf("\n\n\n\n\t\t\t\tUsuario Invalido\n\n\n\n");
    }
        printf("\t\t\t\tVoltar...");
        sim=getch();
    }while(sim=='s');
}//Fim consultar Saldo
void realizar_saque(){//Sub Rotina Realizar Saque
    int i,a,cont;
    float saque;
    char senha[16], sim;
    do{
        system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t\tRealizar Saque\n\n");
        printf("\t\t\t\tConta   : ");
        scanf("%d",&cont);
        printf("\t\t\t\tSenha   : ");
        fflush(stdin);
        gets(senha);
        for(i=0;i<5;i++){
        if(cont==dados[i].conta.numero && !strcmp(senha,dados[i].login.pass)){
            system("cls");
            printf("\t\t\t\tBem Vindos %s\n",dados[i].nomecliente);
            printf("\t\t\t\tValor do Saque : R$ ");
            scanf("%f",&saque);
            printf("\n\n\n\n\t\t\t\tEnter..."); getch();
            a=0;
            if(saque > 0 ){
                if(saque <= dados[i].conta.saldo){
                    dados[i].conta.saldo = dados[i].conta.saldo - saque;
                    printf("\n\n\n\n\t\t\t\tSaque Realizado com Sucesso...\n\n\n\n");
                    break;
                }
                else{
                printf("\n\t\t\t\tSaldo Insufiente para retirada\n");//saida de dados
							printf("\t\t\t\tValor pretendido R\$ %.00f\n",saque);
							printf("\t\t\t\tSeu saldo Atual é: R\444 %.0f,00",dados[i].conta.saldo);
							printf("\n\n");
							break;
                            }
                        }else
                        {system("cls");
                        printf("\t\t\t\tValor Informado Negativo\n");}
        }
        else
        {
            a=1;
        }
    }
    if(a!=0){
        system("cls");
        printf("\n\n\n\n\t\t\t\tUsuario Invalido\n\n\n\n");
    }
        printf("\t\t\t\tVoltar...");
        getch();
    }while(sim=='s');
}
//Fim Saque
void realizar_deposito(){//sub Rotina Deposito
int agenciap, contap, l,op,i;
char senha[16];
float deposito;
	do{
					system("cls");
					system("color 3f");
					printf("\n\n");
					printf("\t\t\t\t***** Menu Deposito *****\n");
					printf("\t\t\t\t(1) - Realizar deposito: \n");//entra de dados para compraração com o existente
					printf("\t\t\t\t(0) - sair\n");
					fflush(stdin);//limpa dados do tecla
					printf("\t\t\t\t");
					scanf("%d",&op);
					system("cls");
					switch(op){
					case 1:
		printf("\n\t\t\t\tDeposito\n\n");
					printf("\t\t\t\tAgencia : ");
					scanf("%d",&agenciap);
					printf("\t\t\t\tConta   : ");
					scanf("%d",&contap);
					printf("\t\t\t\tSenha   : ");
					fflush(stdin);
					gets(senha);
					for(i=0;i<=5;i++){//
						if(contap==dados[i].conta.numero && !strcmp(senha,dados[i].login.pass)){
							printf("\n\t\t\t\tBem - vindo! %s\n",dados[i].nomecliente);
							printf("\t\t\t\tValor do deposito: R\444 ");
							scanf("%f",&deposito);
							printf("\n");
							printf("\t\t\t\tENTER...");
							getch();
							if(deposito > 0 ){
							system("cls");
							dados[i].conta.saldo=dados[i].conta.saldo + deposito;//processamentos de dados
							printf("\n\n\n");
							printf("\t\t\t\tDeposito realizado com sucesso\n\n");
							l=0;
						}else{
						    system("cls");
                        printf("\n\t\t\t\tDeposito nao aceito\n\n");}
							break;
						}else{
						    l=1;
					}}
					if(l!=0){printf("\n\n\t\t\t\tCliente nao encontrado...\n\n\n");}
					printf("\t\t\t\tVoltar...");
					getch();
					break;
					case 0:
						menucliente();
						break;
						default:
						    system("cls");
						    printf("\n");
							printf("\t\t\t\tOpcao Invalida...");
							getch();
							break;
				}
					}while(op!=0);
}//fim deposito
void desenvolvedor(){
    system("cls");
    system("color 2f");
    printf("\n\n\n\n");
    printf("\t\t\t\t*=============================================*\n");//imprimir apenas o o texto
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|      FACULDADE METROPOLITANA DE MANAUS      |\n");
    printf("\t\t\t\t|           SISTEMA DE INFORMAÇÃO             |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|               ESTRUTURA DE DADOS            |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|         GILDERLANY                          |\n");
    printf("\t\t\t\t|         GILBER CARVALHO DE SOUZA - 300845   |\n");
    printf("\t\t\t\t|         MATEUS AMELIO                       |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|       TRABALHO ACADEMICO DE ESTRUTURA       |\n");
    printf("\t\t\t\t|                    DE DADOS                 |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|              PROFESSORA: JAQUELINE          |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|                  MANAUS - AM                |\n");
    printf("\t\t\t\t|                  17/06/2016                 |\n");
    printf("\t\t\t\t*=============================================*\n");
    printf("\t\t\t\t");
    printf("\n\n\n\n");
    printf("\t\t\t\tQualquer tecla para Menu Principal...");
    getch();
}
