#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int i,rg[2],cpf[2],opc,parc,cont=0;
	char nome[2][15],cliente[15];
	float salario[2],valor,emp,pgt;
	do{
		printf("\t(1) - Cadastro de Cliente: \n");
		printf("\t(2) - Emprestino ao Cliente: \n");
		printf("\t(0) - Sair.\n");
		printf("\tO que deseja fazer: \n");
		printf("\t");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				printf("\tBem Vindo ao cadastro\n");
				for(i=0;i<=1;i++){
					printf("\tCliente %d: \n",i+1);
					printf("\tNome: ");                                                                                                                         
					fflush(stdin);
					gets(nome[i]);
					printf("\tRG: ");
					scanf("%d",&rg[i]);
					printf("\tCPF: ");
					scanf("%d",&cpf);
					printf("\tSalario: ");
					scanf("%f",&salario[i]);
					cont++;	
			}
			break;
			case 2:
				if(cont!=0){
				printf("\tArea de Emprestimo \n");
				printf("\tNome do cliente: ");
				fflush(stdin);
				gets(cliente);
				printf("\tValor solicitado: ");
				scanf("%f",&valor);
				printf("\tTotal de Parcelas: ");
				scanf("%d",&parc);
				printf("\tValor das Parcelas: ");
				scanf("%f",&pgt);
					for(i=0;i<=1;i++){
					emp=salario[i]* 0.10;
					if(strcmp(cliente,nome[i])==0 && emp>=pgt){
						printf("\tCliente: %s",nome[i]);
						printf("\tParabens Seu emprestimo foi Aprovado: \n");
					}else
					if(strcmp(cliente,nome[i])==0 && pgt>emp){
						printf("\tCliente: %s",nome[i]);
						printf("\tDesculpa seu emprestimo foi recusado: \n");}
						else
						printf("\tCliente nao encontrado:\n");
				}
			}else
			printf("\tSem cliente: \n");
				break;
			case 0:
				exit(0);
				break;
			default:
				printf("\tOpcao Invalida\n");
		}
	}while(opc!=0);
system("pause");	
}
