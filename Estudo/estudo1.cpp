#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int i, vet[10], tempo, valor, a=0, p=0, logico;
    time_t tinicio, tfim; /* variaveis do "tipo" tempo */
    printf("Inicio do jogo\n");
    tinicio = time(NULL); /* marca o tempo inicial */

    do{
        /* Inicializa o gerador de numeros aleatorios */
        srand(time(NULL));
        /* Carregando o vetor com dez numeros aleatorios entre 1 e 10 */
        for(i=0; i<10; i++){
            vet[i] = rand()%10+1; /* gera numeros aleatórios entre 1 e 10 */
        }
        printf("\nEscolha um valor entre 1 e 10: ");
        scanf("%d",&valor);

        /* calcula quantas vezes o valor aparece na sequencia */
        for(i=0; i<10; i++){
            if(valor==vet[i]) a++;
        }

        if(a) printf("\nVoce marcou %d ponto(s)!", a); /* a é diferente de zero */
        else printf("\nVoce nao marcou pontos! Este valor nao esta na sequencia!");
        printf("\n\nSequencia: ");

        for(i=0; i<10; i++){
            printf("%d ",vet[i]);
        }

        p+=a; /* acumula os pontos */
        a=0; /* zera os pontos para uma nova jogada */
        printf("\n\nDigite 0 (zero) para terminar o jogo\nou qualquer outro valor para continuar jogando: ");
        scanf("%d", &logico);
    }while(logico);

    tfim = time(NULL); /* marca o tempo final */
    tempo= difftime(tfim, tinicio); /* marca a diferença tfim-tinicio */

    printf("\nFim do jogo\n");
    printf("Total de pontos: %d\n", p);
    printf("\n\nVoce jogou em %d segundo(s).\n", tempo);
    return 0;
    system("pause");
}
