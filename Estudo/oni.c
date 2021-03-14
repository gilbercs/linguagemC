
#include <string.h>
main()
{
int corredor[10], janela[10];
int i, aux, poltrona, cont;
for(i=0;i<10;i++)
{
corredor[i]=0;
janela[i]=0;
}
do
{
system("cls");
puts("1 = vender janela");
puts("2 = vender corredor");
puts("3 = mostrar onibus");
puts("4 = sair");
scanf("%d",&aux);
switch(aux)
{
case 3:
puts("janela");
printf("|");
for(i=0;i<10;i++)
printf("%d|",janela[i]);
printf("\n|");
for(i=0;i<10;i++)
printf("%d|",i+1);
puts("\n\ncorredor");
printf("|");
for(i=0;i<10;i++)
printf("%d|",corredor[i]);
printf("\n|");
for(i=0;i<10;i++)
printf("%d|",i+1);
getch();
break;
case 1:
puts("janela");
printf("|");
for(i=0;i<10;i++)
printf("%d|",janela[i]);
printf("\n|");
for(i=0;i<10;i++)
printf("%d|",i+1);
cont=0;
for(i=0;i<10;i++)
if(janela[i]==1)
cont++;
if(cont<10)
{
printf("\n");
puts("qual poltrona quer marcar = digite o lugar ");
scanf("%d",&poltrona);
if(poltrona<11 && poltrona >0 && janela[poltrona-1]==0)
janela[poltrona-1]=1;
else
puts("lugar preenchido");
}
else
printf("\n");
puts("poltronas da janela todas ocupadas");
getch();
break;
case 2:
puts("\n\ncorredor");
printf("|");
for(i=0;i<10;i++)
printf("%d|",corredor[i]);
printf("\n|");
for(i=0;i<10;i++)
printf("%d|",i+1);
cont=0;
for(i=0;i<10;i++)
if(corredor[i]==1)
cont++;
if(cont<10)
{
printf("\n");
puts("qual poltrona quer marcar = digite o lugar ");
scanf("%d",&poltrona);
if(poltrona<11 && poltrona >0 && corredor[poltrona-1]==0)
corredor[poltrona-1]=1;
else
puts("lugar preenchido");
}
else
printf("\n");
puts("poltronas do corredor todas ocupadas");
getch();
break;
}//fecha switch
}while(aux!=4);
puts("obrigado por usar meu sistema");
getch();
}
