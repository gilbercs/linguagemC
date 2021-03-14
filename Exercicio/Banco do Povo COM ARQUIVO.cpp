#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include<locale.h>//Biblioteca para acentua��o.
#include<conio.h>

typedef struct Endereco{
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


//Declara��o de Variaveis
int numeroclientes;
int op,i;
int vetconta[5];
int vetsenha[5];
int vetagencia[5];


float saldo,deposito,transferencia;
int op2;

main(){
setlocale(LC_ALL, "Portuguese");
CadastroCliente cad[5];	

do
{
system("color 18");
printf("\n\n\n\n");
printf("\t\t +-----------------------------------------+\n");
printf("\t\t |           SESS�O DE LOGIN               |\n");
printf("\t\t +-----------------------------------------+\n");
printf("\t\t |          1 - ACESSAR CONTA              |\n");
printf("\t\t |          2 - OPERAC�O SEM CART�O        |\n");
printf("\t\t |          0 - SAIR DO SISTEMA            |\n");
printf("\t\t +-----------------------------------------+\n");
printf("\t\t");
scanf("%i",&op);
system("cls");
switch(op){
case 1:
int contapesq,senhapesq;
int contadm,agencia;

	printf("INFORME SUA CONTA:  ");	
    scanf("%i",&contapesq);
	printf("INFORME SUA SENHA:   ");
	scanf("%i",&senhapesq);
	system("cls");
for(i=0;i<numeroclientes;i++){

if(contapesq=vetconta[i]){

do{//Inicio de Estrutura de Repeti��o
printf("\t$$$$$$$$ BEM VINDO AO BANCO $$$$$$$ \n");
printf("1-VISUALIZAR EXTRATO\n");
printf("2-REALIZAR DEPOSITO\n");
printf("3-REALIZAR TRANSFERENCIA\n");
printf("4-REALIZAR PAGAMENTO DE FATURA\n");
printf("0-SAIR\n");
scanf("%i",&op2);

switch(op2){//Inicio de Estrutura de Caso
case 1:
	printf("SEU SALDO ATUAL E R$:%.2f\n",saldo);
	system("pause");
	system("cls");	

break;	
case 2:
	printf("\t $$$$$$$$ SESSAO DE DEPOSITO $$$$$$$\n");
	printf("INFORME VALOR DO DEPOSITO R$:  ");
	scanf("%f",&deposito);
	if(deposito>0){
saldo=saldo+deposito;
printf("OPERA�AO REALIZADA COM SUCESSO\n");
system("cls");
}else{
	printf("VALOR INVALIDO\n");
	printf("OPERA�AO NAO REALIZADA\n");
	}
break;	
case 3:
//Declara��o de Variaveis Locais	
char agencia[10];
int conta; 
//Fim da Declara��o de Variaveis	
	printf("\t+------------------------------------+\n");
	printf("\t|    $$$$$ DEPOSITO BANC�RIO $$$$$   |\n");
	printf("\t+------------------------------------+\n");
	printf("\t|INFORME VALOR DA TRANSFERENCIA R$:  ");	
	scanf("%f",&transferencia);
	system("cls");
if(transferencia>0 && transferencia<=saldo){	
saldo=saldo-transferencia;
	printf("\t|INFORME A AGENCIA\n");
	scanf("%s",&agencia);
	
	printf("INFORME A CONTA\n");
	scanf("%i",&conta);
	printf("TRANSFERENCIA REALIZADA COM SUCESSO\n");
}else{
	printf("VALOR INVALIDO ou SALDO INSUFICIENTE\n");
	printf("CONTATE SUA AGENCIA\n");
}
break;

case 4: 
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
	printf("\t+----------------------------------------+\n");  
    printf("\t|     $$$$$ BEM VINDO GERENTE $$$$$      |\n");
	printf("\t+----------------------------------------+\n"); 
    printf("\t|     1-CADASTRAR CONTAS                 |\n");
	printf("\t|     2-LISTAR CONTAS CADASTRADAS        |\n");
	printf("\t|     3-EXLUIR CONTAS CADASTRADAS  	   |\n");
    printf("\t|     0-SAIR DO SISTEMA                  |\n");
	printf("\t+----------------------------------------+\n");
    scanf("%i",&op1);
    system("cls");
switch(op1){
case 1:
    printf("INFORME QUANTOS CLIENTES DESEJA CADASTRAR\n");
    scanf("%i",&numeroclientes);
    system("cls");
    
    
FILE*Arquivo; // cria��o vari�vel ponteiro para o arquivo
 //abrindo o arquivo com tipo de abertura w
  Arquivo = fopen("Arquivo Banco.txt","w");
 
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
	printf("(casado(�),solteiro(�),viuvo(�),separado(�)\n");
	fflush(stdin);
  	gets(cad[i].estadocivil);    
  	printf("INFORME TELEFONE PARA CONTATO:   ");
  	scanf("%i",&cad[i].tel);  	 
	printf("\n\n");   	
  	printf("\t $$$$$$$$$$ INFORME O ENDERE�O $$$$$$$$$:\t \n");
  	printf("RUA\n");
  	fflush(stdin);
    gets(cad[i].end.rua);
  	printf("BAIRRO\n");
  	fflush(stdin);
    gets(cad[i].end.bairro);
  	printf("N�\n");
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
 //usando fprintf para armazenar a string no arquivo
  fprintf(Arquivo, "%s");

}//fim do for
  //usando fclose para fechar o arquivo
  fclose(Arquivo);
  printf("DADOS GRAVADOS COM SUCESSO\n");
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
 


case 0:
	printf("FIM DO SISTEMA.....\n");
	system("cls");
	break;
	
default:
printf("OPCAO INVALIDA\n");
}//FIM DO SWITCH
}while(op!=0);
system("pause");//FIM DA ESTRUTURA DE REPETI��O
}//FIM DO SISTEMA
