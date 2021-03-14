#include <stdio.h>
int main()
{
     int a[12][4], l, c, menu, soma, qtd, lugar, t, qa;
     qtd = 0;
     soma = 0;
     qa = 0;
     menu = 0;
     t = 0;
     for (l=0;l<12;l++)
     {
        for (c=0;c<4;c++)
        {
            qtd++;
            a[l][c] = qtd;
            }
            }
     while (menu!=6)
     {
     printf("\n**********menu***********");
     printf("\n*1-vendidas             *");
     printf("\n*2-vagas na janela      *");
     printf("\n*3-vagas no corredor    *");
     printf("\n*4-vender passagem      *");
     printf("\n*5-total arrecadado     *");
     printf("\n*6-sair                 *");
     printf("\n*************************");
     printf("\nopcao: ");
     scanf("%d", &menu);
     system("cls");
     switch (menu)
     {
            case 1:
                 for (l=0;l<12;l++)
                 {
                     for (c=0;c<4;c++)
                     {

                        if (a[l][c]==0)
                         {
                              printf("[ v] ");
                              }
                              else
                              {
                                  printf("[ %d] ", a[l][c]);
                                  }
                              }
                              printf("\n");
                              }
            break;
            case 2:
                 for (l=0;l<12;l++)
                 {
                     for (c=0;c<4;c++)
                     {
                       if (a[l][c]==0)
                         {
                              printf("[ v ]");
                              }
                        else  if (c==0 || c==3)
                         {
                                  printf("[ %d] ", a[l][c]);
                                  }

                         else if (c==1 || c==2)
                         {
                              printf("[  ] ");
                              }
                              }
                              printf("\n");
                              }
            break;
            case 3:
                 for (l=0;l<12;l++)
                 {
                     for (c=0;c<4;c++)
                     {
                     if (a[l][c]==0)
                                  {
                                       printf("[ v] ");
                                       }
                       else  if (c==1 || c==2)
                         {
                                  printf("[ %d] ", a[l][c]);
                                  }
                                  else if (c==0 || c==3)
                                  {
                                       printf("[  ] ");
                                       }
                                       }
                                       printf("\n");
                                       }
            break;
            case 4:
                 volta:
                 printf("\nvalor da passagem 15R$");
                 printf("\ndigite o lugar: ");
                 scanf("%d", &lugar);
                 if (lugar>=1 && lugar<=48)
                 {
                 soma++;
                 qa++;
                 for (l=0;l<12;l++)
                 {
                     for(c=0;c<4;c++)
                     {
                          if (a[l][c]==lugar)
                          {
                              a[l][c]=0;
                              }
                              }
                              }
                              }
                 else
                 {
                     printf("\nlugares de 1 a 48\n");
                     goto volta;
                     }
            break;
            case 5:
                 printf("\nvalor da passagem 15R$");
                 for (l=0;l<12;l++)
                 {
                     for (c=0;c<4;c++)
                     {
                         if (a[l][c]==0)
                         {
                         t = soma * 15;
                         }
                         }
                         }
                         printf("\npassagens vendidas %d", qa);
                         printf("\ntotal %dR$\n", t);
             break;
             default :
                     printf("\ndigite uma opcao valida\n");
             break;
             }
             }
             }
