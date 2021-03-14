#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int op;
    do{
        printf("\t(1) - Cadastrar\n");
        printf("\t(2) - Pesquisa\n");
        printf("\t(3) - Exibir\n");
        printf("\t(0) - Sair\n");
        fflush(stdin);
        printf("\t");
        scanf("%d",&op);
        switch(op){
            case 1:
                do{
               }while(op!=0);
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                exit(0);
                break;
                default:
                    printf("\tOpcao invalida\n");
        }
    }while(op!=0);    
system("pause");
}
