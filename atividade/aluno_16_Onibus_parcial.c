#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct informacao_rota{
    int num, assentos[16];
    char origem[25], destino[25];
    float valor;
}informacao_rota;
typedef struct passageiro{
    char nome[30], cpf[12], rg[12];
    int lugar[16];
    float total_pagar;
}passageiro;
informacao_rota rota[5];
passageiro dados[5];
void menu();
void cadastro_rota();
void realizar_venda();
void imprimir_passagem();
int venda();
int main(){
    setlocale(LC_ALL,"portuguese");
    menu();
    return 0;
}
void menu(int esgotado){
    int opcao, cont=0;
    do{ system("cls");
        printf("**************Menu**************\n");
        printf("* (1) - Cadastro de Rota  (0.5)*\n");
        printf("* (2) - Realizar Venda    (2.0)*\n");
        printf("* (3) - Imprimir Passagem (1.0)*\n");
        printf("* (4) - Relatório de Passagens Vendidas (1.0)*\n");
        printf("* (0) - Sair              (0.5)*\n");
        printf("*                              *\n");
        printf("********************************\n");
        printf(" Qual sua opção...");
        scanf("%d",&opcao); system("cls");
        switch(opcao){
        case 0:
            exit(0);
            break;
        case 1:
            if(esgotado<5){
                    cont++;
            cadastro_rota(cont);
            }else{
                printf("Cadastro de rota esgotado...");
                getch();
            }
            break;
        case 2:
            realizar_venda();
            break;
        case 3:
            imprimir_passagem();
            break;
        case 4:
            break;
        default:
            system("cls");
            printf("\n\nOpção Invalida..."); system("pause");
        }
    }while(opcao!=0);
}
void cadastro_rota(int i){
    char novo;
    printf("\n\nNovo Cadastro de Rota... (s/n)");
    fflush(stdin); scanf("%c",&novo);
    while(novo=='s'){ system("cls");
        printf("Informe numero da Rota %d: ",i);
        scanf("%d",&rota[i].num);
        printf("Informe a Origem: ");
        fflush(stdin); gets(rota[i].origem);
        printf("Informe o Destino: ");
        fflush(stdin); gets(rota[i].destino);
        printf("Valor da Passagem: ");
        scanf("%f",&rota[i].valor);
        if(i>4){
            printf("Voce atingiu o limite de cadastro 5 rota\n\n");
            printf("Sair do Cadastro..."); getch();
            i=5;
            menu(i);
            break;
        }else{
            i++;
        printf("\n\nNovo Cadastro de Rota... (s/n)");
        fflush(stdin); novo=getchar();
        }
    }
}
void realizar_venda(int ocupado){
    int menu,i,x,a;
    char buscardestino[25], buscar;
    do{ system("cls");
    printf("(1) - Buscar Destino: \n(0) - Sair...\n"); fflush(stdin);
    scanf("%d",&menu);
    switch(menu){
    case 0:
        break;
    case 1:
        do{ system("cls");
        printf("%d - Buscar destino de Viagem...");
        fflush(stdin);
        gets(buscardestino);
        for(i=1;i<=5;i++){
        if(!strcmp(buscardestino,rota[i].destino)){
            x=0;
            printf("Origem : %s\n",rota[i].origem);
            printf("Destino: %s\n",rota[i].destino);
            printf("Valor  : R$ %.0f,00\n",rota[i].valor);
            printf("Assento: \n");
            if(ocupado<17){
            for(a=1;a<=16;a++){
                if(rota[i].assentos[a]==0){
                    printf("\tPoltrona %d = Livre\n",a);
                }else { printf("\tPoltrona %d = Ocupada\n",a); }
            }}else printf("lotado");
            venda(i);
            break;
        }else{ x=1;}
        }
        if(x!=0){ printf("\n\nDestino não Encontrado\n\n");}
        printf("Nova Buscar...(s/n)"); buscar=getchar();
        }while(buscar=='S'|| buscar=='s');
        break;
    }
    }while(menu!=0);
}
int venda(int i){
    char comprar;
    int lugar, ocupado=0, a;
    printf("Deseja realizar venda da passagem: (s/n)");
    fflush(stdin);  scanf("%c",&comprar);
    while(comprar=='s'|| comprar=='S'){
            system("cls");
        printf("Vendas de Passagem:\n\n");
        printf("Nome: "); fflush(stdin); gets(dados[i].nome);
        printf("CPF : "); fflush(stdin); gets(dados[i].cpf);
        printf("RG  : "); fflush(stdin); gets(dados[i].rg);
        printf("Destino: %s\n",rota[i].destino);
        printf("Origem : %s\n",rota[i].origem);
        printf("Valor: R$ %.0f,00\n",rota[i].valor);
        printf("Informe a poltrona de 1 a 16: ");
        scanf("%d",&lugar);
        if(lugar>=1 && lugar<=16){
            for(a=1;a<=16;a++){
                    rota[i].assentos[a]=0;
        if(rota[i].assentos[lugar-1]==0){
                    rota[i].assentos[lugar-1]=1;
                    ocupado++;
                    void realizar_venda(ocupado);
                printf("\nVenda da poltrona número %d Efetivada\n",lugar);
            }else
            {printf("Ocupado");}}
        }else
    {
        printf("Lugar Invalido...");
    }
        printf("\n\nVenda Realizada com sucesso\n\n");
        getch();
        break;
    }
}
void imprimir_passagem(){
char nova, passagem[25];
int i;
do{ system("cls");
printf("Imprimir passagem: \n\n");
printf("Informe cpf do passageiro: ");
fflush(stdin); gets(passagem);
for(i=1;i<=5;i++){
if(!strcmp(strupr(passagem), strupr(dados[i].cpf))){
        printf("Nome: %s\n",dados[i].nome);
        printf("CPF : %s\n",dados[i].cpf);
        printf("RG  : %s\n",dados[i].rg);
        printf("Destino: %s\n",rota[i].destino);
        printf(" Origem: %s\n",rota[i].origem);
        printf("  Valor: R$%.0f,00\n",rota[i].valor);

}}
printf("Imprim nova passagem (s/n)..."); scanf("%c",&nova);

}while(nova=='s'||nova=='S');
}
