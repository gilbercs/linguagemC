#include <stdio.h>
#include <stdlib.h>
int main (){
    float hora, total;
    printf("\n\tInforme a hora\n");
    scanf("%f",&hora);
    total=(hora*60);
    printf("Se pasaram desde o inicio do dia %0.f minutos\n\n",total);

system("pause");
}
