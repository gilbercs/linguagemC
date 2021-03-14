#include "stdio.h"
#define LIN     4
#define COL     9

void relatorio (char onibus[LIN][COL]) {
    int janela = 0, ocupadas = 0;

    printf ("\n123456789\n");
    for(int linha = 0; linha < LIN; linha++) {
        for(int coluna = 0; coluna < COL; coluna++) {
            char p = onibus[linha][coluna];
            printf ("%c", p);
            if (p == 'x') {
                ocupadas++;
                if (linha == 0 || linha == LIN-1) janela++;
            }
        }
        printf ("\n");
    }
    printf("Vagas ocupadas janela: %d\n", janela);
    printf("Vagas ocupadas corredor: %d\n", ocupadas - janela);
    printf("Poltronas ocupadas: %d\n", ocupadas);
    printf("Poltronas disponíveis: %d\n\n", (LIN*COL)-ocupadas);
}

void preencher (char onibus[LIN][COL], char fila, char lado, char poltrona) {
    int lin, col = fila-'0';
    if (lado == 'E' || lado == 'e') {
        if (poltrona == 'J' || poltrona == 'j') lin = 3;
        else if (poltrona == 'C' || poltrona == 'c') lin = 2;
        else {
            printf("Erro na escolha da poltrona!\n\n");
            return;
        }
    }
    else if (lado == 'D' || lado == 'd') {
        if (poltrona == 'J' || poltrona == 'j') lin = 0;
        else if (poltrona == 'C' || poltrona == 'c') lin = 1;
        else {
            printf("Erro na escolha da poltrona!\n\n");
            return;
        }
    }
    else {
        printf("Erro na escolha da poltrona!\n\n");
        return;
    }
    if (onibus[lin][col] == 'x')
        printf ("Poltrona já está ocupada.\n\n");
    else {
        onibus[lin][col] = 'x';
        printf ("Poltrona preenchida de forma correta.\n\n");
    }
    //printf("%c %c %c %d %d\n\n", fila, lado, poltrona, lin, col);
}

main (void) {
    char onibus[LIN][COL];
    char opt;

    for(int linha = 0; linha < LIN; linha++)
        for(int coluna = 0; coluna < COL; coluna++)
            onibus[linha][coluna] = '0';
    while (opt != 'S' && opt != 's') {
        printf("(P)reencher uma vaga no ônibus, exibir (R)elatório de vagas ou (S)air?\n");
        scanf("%c%*c", &opt);
        switch (opt) {
            case 'P':
            case 'p':
                char fila, lado, poltrona;
                printf("Digite a fileira a ser preenchida (0 a 8): ");
                scanf("%c%*c", &fila);
                printf("Digite o lado (D ou E): ");
                scanf("%c%*c", &lado);
                printf("Digite a poltrona (J ou C): ");
                scanf("%c%*c", &poltrona);
                preencher(onibus, fila, lado, poltrona);
            break;
            case 'R':
            case 'r':
                relatorio(onibus);
        }
    }
}
