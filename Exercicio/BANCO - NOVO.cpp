#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include<math.h>

//Declaração de Variaveis
int numeroclientes;
int op,i;
int vetconta[5],tel[5];
int vetsenha[5];
int vetagencia[5];
int rg[5],cpf[5];
char nome[30][5],nascimento[10][5],estadocivil[10][5],endereco[40][5];

float saldo,deposito,transferencia;
int op2;

 int main(){
do
{
printf("***SESSÃO DE LOGIN***\n");
printf("1-ACESSAR CONTA\n");
printf("2-OPERACAO SEM CARTAO\n");
printf("0-SAIR DO SISTEMA\n");
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
for(i=0;i<numeroclientes;i++){

if(contapesq=vetconta[i]){

do{//Inicio de Estrutura de Repetição
printf("BEM VINDO AO BANCO +\n");
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

break;	
case 2:
	printf("SESSAO DE DEPOSITO\n");
	printf("INFORME VALOR DO DEPOSITO R$:  ");
	scanf("%f",&deposito);
if(deposito>0){
saldo=saldo+deposito;
printf("OPERAÇAO REALIZADA COM SUCESSO\n");
}else{
	printf("VALOR INVALIDO\n");
	printf("OPERAÇAO NAO REALIZADA\n");
}
break;	
case 3:
//Declaração de Variaveis Locais	
char agencia[10];
int conta; 
//Fim da Declaração de Variaveis	
	printf("SESSAO TRANSFERENCIA\n");
	printf("INFORME VALOR DA TRANSFERENCIA R$:  ");	
	scanf("%f",&transferencia);

if(transferencia>0 && transferencia<=saldo){	
saldo=saldo-transferencia;
	printf("INFORME A AGENCIA\n");
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

	printf("SESSAO DE PAGAMENTO DE FATURAS\n");
	printf("INFORME VALOR DA BOLETO\n");
	scanf("%f",&valor);
	
if(valor>0 && valor<=saldo){
saldo=saldo-valor;	
	printf("INFORME O NUMERO DO BOLETO\n(informe apenas numeros)");
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
printf("CONTA OU SENHA INVALIDA, SENAO CONTA NAO CADASTRADA\n");
printf("CONTACTE SUA AGENCIA CASO NECESSARIO\n");
system("pause");
break;

case 995:
int op1;
    do{
    printf("BEM VINDO GERENTE\n");
    printf("1-CADASTRAR CONTAS\n");
    printf("0-SAIR DO SISTEMA\n");
    scanf("%i",&op1);
switch(op1){
case 1:
    printf("INFORME QUANTOS CLIENTES DESEJA CADASTRAR\n");
    scanf("%i",&numeroclientes);
    
for(i=0;i<numeroclientes;i++){
  	
  	printf("SESSAO DE CADASTRO PARA NOVOS CLIENTES\n");
	printf("NOME: ");
   	fflush(stdin);
  	gets(nome[i]);
  
  	printf("INFOME C.P.F(informe apenas numeros):  ");
  	scanf("%i",&cpf[i]);
  
  	printf("INFOME RG(informe apenas numeros):  ");
  	scanf("%i",&rg[i]);
  
  	printf("INFOME ANO DE NASCIMENTO (dd/mm/aaaa):  ");
  	fflush(stdin);
  	gets(nascimento[i]);
  
  	printf("INFORME ESTADO CIVIL:  ");
	printf("(casado(ª),solteiro(ª),viuvo(ª),separado(ª)\n");
	fflush(stdin);
  	gets(estadocivil[i]);
    
  	printf("INFORME TELEFONE PARA CONTATO:   ");
  	scanf("%i",&tel[i]);
  	  	
  	printf("INFORME O ENDEREÇO: ");
  	printf("Rua,Nº,Bairro,Nucleo ou Comunidade,CEP\n");
    fflush(stdin);
    gets(endereco[i]);
    
    printf("INFORME A FUTURA SENHA DA CONTA DO CLIENTE:  ");
    scanf("%i",&vetsenha[i]);
    
    printf("INFORME A CONTA DO CLIENTE:  ");
    scanf("%i",&vetconta[i]);
	
	printf("INFORME AGENCIA DO CLIENTE:  ");
    scanf("%i",&vetagencia[i]);


}//fim do for
}//fim do switch
}while(op1!=0);
break;    

//case 2:

//break;


case 0:
	printf("FIM DO SISTEMA\n");
break;
default:
printf("OPCAO INVALIDA\n");
}//FIM DO SWITCH
}while(op!=0);
system("pause");//FIM DA ESTRUTURA DE REPETIÇÃO
}//FIM DO SISTEMA
