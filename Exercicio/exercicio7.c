#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    //7) Fa�a um algoritmo que l� raio de uma circunfer�ncia e calcule sua area.
    float area,raio,pi=3.1416;
    printf("\n\tInforme o raio de uma circuferencia:\n\t");
    scanf("%f",&raio);
    area=pi*sqrt(pow(raio,2));
    printf("\n\tA area da circunferencia e: %.f\n\n",area);
system("pause");
}
