/*adicione o cadastro de funcionario. nome,rg,cpf e matricula e medico: nome e crm e endereço
e a funcionalidade realizar consultar: Nome do medico nome do paciente sintomas, exame, receita
(descrição e posologia) cada perfil tera sua funcionalidades: funcionarios cadastra(medico e paciente),pesquisa paciente.
e o perfil médico somente realiza consulta.
todos os dois perfis saem com a tela de login.Pois somente a tela de login sai do sistema.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int logar();
void administrator();
void menufuncionario();
void menumedico();
void cadastrofuncionario();
void cadastromedico();
void cadastropaciente();
void buscarfuncionario();
void buscarmedico();
void buscapaciente();
void realizarconsulta();
void historicopaciente();
typedef struct cad_login{
    char admin[25], senha[16];
}cad_login;

typedef struct local{
    char bairro[25], rua[25], casa[25], cep[10];
}local;
typedef struct paciente{
    char nome[25], cpf[12], queixa[30];
    int rg;
    local end;
}paciente;
typedef struct funcionario{
    char nome[25], cpf[12];
    int rg, matr;
    local end;
    cad_login entrar;
}funcionario;
typedef struct medico{
    char crm[12], doutor[25];
    local end;
    cad_login entrar;
}medico;
medico med[4];
paciente pct[4];
funcionario func[4];
int main(){
    logar();
system("pause");
}
int logar(){
    system("cls");
    char login[25], senha[16];
    int i=0, a;
    do{
        i++;
        printf("\n\n");
    printf("\t\t\tBem - Vindo ao sistema. sair(sair)\n\n");
    printf("\t\t\tUsuario: ");
    fflush(stdin);
    gets(login);
    printf("\t\t\tSenha : ");
    fflush(stdin);
    gets(senha);
    if(!strcmp(login,"admin") && !strcmp(senha,"abc123")){
        administrator();
        break;
    }
    else
    if(!strcmp(login,func[i].entrar.admin) && !strcmp(senha,func[i].entrar.senha)){
        menufuncionario();
        break;
    }
    else
    if(!strcmp(login,med[i].entrar.admin) && !strcmp(senha,med[i].entrar.senha)){
        menumedico();
        break;
    }
    else
    printf("\t\t\tUsuario nao encontrado\n");
}while(login=="sair");
}
void administrator(){
    int op;
    system("cls");
    printf("\n\n");
    printf("\t\t\t\tBem vindo ao SUS\n");
    do{
        printf("\t\t\t\t(0) - Sair\n");
        printf("\t\t\t\t(1) - Cadastro de Funcionario\n");
        printf("\t\t\t\t(2) - Pesquisa Funcionario\n");
        printf("\t\t\t\t");
        scanf("%d",&op);
        switch(op){
            case 0:
                logar();
                break;
                case 1:
                   cadastrofuncionario();
                    break;
                    case 2:
                        buscarfuncionario();
                        break;
                        default:
                            printf("Opcao invalida\n");
                        }
    }while(op!=0); 
}
void menufuncionario(){
    int op;
    system("cls");
    printf("\n\n");
    printf("\t\t\t\tBem vindo ao SUS, Colaborador\n");
    do{
        printf("\t\t\t\t(0) - Sair\n");
        printf("\t\t\t\t(1) - Cadastro de Paciente\n");
        printf("\t\t\t\t(2) - Cadastro de Medico\n");
        printf("\t\t\t\t(3) - Pesquisa Paciente\n");
        printf("\t\t\t\t(4) - Pesquisa Medico\n");
        printf("\t\t\t\t");
        scanf("%d",&op);
        switch(op){
            case 0:
                logar();
                break;
                case 1:
                   cadastropaciente();
                    break;
                    case 2:
                        cadastromedico();
                        break;
                        case 3:
                            buscapaciente();
                            break;
                        case 4:
                            buscarmedico();
                            break;
                        default:
                            printf("Opcao invalida\n");
                        }
    }while(op!=0); 
}
void menumedico(){
    int op;
    int menu;
    do{
        printf("\t\t\t\tBem - Vindo ao SUS, doutor\n");
        printf("\t\t\t\t(0) - Sair\n");
        printf("\t\t\t\t(1) - Realizar Consulta\n");
        printf("\t\t\t\t(2) - Busca historico\n");
        printf("\t\t\t\t");
        scanf("%d",&op);
        switch(op){
            case 0:
                logar();
                break;
                case 1:
                    break;
                    case 2:
                        break;
                        default:
                            printf("Opcao invalida\n");
                        }
    }while(op!=0); 

}
void cadastrofuncionario(){
    int i=0;
    char qtd;
    do{
        system("cls");
        i++;
        printf("\n\n");
        printf("\t\t\t\tCADASTRO DE FUNCIONARIO\n\n");
        printf("\t\t\t\tMatricula: ");
        scanf("%d",&func[i].matr);
        printf("\t\t\t\tNome : ");
        fflush(stdin);
        gets(func[i].nome);
        printf("\t\t\t\tCPF  : ");
        fflush(stdin);
        gets(func[i].cpf);
        printf("\t\t\t\tRG   : ");
        scanf("%d",&func[i].rg);
        printf("\t\t\t\tEndereco\n");
        printf("\t\t\t\tRua : ");
        fflush(stdin);
        gets(func[i].end.rua);
        printf("\t\t\t\tCasa : ");
        fflush(stdin);
        gets(func[i].end.casa);
        printf("\t\t\t\tBairro : ");
        fflush(stdin);
        gets(func[i].end.bairro);
        printf("\t\t\t\tCEP : ");
        fflush(stdin);
        gets(func[i].end.cep);
        printf("\t\t\t\tCadastrar usuario\n");
        printf("\t\t\t\tLogin : ");
        fflush(stdin);
        gets(func[i].entrar.admin);
        printf("\t\t\t\tSenha : ");
        fflush(stdin);
        gets(func[i].entrar.senha);
        printf("\t\t\t\tDesejar cadastrar outro funcionario\n");
        printf("\t\t\t\t(S) - Sim\n");
        printf("\t\t\t\t(N) - Nao\n");
        printf("\t\t\t\t");
        scanf("%s",&qtd);   
    }while(qtd!='n');
}
void cadastromedico(){
    int i=0;
     char qtd;
    do{
        system("cls");
        i++;
        printf("\n\n");
        printf("\t\t\t\tBem Vindo ao SUS, Cadastrar Medico\n\n");
        printf("\t\t\t\tC R M: ");
        scanf("%d",&med[i].crm);
        printf("\t\t\t\tNome : ");
        fflush(stdin);
        gets(med[i].doutor);
        printf("\t\t\t\tEndereco\n");
        printf("\t\t\t\tRua : ");
        fflush(stdin);
        gets(med[i].end.rua);
        printf("\t\t\t\tCasa : ");
        fflush(stdin);
        gets(med[i].end.casa);
        printf("\t\t\t\tBairro : ");
        fflush(stdin);
        gets(med[i].end.bairro);
        printf("\t\t\t\tCEP : ");
        fflush(stdin);
        gets(med[i].end.cep);
        printf("\t\t\t\tCadastrar usuario\n");
        printf("\t\t\t\tLogin : ");
        fflush(stdin);
        gets(med[i].entrar.admin);
        printf("\t\t\t\tSenha : ");
        fflush(stdin);
        gets(med[i].entrar.senha);
        printf("\t\t\t\tDesejar cadastrar outro funcionario\n");
        printf("\t\t\t\t(S) - Sim\n");
        printf("\t\t\t\t(N) - Nao\n");
        printf("\t\t\t\t");
        scanf("%s",&qtd);   
    }while(qtd!='n');
}
void buscarfuncionario(){//nao esta realizado o comparação exata
    char cpfpesq [16];
    int i,a;
    int op;
    do{
printf("\t\t\t\tPesquisa funcionario por cpf\n");       
printf("\t\t\t\tInforme CPF :");       
fflush(stdin);
gets(cpfpesq);
for(i=0;i<100;i++){
if(!strcmp(func[i].cpf,cpfpesq)){
printf("\t\t\t\tFicha do Funcionario\n");       
printf("\t\t\t\tNome : %s\n",func[i].nome);       
printf("\t\t\t\tCPF  : %s\n",func[i].cpf);       
printf("\t\t\t\tRG   : %i\n",func[i].rg);       
printf("\t\t\t\tEndereco\n");       
printf("\t\t\t\tCasa : %s\n",func[i].end.casa);       
printf("\t\t\t\tCep  : %s\n",func[i].end.cep);       
printf("\t\t\t\tRua  : %s\n",func[i].end.rua);       
printf("\t\t\t\tBairro: %s\n",func[i].end.bairro);
a=0;
break;      
}else{
    a=1; 
}
}
if(a!=0){
    printf("CPF nao encontrado\n\n");
}
printf("Deseja fazer outra pesquisa\n");
printf("(0) - Sim\n");
printf("(1) - Nao\n");
fflush(stdin);
scanf("%d",&op);
}while(op!=1);
system("pause");
}
void buscarmedico(){
        char buscacrm[16];
    int i,a;
    int op;
    do{
printf("\t\t\t\tPesquisa Medico por CRM\n");       
printf("\t\t\t\tInforme CRM : ");       
fflush(stdin);
gets(buscacrm);
for(i=0;i<100;i++){
if(!strcmp(func[i].cpf,buscacrm)){
printf("\t\t\t\tFicha do Medico\n");       
printf("\t\t\t\tCRM     : %s\n",med[i].crm);       
printf("\t\t\t\tDoutor  : %s\n",med[i].doutor);              
printf("\t\t\t\tEndereco\n");       
printf("\t\t\t\tCasa : %s\n",med[i].end.casa);       
printf("\t\t\t\tCep  : %s\n",med[i].end.cep);       
printf("\t\t\t\tRua  : %s\n",med[i].end.rua);       
printf("\t\t\t\tBairro: %s\n",med[i].end.bairro);
a=0;
break;      
}else{
    a=1; 
}
}
if(a!=0){
    printf("CRM nao encontrado\n\n");
}
printf("Deseja fazer outra pesquisa\n");
printf("(0) - Sim\n");
printf("(1) - Nao\n");
fflush(stdin);
scanf("%d",&op);
}while(op!=1);
system("pause");
}
void cadastropaciente(){
    int i=1;
    char qtd;
    do{
        system("cls");
        i++;
        printf("Cadastro de Paciente\n");
        printf("Nome : ");
        fflush(stdin);
        gets(pct[i].nome);
        printf("CPF  : ");
        fflush(stdin);
        gets(pct[i].cpf);
        printf("RG   : ");
        scanf("%d",&pct[i].rg);
        printf("Queixa principal: ");
        fflush(stdin);
        gets(pct[i].queixa);
        printf("Endereco\n");
        printf("Rua : ");
        fflush(stdin);
        gets(pct[i].end.rua);
        printf("Casa : ");
        fflush(stdin);
        gets(pct[i].end.casa);
        printf("Bairro : ");
        fflush(stdin);
        gets(pct[i].end.bairro);
        printf("CEP : ");
        fflush(stdin);
        gets(pct[i].end.cep);
        
        printf("Desejar cadastrar outro funcionario\n");
        printf("\t\t(S) - Sim\n");
        printf("\t\t(N) - Nao\n");
        printf("\t\t");
        scanf("%s",&qtd);   
    }while(qtd!='n');
}
void buscapaciente(){//nao esta realizado o comparação exata
    char cpfpesq [16];
    int i,a;
    int op;
    do{
printf("Pesquisa paciente por cpf\n");       
printf("Informe CPF :");       
fflush(stdin);
gets(cpfpesq);
for(i=0;i<100;i++){
if(strcmp(pct[i].cpf,cpfpesq)==0){
printf("Ficha do Paciente\n");       
printf("Nome : %s\n",pct[i].nome);       
printf("CPF  : %s\n",pct[i].cpf);       
printf("RG   : %i\n",pct[i].rg);       
printf("Endereco\n");       
printf("Casa : %s\n",pct[i].end.casa);       
printf("Cep  : %s\n",pct[i].end.cep);       
printf("Rua  : %s\n",pct[i].end.rua);       
printf("Bairro: %s\n",pct[i].end.bairro);
a=0;
break;      
}else{
    a=1; 
}
}
if(a!=0){
    printf("CPF nao encontrado\n\n");
}
printf("Deseja fazer outra pesquisa\n");
printf("(0) - Sim\n");
printf("(1) - Nao\n");
fflush(stdin);
scanf("%d",&op);
}while(op!=1);
system("pause");
}
void realizarconsulta(){
}
void historicopaciente(){
}
