#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    //7) Faça um algoritmo que lê raio de uma circunferência e calcule sua area.
    float area,raio,pi=3.1416;
    printf("\n\tInforme o raio de uma circuferencia:\n\t");
    scanf("%f",&raio);
    area=pi*sqrt(pow(raio,2));
    printf("\n\tA area da circunferencia e: %.f\n\n",area);
system("pause");
}
