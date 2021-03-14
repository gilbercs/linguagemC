#include <stdio.h>
#include <stdlib.h>
int main (){
    float prestacao, valor, taxa;
    int tempo;
    printf("\n\tEfetue o calculo da sua prestacao\n\n");
    printf("Informe o valor da prestacao:\n\t");
    scanf("%f",&valor);
    printf("Informe a taxa de juros mensal:\n\t");
    scanf("%f",&taxa);
    printf("Informe o tempo em que a prestacao esta em atraso em meses:\n\t");
    scanf("%d",&tempo);
    prestacao=valor + (valor*(taxa/100)*tempo);
    printf("O valor da prestacao em atraso e: %.3f\n",prestacao);
    printf("\n");

system("pause");
}
