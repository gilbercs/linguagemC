#include <stdio.h>
#include <stdlib.h>
int main(){
char nome[5][15];
int rg[5],i,op,p_rg,cont;
do{
	printf("\t(1) - Cadastre o Nome: \n");
	printf("\t(2) - Pesquisa nome: \n");
	printf("\t(0) - Sair. \n");
	printf("\tO que deseja fazer...\n");
	printf("\t");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("\tCadastro de Nome: \n");
			for(i=1;i<=5;i++){
				printf("\tCadastro %d: \n",i);
				printf("\tNome: ");
				fflush(stdin);
				gets(nome[i]);
				printf("\tRg: ");
				scanf("%d",&rg[i]);
			}
			break;
			case 2:
				printf("\tPesquisa nome Informe Rg: \n");
				scanf("%d",&p_rg);
				for(i=1;i<=5;i++){
					if(p_rg==rg[i]){
						cont++;
						printf("\tNome: %s \n",nome[i]);
					}else{
						printf("\tNome nao encontrado\n");
						break;
					}
				}
				break;
				exit(0);
				case 0:
					break;
			default:
				printf("\tOpcao Invalida\n");
	}
}while(op!=0);
system("pause");
}
