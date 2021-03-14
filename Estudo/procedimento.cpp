#include <stdio.h>
#include <stdlib.h>
int soma(int a, int b){
    int total;
    total= a + b;
    printf("%d\n\n\n\n",total);
}
int main(){
    int i, num, num1;
        printf("Valor: ");
        scanf("%d",&num);
        printf("Valor: ");
        scanf("%d",&num1);
        soma(num, num1);

system("pause");
}
