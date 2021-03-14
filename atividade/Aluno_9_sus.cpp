#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef struct local{
    char rua[25], casa[25], bairro[25], cep[25];
}endereco;
typedef struct usuario{
    char login[25], senha[16];
}acesso;
struct dadosfuncionario{
    char nome[25], cpf[12], rg[11];
    char matricula[25];
    endereco end[2];
}funcionario;
dadosfuncionario f[2];
void logar();
void menuadmin();
void cadastrofuncionario();
void buscafuncionario();
int main(){
    logar();
system("pause");
}
void logar(){//entrar no sistema
    int i,a;
    char user[25], pass[16];
    printf("\n\n");
    for(i=0;i<3;i++){
    printf("\t\t\t\tLogin : ");
    fflush(stdin);
    gets(user);
    printf("\t\t\t\tSenha : ");
    fflush(stdin);
    gets(pass);
        if(!strcmp(user,"admin") && !strcmp(pass,"abc123")){
            admin();
            a=0;
            break;
        }
        else
        {a=1;
        }
    if(a!=0){
        system("cls");
        printf("\t\t\t\tUsuario nao encontrado\n");
    }
}
}
void menuadmin(){//administrator
int menu;
    do{
        system("cls");
        printf("\t\t\t\tBem vindo ao SUS Administrator\n");
        printf("\t\t\t\t(0) - Sair\n");
        printf("\t\t\t\t(1) - Cadastro Funcionario\n");
        printf("\t\t\t\t(2) - Pesquisa Funcionario\n");
        printf("\t\t\t\t");
        fflush(stdin);
        scanf("%d",&menu);
        system("cls");
        switch(menu){
            case 0:
                logar();
                break;
                case 1:
                    cadastrofuncionario();
                    break;
                    case 2:
                        buscafuncionario();
                        break;
                default:
                    printf("Opcao invalida\n");
        }
    }while(menu!=0);
    system("pause");
}
void cadastrofuncionario(){
    int i, qtd;
    printf("Quantos funcionario deseja cadastrar\n");
    scanf("%d",&qtd);
    syetem("
for(i=0;i<qtd;i++){
printf("Bem vindo ao cadastro Funcionarios\n");
printf("Digite Nome:");
fflush(stdin) ;
gets(f[i].nome);
printf("Digite C.P.F:");
fflush(stdin) ;
gets(f[i].cpf);
printf("Digite RG:");
scanf("%i",&f[i].rg);
printf("Digite Matricula:");
scanf("%i",&f[i].matricula);
system("cls");
printf("Endereco\n");
printf("Bairro:");
fflush(stdin) ;
gets(f[i].end.bairro);
printf("Rua:");
fflush(stdin) ;
gets(func[i].end.rua);
printf("Casa:");
scanf("%i",&func[i].end.casa);
printf("Cep:");
scanf("%i",&func[i].end.cep);
system("cls");
printf("Dados login:\n");
printf("Login:");
fflush(stdin) ;
gets(func[i].log.login);
printf("Senha:");
scanf("%i",&func[i].log.senha);
     
}
}
void buscafuncionario(){
}
