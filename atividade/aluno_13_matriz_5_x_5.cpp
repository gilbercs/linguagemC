#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j, b[5][5],vetor[25],x=0;
    printf("Informe a Matriz B(5x5) \n");
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            printf("[%d] [%d]= ",i,j); scanf("%d",&b[i][j]);
        }
    }
    printf("Diagonal Principal da Matriz\n");
    for(i=0;i<=4;i++){
        for(j=0;j<=4;j++){
            if(i==j){
                x++;
                vetor[x]=b[i][j];
                printf("[%d] = %d \t",x,vetor[x]);
            }
        }
    }
system("pause");}
