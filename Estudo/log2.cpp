#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char user[20];
    char pass[20];
    char login[20];
    char senha[20];
} cadastro;

char *cadastro_login()
{
    struct cadastro usuario[1];

   // for (a=0;a<3;a++)
   // {
   //     b = a+1;
        system("cls");
        printf("\n\tCadastro");
        puts("\n\n\tDigite o login: ");
        printf("\t");
        scanf(" %s",usuario[0].user);
   // }
    return usuario[0].user;
}

char *cadastro_senha()
{
    struct cadastro password[1];

    puts("\tDigite a senha: ");
    printf("\t");
    scanf(" %s",password[0].pass);
    system("cls");
    return password[0].pass;
}

int main(void)
{
    int a,b,c,d,nc;
    int logado;
    int op;
    //char user[3][20],pass[3][20];
    char login[20], senha[20];
    struct cadastro logando[3];

    printf("1 - Cadastro\n");
    printf("2 - Logar\n");
    printf("3 - Fechar\n");
    scanf("%d", &op);
    if (op == 1) {
        printf("\nQuantos cadastros deseja fazer? \n");
        scanf("%d",&nc);
        for (a=0;a<nc;a++){
            strcpy(logando[a].user, cadastro_login());
            strcpy(logando[a].pass, cadastro_senha());
        }
    }
    else if (op == 3) exit(0);
    system("cls");
    printf("\n\tLogon\n");
    printf("\n\tLogin: ");
    scanf(" %s",&login);
    printf("\n\tSenha: ");
    scanf(" %s",&senha);


    for (c=0;c<3;c++)
    {
        if ((strcmp(login,logando[c].user)!=0) || (strcmp(senha,logando[c].pass)!=0))
        {
            logado= 1; //login e/ou senha incorretos
        }
        else if(strcmp(login,logando[c].user)==0)
        {
            if (strcmp(senha,logando[c].pass)==0)
            {
                logado = 2; //logado com sucesso
                break;
            }

        }
    }

    if (logado==1)
    {
        printf("\nLogin e/ou senha incorretos(s)\n");
    }
    else if (logado==2)
    {
        printf("\nLogado com sucesso!\nBem-vindo(a) %s\n",login[0]);
    }

    return 0;
}
