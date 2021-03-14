#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[5][5], b[5][5], c[5][5], i, j;
    printf("\n\nInforme a Matriz A(5x5\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("[%d][%d] = ",i,j); scanf("%d",&a[i][j]);
        }
    }
    system("cls");
    printf("\n\nInforme a Matriz B(5x5)\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("[%d][%d] = ",i,j); scanf("%d",&b[i][j]);
        }
    }
    system("cls");
    printf("\n\n\t\tA soma da Matriz A(5x5) + B(5x5)\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            c[i][j]=a[i][j] + b[i][j];
            printf("[%d][%d] = %d \t",i,j,c[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    system("pause");
}
