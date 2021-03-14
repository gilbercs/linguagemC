#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j,matriz[4][4];
    printf("Informe a Matriz de (4x4)\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%d][%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    } system("cls");
    printf("Digonal Principal da Matriz(4 x 4)\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i==j){
            printf("[%d] ",matriz[i][j]);
        }
        }
        printf("\n");
    }
    printf("Elementos Superior da Matriz(4 x 4)\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i<j){
            printf("[%d] ",matriz[i][j]);
        }
        }
        printf("\n");
    }
    printf("Elementos Inferior da Matriz(4 x 4)\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(i>j){
            printf("[%d]\t",matriz[i][j]);
        }
        }
        printf("\n");
    }
    printf("Matriz(4 x 4)\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%d] \t",matriz[i][j]);
        }
        printf(" \n");
    }
system("pause");
}
