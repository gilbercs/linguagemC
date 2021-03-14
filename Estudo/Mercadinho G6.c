#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct dados_produtos{
    int codigo, qtde_produto;
    float preco_unitario;
    char nome_produto[25];
}dados_produtos;
void menu();
void cadastro_produto();
int main(){
    setlocale(LC_ALL,"portuguese");
    menu();
system("pause");}
void menu(){
    int opcao;
do{
        system("cls");
printf("\n\n\n\n\t\t\t\tMercadinho G6\n\n");
printf("\t\t\t\t(0) - Sair...\n");
printf("\t\t\t\t(1) - Cadastrar Produto...\n");
printf("\t\t\t\t(2) - Cadastrar Funcionário...\n");
printf("\t\t\t\t(3) - Alterar Produto\n");
printf("\t\t\t\t(4) - Excluir Produto\n\n\n");
printf("\t\t\t\tDiga - me o que deseja fazer...");
fflush(stdin); scanf("%d",&opcao);
switch(opcao){
case 0:
    exit(0);
    break;
case 1:
    cadastro_produto();
    break;
default:
    printf("\n\nOpção Invalida...");
    }
}while(opcao!=0);
system("pause");}
void cadastro_produto(){
    int i;
    char novo;
    dados_produtos descricao[100];
    system("cls");
    printf("\n\n\t\t\t\tBem - Vindos ao Cadastro de Produtos\n\n\n");
    printf("\t\t\t\tNovo Produto(s/n)\n");
    fflush(stdin); scanf("%c",&novo);
    while(novo=='s'){
    printf("Cadastrar novo produto\n\n");
    printf("Nome do Produto  : ");
    printf("Preço Unitario   : ");
    printf("Quatidade Produto: ");
    printf("");
    printf("\n\n\t\t\t\tNovo Produto(s/n)\n");
    fflush(stdin); scanf("%c",&novo);
    }
    printf("\t\t\t\t");
    system("pause");
}
