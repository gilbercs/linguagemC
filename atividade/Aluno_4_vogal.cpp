#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(){
	char nome[5][20],vogal[1];
	int i,op;
	do{
		printf("\n");
		printf("\t(1) - Cadastro de Nome: \n");
		printf("\t(2) - Pesquisa Vogal: \n");
		printf("\t(0) - Sair. \n");
		printf("\tO que deseja fazer: \n");
		printf("\t");
		scanf("%d",&op);
		system("cls");
		switch(op){
			case 1:
				printf("\tCadastrar Nome: \n");
				for(i=0;i<=1;i++){
					printf("\t%d - Nome: ",i+1);
					fflush(stdin);
					gets(nome[i]);
				}
				break;
				case 2:
						printf("\tPesquisa Vogal: \n\t");
						fflush(stdin);
						gets(vogal);
							if(!strcmp(vogal,"a") || !strcmp(vogal,"A")){
								printf("\tNome com %s: \n",vogal);
							for(i=0;i<=1;i++){
								if(nome[i][0]=='a'|| nome[i][0]=='A'){
									printf("\t %s \n",nome[i]);}
								}
							}else
								if(!strcmp(vogal,"e") || !strcmp(vogal,"E")){
								printf("\tNome com %s: \n",vogal);
							for(i=0;i<=1;i++){
								if(nome[i][0]=='e'|| nome[i][0]=='E'){
									printf("\t %s \n",nome[i]);}
								}
							}else
								if(!strcmp(vogal,"i") || !strcmp(vogal,"I")){
								printf("\tNome com %s: \n",vogal);
							for(i=0;i<=1;i++){
								if(nome[i][0]=='i'|| nome[i][0]=='I'){
									printf("\t %s \n",nome[i]);}
								}
							}else
								if(!strcmp(vogal,"o") || !strcmp(vogal,"O")){
								printf("\tNome com %s: \n",vogal);
							for(i=0;i<=1;i++){
								if(nome[i][0]=='o'|| nome[i][0]=='O'){
									printf("\t %s \n",nome[i]);}
								}
							}else
								if(!strcmp(vogal,"u") || !strcmp(vogal,"U")){
								printf("\tNome com %s: \n",vogal);
							for(i=0;i<=1;i++){
								if(nome[i][0]=='u'|| nome[i][0]=='U'){
									printf("\t %s \n",nome[i]);}
								}
							}else{
							printf("\t A letra (%s) Nao e uma vogal\n",vogal);
						}
					break;
					case 0:
					exit(0);
					break;
	}
	}while(op!=0);
system("pause");	
}

