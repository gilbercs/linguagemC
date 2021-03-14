#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>//Biblioteca para acentuação.
#include<conio.h>

typedef struct Endereco{//registro de endereço
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


//Declaração de Variaveis
int numeroclientes;// variaveis globais do tipo inteiro
int op,i;
int vetconta[5]; //varios globais do tipo ineteiro declaradas como vetor
int vetsenha[5];
int vetagencia[5];


float saldo,deposito,transferencia; // float variaveis reais
int op2;


main(){//main nula não retorna a nada
setlocale(LC_ALL, "Portuguese");
CadastroCliente cad[5];//chamando registro dentro do main priciapl

do//inicio do laço de repetição
{
system("cls");//função system usando pela biblioteca stdlib.h para gerenciamento de memoria, alocação de memoria e etc
system("color 1f");//trocando cor da fonte no caso color
printf("\n\n\n\n");//\n sendo usando para saltar uma linha
printf("\t\t +-----------------------------------------+\n");//imprimir uma linha na tela com traços
printf("\t\t |           SESSÃO DE LOGIN               |\n");//função printf, mostrar dados na tela para o usuario
printf("\t\t +-----------------------------------------+\n");
printf("\t\t |          1 - ACESSAR CONTA              |\n");
printf("\t\t |          2 - OPERACÃO SEM CARTÃO        |\n");
printf("\t\t |          0 - SAIR DO SISTEMA            |\n");
printf("\t\t +-----------------------------------------+\n");
printf("\t\t");
scanf("%i",&op);//scanf receber dados do usuario  e alocar na memoria //& direcionando caminha para armazenamento da variavel que receber o dados
system("cls");
switch(op){//teste condicional caso escolha se
case 1:
int contapesq,senhapesq;//criado variavel local q ira funcionar quando a codição for vedadeira
int contadm,agencia;//mesma coisa

	printf("INFORME SUA CONTA:  ");// pedir dados do usuario na tela do computador	
    scanf("%i",&contapesq);//receber dados do usuario e armazenar na memoria do tipo inteiro
	printf("INFORME SUA SENHA:   ");//
	scanf("%i",&senhapesq);
	system("cls");
for(i=0;i<numeroclientes;i++){//laço de for será iniciado do zero; codição do laço; encremento +1

if(contapesq=vetconta[i]){//tese logico se for verdade a codição ela na estrutura executa os comandos

do{//Inicio de Estrutura de Repetição do while
printf("\t$$$$$$$$ BEM VINDO AO BANCO $$$$$$$ \n");
printf("1-VISUALIZAR EXTRATO\n");
printf("2-REALIZAR SAQUE\n");
printf("3-REALIZAR DEPOSITO\n");
printf("4-REALIZAR TRANSFERENCIA\n");
printf("5-REALIZAR PAGAMENTO DE FATURA\n");
printf("0-SAIR\n");
scanf("%i",&op2);

switch(op2){//Inicio de Estrutura de Caso teste logico de decisao
case 1:
	printf("SEU SALDO ATUAL É R$:%.2f\n",saldo);
	system("pause");
	system("cls");	
break;//sair da condição

case 2://segnda condiçao do switch
	printf("\t+------------------------------------+\n");
	printf("\t|    $$$$$ SAQUE BANCÁRIO $$$$$      |\n");
	printf("\t+------------------------------------+\n");
	printf("\t|INFORME VALOR DO SAQUE R$:  ");
break;	

case 3:
	printf("\t $$$$$$$$ SESSAO DE DEPOSITO $$$$$$$\n");
	printf("INFORME VALOR DO DEPOSITO R$:  ");
	scanf("%f",&deposito);
	if(deposito>0){
saldo=saldo+deposito;
printf("OPERAÇAO REALIZADA COM SUCESSO\n");
system("cls");
}else{
	printf("VALOR INVÁLIDO\n");
	printf("OPERAÇÃO NÃO REALIZADA\n");
	}
break;	
case 4:
//Declaração de Variaveis Locais	
char agencia[10];
int conta; 
//Fim da Declaração de Variaveis	
	printf("\t+------------------------------------+\n");
	printf("\t| $$$$$ TRANSFERÊNCIA BANCÁRIA $$$$$ |\n");
	printf("\t+------------------------------------+\n");
	printf("\t|INFORME VALOR DA TRANSFERÊNCIA R$:  ");	
	scanf("%f",&transferencia);
	system("cls");
if(transferencia>0 && transferencia<=saldo){	
saldo=saldo-transferencia;
	printf("\t|INFORME A AGÊNCIA\n");
	scanf("%s",&agencia);
	
	printf("INFORME A CONTA\n");
	scanf("%i",&conta);
	printf("TRANSFERÊNCIA REALIZADA COM SUCESSO\n");
}else{
	printf("VALOR INVÁLIDO ou SALDO INSUFICIENTE\n");
	printf("CONTATE SUA AGÊNCIA\n");
}
break;

case 5: 
float valor;
int numeroboleto;

	printf("\t+------------------------------------+\n");
	printf("\t|  $$$$$ PAGAMENTO DE FATURAS $$$$$  |\n");
	printf("\t+------------------------------------+\n");
	printf("INFORME VALOR DA BOLETO\n");
	scanf("%f",&valor);
	
if(valor>0 && valor<=saldo){
saldo=saldo-valor;	
	printf("\t|INFORME O NUMERO DO BOLETO|\n(informe apenas numeros)|\n");
	scanf("%i",&numeroboleto);
	
	printf("PAGEMENTO REALIZADO COM SUCESSO\n");
system("pause");	
}else{
	printf("VALOR INVALIDO ou SALDO INSUFICIENTE\n");
	printf("CONTATE SUA AGENCIA\n");
system("pause");
break;

}
	

break;
  


case 0:
	printf("FIM DO SISTEMA\n");
break;
default:
printf("OPCAO INVALIDA\n");	
}//Fim do Switch
}while(op2!=0);//Fim do Do While

system("pause");	
	
}

}
printf("CONTA OU SENHA INVALIDA\n");
printf("CONTACTE SUA AGENCIA\n");
system("pause");
system("cls");
break;

case 995:
int op1;
char login[5];
char senha[5];

gerente l;
strcpy(l.loging,"admin");

	printf("LOGIN:");
	fflush(stdin);
	gets(login);
	printf("SENHA:");
	senha[0] = getch();
	printf ("*");
	senha[1] = getch();
	printf ("*");
	senha[2] = getch();
	printf ("*");
	senha[3] = getch();
	printf ("*");
	
	senha[4] = getch();
	printf ("*");
if(strcmp(strupr(l.loging),strupr(login))==0 && (senha[0] == '1') && (senha[1] == '2') && (senha[2] == '3') && (senha[3] == '4') && (senha[4] == '5')){
    system("cls");
	do{
	    system("color 0f");
	printf("\t+----------------------------------------+\n");  
    printf("\t|     $$$$$ BEM VINDO GERENTE $$$$$      |\n");
	printf("\t+----------------------------------------+\n"); 
    printf("\t|     1-CADASTRAR CONTAS                 |\n");
	printf("\t|     2-LISTAR CONTAS CADASTRADAS        |\n");
	printf("\t|     3-EXCLUIR CONTAS                   |\n");
    printf("\t|     0-SAIR DO SISTEMA                  |\n");
	printf("\t+----------------------------------------+\n");
    scanf("%i",&op1);
    system("cls");
switch(op1){
case 1:
    printf("INFORME QUANTOS CLIENTES DESEJA CADASTRAR\n");
    scanf("%i",&numeroclientes);
    system("cls");
for(i=0;i<numeroclientes;i++){
  	
  	printf("\t $$$$$$$$$$ SESSAO DE CADASTRO PARA NOVOS CLIENTES $$$$$$$\t\n");
	printf("NOME: \n");
   	fflush(stdin);
  	gets(cad[i].nome);  
  	printf("INFOME C.P.F(informe apenas numeros):\n");
  	scanf("%i",&cad[i].cpf);  
  	printf("INFOME RG(informe apenas numeros):  \n");
  	scanf("%i",&cad[i].rg);  
  	printf("INFOME ANO DE NASCIMENTO (dd/mm/aaaa):  \n");
  	fflush(stdin);
  	gets(cad[i].nascimento);  
  	printf("INFORME ESTADO CIVIL:  ");
	printf("(casado(ª),solteiro(ª),viuvo(ª),separado(ª)\n");
	fflush(stdin);
  	gets(cad[i].estadocivil);    
  	printf("INFORME TELEFONE PARA CONTATO:   ");
  	scanf("%i",&cad[i].tel);  	 
	printf("\n\n");   	
  	printf("\t $$$$$$$$$$ INFORME O ENDEREÇO $$$$$$$$$:\t \n");
  	printf("RUA\n");
  	fflush(stdin);
    gets(cad[i].end.rua);
  	printf("BAIRRO\n");
  	fflush(stdin);
    gets(cad[i].end.bairro);
  	printf("Nº\n");
  	scanf("%i",&cad[i].end.numero);
  	printf("CEP\n");
  	scanf("%i",&cad[i].end.cep);
  	printf("COMPLEMENTO\n");
    fflush(stdin);
    gets(cad[i].end.complemento);
    printf("INFORME A FUTURA SENHA DA CONTA DO CLIENTE:  \n");
    scanf("%i",&vetsenha[i]);    
    printf("INFORME A CONTA DO CLIENTE: \n");
    scanf("%i",&vetconta[i]);	
	printf("INFORME AGENCIA DO CLIENTE: \n");
    scanf("%i",&vetagencia[i]);
system("cls");

}//fim do for
break;   

case 2:
	printf("\t+----------------------------------------+\n");  
    printf("\t|    $$$$$ LISTAGEM DE CONTAS $$$$$      |\n");
	printf("\t+----------------------------------------+\n"); 	
	
	for(i=0;i<numeroclientes;i++){
  	
  	printf("\t|NOME: %s\n",strupr(cad[i].nome));    
    printf("\t|INFORME A CONTA DO CLIENTE:%i \n",vetconta[i]);
	printf("\t|INFORME AGENCIA DO CLIENTE:%i \n",vetagencia[i]);
	printf("\t+----------------------------------------+\n");
}
system("pause");
break;	

}//fim do switch
}while(op1!=0);
}else{
exit(0);
}
//fim do caso fim do menu inicial

case 2:
    printf("CASO SERÁ DESTINADO PARA OPERAÇÕES SEM CARTÕES\n");
    system("pause");
break; 


case 0:
	printf("FIM DO SISTEMA...\a");
	getch();
    exit(0);
	break;
	
default:
printf("OPÇÃO INVÁLIDA\n");
}//FIM DO SWITCH
}while(op!=0);
system("pause");//FIM DA ESTRUTURA DE REPETIÇÃO
}//FIM DO SISTEMA
