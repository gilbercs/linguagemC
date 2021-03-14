#include <stdio.h>
int main(){
float altura, base, area;
printf("\n\t\tArea do triangulo\n\n");
printf("\t\tDigite a altura: ");
scanf("%f",&altura);
printf("\t\tDigite a base: ");
scanf("%f",&base);
area= (altura*base)/2;
printf("\n");
printf("\t\tA area do triangulo e: %f", area);
printf("\n");
system("pause");
}
