#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    //1)Cria um algoritmo que entre com 10 nomes e imprima-os.
    int i,y;
    char nome[20];
    printf("\n\tInforme 10 nomes.\n");
    for(i=0;i<3;i++){
    printf("\n\t%d.Entre com o primeiro nome:\n\t",i+1);
    scanf("%s",nome[i]);
    }
    printf("\n\tOs nomes digitados foram:\n");
    for(y=0;y<3;y++){
    printf("\n%c",nome[3]);
    }
system("pause");
}
