#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b;
	int ad, su, mu;
	float di, p1, p2;
	printf("\t\tDigite um valor: \n");
	printf("\t\t");
	scanf("%d",&a);
	printf("\t\tDigite um valor: \n");
	printf("\t\t");
	scanf("%d",&b);
	ad=a+b;
	su=a-b;
	mu=a*b;
	di=a/b;
	p1=a*a;
	p2=b*b;
	printf("\t\tA Soma de %d + %d = %d\n",a,b,ad);
	printf("\t\tA Subtracao de %d - %d = %d\n",a,b,su);
	printf("\t\tA Multiplicacao de %d * %d = %d\n",a,b,mu);
	printf("\t\tA Divisao de %d / %d = %d\n",a,b,di);
	printf("\t\tA Potencia de %d  = %d\n",a,p1);
	printf("\t\tA Pontencia de %d  = %d\n",b,p2);
	
system("pause");	
}
