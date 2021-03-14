# include<stdio.h>
#include<stdlib.h>
# include<string.h>
int n,i;
struct cliente {
       char nome[20];
       char conta[6];
       char agencia[6];
       float saldo;
       }usuario[20];
cadastrarCliente (){
   int i=1;
    printf ("\n\t CADASTRO DE CLIENTES \n");    
     printf ("\nQuantos  clientes deseja cadastrar? ");
     scanf ("%d", &n);
  for (i=1;i<=n;i++)
    {
    printf ("\n");
    printf ("\nInforme o seu nome:\n");
    fflush(stdin);
    gets (usuario[i].nome);  
    printf ("\nInforme o numero de sua agencia:\n");
    scanf ("%s", &usuario[i].agencia);
    printf ("\nInforme o numero de sua conta:\n ");
    scanf ("%s", &usuario[i].conta);
    printf ("\nInforme o seu saldo:\n ");  
    scanf("%f", &usuario[i].saldo);
    usuario[i].saldo = 0;
    } 
    printf ("\n\nOperacao realizada com sucesso\n"); 
}
consultaSaldo (){
     char agn[6], conta[6], senha[6];
     int a,b,c,x;  
    printf ("\nSaldo\n");
    
    printf ("\nDigite a sua agencia\n");
    scanf ("%s", &agn);
    printf ("\nDigite o numero de sua conta\n");
    scanf ("%s", &conta);
    for (i=1;i<=n;i++)
    {
        a = strcmp(agn,usuario[i].agencia);
        b = strcmp(conta,usuario[i].conta);
        if  ( (a == 0) && (b == 0))
        {
          x=1;
          printf ("\n CLIENTE : %s", usuario[i].nome) ;
          printf ("\n Numero da Conta: %s",usuario[i].conta);
          printf ("\n Agencia: %s", usuario[i].agencia);
		  printf ("\n\nSEU SALDO E : %f reais \n", usuario[i].saldo) ;        
        }
       }
    if (x != 1)
    {
    printf ("\n\a\aerro: DADOS INCORRETOS\n");
    }
    system("pause");    
}
deposito (){
    int a,b,c,x;
    float dep;
    char agn[6], conta[6], senha[6];
    printf ("\n\tDeposito\n");
    
    printf ("\nDigite a sua agencia\n");
    scanf ("%s", &agn);
    printf ("\nDigite o numero da sua conta\n");
    scanf ("%s", &conta);

    for (i=1;i<=n;i++)
    {
        a = strcmp(agn,usuario[i].agencia);
        b = strcmp(conta,usuario[i].conta);
        if  ( (a == 0) && (b == 0) )
        {
          x=1;
          printf ("\n CLIENTE : %s", usuario[i].nome) ;
          printf ("\n\nQuanto voce quer depositar\n");
          scanf ("%f", &dep) ;
          if (dep >= 0)
          {
            usuario[i].saldo = usuario[i].saldo + dep;
          }
          else
          {
          printf ("\n\a erro: O DEPOSITO TEM QUE SER POSITIVO\n");
          break;
          }
        }

     }  
     if(x!=1)
     printf ("\n\a\aerro: DADOS INCORRETOS");
}   

saque (){
    int a,b,c,x;
    float saq;
    char agn[6], conta[6], senha[6];

    printf ("\n\t\tSaque\n");
    printf ("\nDigite o numero de sua agencia\n ");
    scanf ("%s", &agn);
    printf ("\nDigite o numero da sua conta\n");
    scanf ("%s", &conta);

    for (i=1;i<=n;i++)
    {
        a = strcmp(agn,usuario[i].agencia);
        b = strcmp(conta,usuario[i].conta);
        if  ( (a == 0) && (b == 0) )
        {
          printf ("\n CLIENTE : %s", usuario[i].nome) ;
          printf ("\n\n*--VALOR DA RETIRADA--*");
          scanf ("%f", &saq) ;
          if ((saq > 0) && (saq <= usuario[i].saldo) )
          {
            x=1;
            usuario[i].saldo = usuario[i].saldo - saq;
          }
        }
     }  
     if (x != 1){
           printf ("\nerro: SALDO INSUFICIENTE \n");
           }
     system("pause"); 
}
menu (){
printf ("Selecione a opcao desejada...\n");
printf ("");
printf ("1 - Abrir conta\n") ;
printf ("2 - Consulta Extrato\n") ;
printf ("3 - Realizar Deposito\n") ;
printf ("4 - Realizar Saque\n") ;
printf ("5 - Sair\n");    
}
main()
{
int op;
do{

menu ();
scanf ("%d", &op);
switch (op)
{
    case 1:
    system ("cls") ;
    cadastrarCliente ();
    system ("cls");
    main();
    case 2:
    system ("cls") ;
    consultaSaldo ();
    system ("cls");
    main();
    case 3:
    system ("cls") ;
    deposito ();
    system ("cls");
    main();       
    case 4:
    system ("cls") ;
    saque ();
    system ("cls");        
	main();
	case 5:
	exit(1);	
 default:
 	printf("Opcao invalida:\n");
}
}while(op!=5);
system("pause");
}
