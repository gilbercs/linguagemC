#include <stdio.h>
int main ()
{
    int num, soma=0, i, valor;//soma dos números inteiros
    printf("\n\tDigite a quantidade de inteiros que voce deseja adicionar./De enter/\n");
    printf("\t\t\t\t");
    scanf("%d", &num);
    getchar();
    system("cls");
    printf("\n\tDigite %d numeros inteiro:\n",num);
    for(i= 1;i <= num; i++){
        printf("\t\t\t\t");
        scanf("%d",&valor);
        soma= soma + valor;
    }
    printf("\n\tSoma dos numeros inteiros inseridos e: %d",soma);
    printf("\n");
    return 0;
}
