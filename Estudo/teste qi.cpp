#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(){
int sort, num, i;
char x;
system("cls");
do{
    system("color 3f");
    sort=rand()%501;
    printf("\t\t*============================================*\n");
    printf("\t\t|      Adivinhe o numero: Teste 8.           |\n");
    printf("\t\t*============================================*\n");
    printf("\t\t 1 - O numero <???> esta entre 0 e 500: ");
    scanf("%d",&num);
    for(i=2;i<=30;i++){
            if(num==sort){
        printf("\t\t=========================================                                                                                                                                                                                                                                                                                            ======\n");
        printf("\t\t Parabens voce acertou na %d tentativa!\n",i-1);
        printf("\t\t=========================================\n");
        break;
        }
        else if (num>sort){
            printf("\t\t%2d",i);
            printf(" - O numero %3d \x82 maior que o sorteado: ",num);
            scanf("%d",&num);
            }else{
                printf("\t\t%2d",i);
                printf(" - O numero %3d \x82 menor que o sorteado: ",num);
                scanf("%d",&num);}}
            printf("\t\t\t Jogar Novamente (s/n):");
            x=getche();
            system("cls");
}while(x=='s');
}
