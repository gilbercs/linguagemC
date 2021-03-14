#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	char nome[5][20];
	int ano[5][4],titulo[5][9],i;
	int opc,voto,g=0,j=0,e=0,a=0,t=0,cont=0;
	do{
		system("cls");
		printf("\t(1) - Cadastro\n");
		printf("\t(2) - Votar\n");
		printf("\t(3) - Apuracao\n");
		printf("\t(0) - Sair\n");
		printf("\tFaca sua escolha\n");
		printf("\t\t");
		scanf("%d",&opc);
		system("cls");
		switch(opc){
			case 1:
				printf("\tBem ao cadastro\n");
				for(i=0;i<=4;i++){
					printf("\t==> Eleitor %d <==\n",i+1);
					printf("\tNome: \n");
					fflush(stdin);
					printf("\t");
					gets(nome[1]);
					printf("\tAno Nasc. (ex: 1900)\n");
					printf("\t");
					scanf("%d",&ano[i]);
					printf("\tTitulo de Eleitor\n");
					printf("\t");
					scanf("%d",&titulo[i]);
					cont++;
				}
				break;
				case 2:
					if(cont!=0){
					do{
					printf("\t==> Votacao <==\n");
						printf("\t(1) - Gilberto Mestrinho\n");
						printf("\t(2) - Jean Lobo\n");
						printf("\t(3) - Eduardo Braga\n");
						printf("\t(4) - Amazonino\n");
						printf("\t(0) - Menu principal\n");
						printf("\tFaca sua escolha\n");
						printf("\t");
						scanf("%d",&voto);
						t++;
						switch(voto){
							case 1:
							g++;
							break;
							case 2:
							j++;
							break;
							case 3:
							e++;
							break;
							case 4:
							a++;
							break;
							case 0:
							break;
							default:
							printf("\tCanditato Invalido\n");
						}
						}while(t<=4);
					}else
					printf("\tNenhum eleitor\n");
					break;
					case 3:
						if(t!=0){
						printf("\t==>Apuracao dos votos<==\n");
						printf("\t%d -> Gilberto Mestrinho:\n",g);
						printf("\t%d -> Jean Lobo:\n",j);
						printf("\t%d -> Eduardo Braga:\n",e);
						printf("\t%d -> Amazonino: \n",a);
						printf("\t%d -> Total de Votos: \n",t);
						printf("\tVoltar de Enter: \n");
						printf("\t");
						getch();
					}else
					printf("\tSem voto\n");
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
