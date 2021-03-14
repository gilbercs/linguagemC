#include <stdio.h>
#include <stdlib.h>
int matriz();
int exibirdiagonal(int a[3][3]);
int main(){
    printf("Informe a matriz 3x3\n");
    matriz();
system("pause");
}
int matriz(){
    int a[3][3],diagonal[10],i,j,dp=0,ts=0,ti=0,superior[10],inferior[10];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d][%d] = ",i,j); scanf("%d",&a[i][j]);
        if(i==j){
                dp = dp + 1;
            diagonal[dp] = a[i][j];
        }
        if(i<j){
            ts = ts + 1;
            superior[ts] = a[i][j];
        }
        if(i>j){
            ti = ti + 1;
            inferior[ti] = a[i][j];
    }
    int exibirdiagonal(a[3][3]);
    }
    }
    system("cls");
    /*printf("\n\nVetor da Diagonal Principal\n");
    for(i=0;i<=dp;i++){
        printf("%d ",diagonal[i]);
    }*/
    printf("\n\nVetor, Triangulo Supeior\n");
    for(i=0;i<=ts;i++){
        printf("%d ",superior[i]);
    }
    printf("\n\nVetor, Triangulo Inferior\n");
    for(i=0;i<=ti;i++){
        printf("%d ",inferior[i]);
    }
    printf("\n\nMatriz 3x3\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d \t",a[i][j]);
} printf("\n");
    }
    exbirdiagonal();
}
int exibirdiagonal(int receber[3][3]){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                printf("%d",receber[i][j]);
            }
        }
    }
}
