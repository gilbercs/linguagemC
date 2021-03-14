#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int prato, sobremesa, bebida, cal=0;
	
	printf("Escolha seu prato \n");
	printf("1 Vegetariano \n");
	printf("2 Peixe \n");
	printf("3 Frango \n");
	printf("4 Carne \n\n ");
	scanf("%d",&prato);
	
	if(prato==1){ cal+=180;}
	else if (prato==2){cal+=230;}
	else if (prato==3){cal+=250;}
	else{cal+=350;}
	
	printf("Escolha sua sobremesa \n");
	printf("1 Abacaxi  \n");
	printf("2 Sorvete Diet \n");
	printf("3 mousse diet \n");
	printf("4 mousse chocolate \n\n");
	scanf("%d",&sobremesa);
	
	if(sobremesa==1){ cal+=75;}
	else if (sobremesa==2){cal+=110;}
	else if (sobremesa==3){cal+=170;}
	else{cal+=200;}
	
	printf("Escolha sua bebida \n");
	printf("1 Cha  \n");
	printf("2 Suco de laranja \n");
	printf("3 Suco de melao \n");
	printf("4 Refrigerante Diet \n\n");
	scanf("%d",&bebida);
	
	if(bebida==1){ cal+=20;}
	else if (bebida==2){cal+=70;}
	else if (bebida==3){cal+=100;}
	else{cal+=65;}
	
	printf("Total de calorias %d",cal);
	
	
	return 0;
}

