#include <stdio.h>
#include <stdlib.h>
void menu(){
	int op;
    printf("\n\t\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\n");
    printf("\t\333                                 \333\n");
    printf("\t\333 0-Sair:                         \333\n");
    printf("\t\333 1-Tipos de dados:               \333\n");
    printf("\t\333 2-Variaveis e constantes:       \333\n");
    printf("\t\333 3-Operadores basicos:           \333\n");
    printf("\t\333 4-Estrutura de Controle:        \333\n");
    printf("\t\333 5-Tipos de dados avancados:     \333\n");
    printf("\t\333 6-Funcoes e procedimentos:      \333\n");
    printf("\t\333 7-Desenvolvedores:              \333\n");
    printf("\t\333 8-Teste de conhecimento:        \333\n");
    printf("\t\333                                 \333\n");
    printf("\t\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\n");
 

return 0;}
float tipo1();
int vari2();
int Oper3();
int estr4();
int dado5();
int func6();
int dese7();
int test8();

int main (){
    char nome[25];
    int op;
    printf("\t*=============================================*\n");
    printf("\t|  Instituicao - Fametro                      |\n");
    printf("\t|  Curso - Sistema de Informacao              |\n");
    printf("\t|  Aluno - Gilber Carvalho                    |\n");
    printf("\t|  Primeiro periodo - 2 semestre              |\n");
    printf("\t|                                             |\n");
    printf("\t*=============================================*\n");
    printf("\n");
    printf("\t*=============================================*\n");
    printf("\t| App Educativo                               |\n");
    printf("\t*=============================================*\n");
    printf("\tPressione \"enter\" para continuar...");
    getchar();
    system("cls");
    system("color 1f");
    printf("-----------------------------------------------------------------\n");
    printf("O app e ideal para estudantes ou pessoal que queira aprender de \n");
    printf("forma simples e rapida, logica de programacao assim desenvolvendo\n");
    printf("habilidades e conhecimentos na area de tecnologia. O app  e educativo\n");
    printf("ira ajudar os usuarios a entender sobre as principais funcoes de \n");
    printf("cada comando como:\n");
    printf("------------------------------------------------------------------\n");
    printf("\tTipos de dados:\n");
    printf("\tVariaveis e constantes:\n");
    printf("\tOperadores basicos:\n");
    printf("\tEstrutura de Controle:\n");
    printf("\tTipos de dados avancados:\n");
    printf("\tFuncoes e procedimentos:\n");

    printf("Ha tambem uma opcao para teste para saber o seu nivel de conhecimento\n");
    printf("em cada licao:\n");
    printf("\t A interface e tao facil de usar que mesmo uma crianca pode        \n");
    printf("aproveitar o aplicativo.\n");
    printf("\nPara comecar informe o nome do partcipante e em seguida pressione \"enter\"\n");
    printf("\nNome do usuario:");
    gets(nome);
    system("cls");
    system("color 0f");
    printf("\n\tSeja Bem Vindo \"%s\"\n",nome);
    printf("\n");
    menu();
    printf("\t");
 printf("\tO que deseja fazer ?");
    scanf("%d",&op);
    if(op==1){
	                           tipo1();
    
	}
    if(op==2){vari2();}
    if(op==3){Oper3();}
    if(op==4){estr4();}
    if(op==5){dado5();}
    if(op==6){func6();}
    if(op==7){dese7();}
    if(op==8){test8();}
    if(op<0 || op>=9){
        printf("Opcao Invalida!!\n\tTente Novamente.\n");
        scanf("%d",&op);
    }
return 0;

}
float tipo1(){
	float x,y,soma;
	char n;
    system("color 2f");
    do{
printf("\t\tSoma de dois numeros: \n\n");

printf("\t\tInforme um valor:");
scanf("%f",&x);
printf("\t\tInforme outro valor: ");
scanf("%f",&y);
soma= (x+y);
printf("=======================================\n");
printf("\t\tA soma e: %0.f. \n",soma);
printf("=======================================\n\n");
printf("Continuar somando. (s/n)\n");
n=getche();
system("cls");
menu();
}while(n=='s');
}

int vari2(){system("color 3f");
printf("Estamos em construcao;");}
int Oper3(){system("color 4f");
printf("Estamos em construcao;");}
int estr4(){system("color 5f");
printf("Estamos em construcao;");}
int dado5(){system("color 6f");
printf("Estamos em construcao;");}
int func6(){system("color 7f");
printf("Estamos em construcao;");}
int dese7(){system("color 9f");
printf("Estamos em construcao;");}
int test8(){
int sort, num, i;
char x;
system("cls");
do{
    system("color 3f");
    sort=rand()%501;
    printf("\t\t*============================================*\n");
    printf("\t\t|      Adivinhe o numero: Teste 8.           |\n");
    printf("\t\t*============================================*\n");
    printf("\t\t 1 - O numero <???> esta entre 0 e 500: ");
    scanf("%d",&num);
    for(i=2;i<=30;i++){
            if(num==sort){
        printf("\t\t=========================================\n");
        printf("\t\t Parabens voce acertou na %d tentativa!\n",i-1);
        printf("\t\t=========================================\n");
        break;
        }
        else if (num>sort){
            printf("\t\t%2d",i);
            printf(" - O numero %3d \x82 maior que o sorteado: ",num);
            scanf("%d",&num);
            }else{
                printf("\t\t%2d",i);
                printf(" - O numero %3d \x82 menor que o sorteado: ",num);
                scanf("%d",&num);}}
            printf("\t\t\t Jogar Novamente (s/n):");
            x=getche();
            system("cls");
}while(x=='s');
}
