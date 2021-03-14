#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void prof_odair();
void prof_vicente();
void prof_bruno();
void prof_frank();
void prof_jaqueline();
void prof_nilcicleia();
void aluno();
int main(){
	int menu;
    do{
    system("cls");
    system("color 0f");
    printf("\n\t\t\t\t\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\n");
    printf("\t\t\t\t\333                                                   \333\n");
	printf("\t\t\t\t\333                Menu de Opcoes                     \333\n");
    printf("\t\t\t\t\333\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\333\n");
    printf("\t\t\t\t\333                                                   \333\n");
    printf("\t\t\t\t\333 (1)-Arquitetura e Organizacao de Computadores:    \333\n");
    printf("\t\t\t\t\333 (2)-Introducao ao CaLculo Diferencial e Integral: \333\n");
    printf("\t\t\t\t\333 (3)-Linguagem de Programacao Estruturada:         \333\n");
	printf("\t\t\t\t\333 (4)-Metodologia do trabalho Cientifico:           \333\n");
    printf("\t\t\t\t\333 (5)-Estrutura de dados:                           \333\n");
    printf("\t\t\t\t\333 (6)-Contabilidade:                                \333\n");
    printf("\t\t\t\t\333 (7)-Desenvolvedores:                              \333\n");
    printf("\t\t\t\t\333 (0)-Sair.                                         \333\n");
    printf("\t\t\t\t\333                                                   \333\n");
    printf("\t\t\t\t\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\737\n");
    printf("\t\t\t\tO que deseja fazer\n");
    printf("\t\t\t\t");
	scanf("%d",&menu);
    switch(menu){
    	case 1:
    		prof_odair();
    		break;
    		case 2:
            prof_vicente();
            break;
            case 3:
            prof_bruno();
            break;
            case 4:
            prof_frank();
            break;
            case 5:
            prof_jaqueline();
                break;
            case 6:
            prof_nilcicleia();
                break;
            case 7:
                aluno();
                break;
            case 0:
                exit(0);
            default:
                system("cls");
            	    printf("\n\n");
            		printf("\t\tOpcao Invalida: \n\n");//erro ao voltar para o menu principal
            		printf("\t\t");
            		system("pause");
            }//fim switch


}while(menu!=0);
    system("pause");
}//fim main
//Primeira Opção do curso
void prof_odair(){
	int fase, a_1=0,e_1=0;
	char resp[1],sair;
	do{
    system("cls");
    system("color 1f");
	printf("\t\tArquitetura e Organização de Computadores: \n\n");
	printf("\t\t\tProf: Odair :\n\n");
	printf("\t\t\tExercicio: \n");
	printf("\t\t\t (1)- Facil: \n");
	printf("\t\t\t (2)- Medio: \n");
	printf("\t\t\t (3)- Gabarito: \n");
	printf("\t\t\t");
	scanf("%d",&fase);
	switch (fase){
	    case 1://Modo facil
	        //1ª-questao facil
	        system("cls");
	        printf("\n");
	        printf("\t\t\t===>Modo facil<====\n\n");
        printf("\t\t1- O armazenamento dinamicamente expansível ocupa espaço no disco rígido físico e\n");
        printf("\t\tpode crescer ilimitadamente, chegando a ocupar todo o espaço do disco.: \n");
		printf("\n");
		printf("\t\t(a) - Certo.\n");
		printf("\t\t(b) - Errado.\n");
		printf("\t\tResposta ?\n");
		printf("\t\t");
		fflush(stdin);
		gets(resp);
		if(!strcmp(resp,"b") || !strcmp(resp,"B")){
            printf("\tParabens!! voce acertou!!:\n\n");
            a_1=a_1+1;
		}
		else{
            printf("\tVoce Errou! Volte a estudar!\n\n");
            e_1=e_1+1;
		}
		printf("\t\tPressione \"enter\"para continuar...");
		getchar();
		system("cls");
		//2ª questao facil
		printf("\t\t\t===>Modo facil<====\n\n");
		printf("\t\t2- As instruções CISC são mais simples que as instruções RISC, por isso, os compiladores para máquinas\n");
        printf("\tCISC são mais complexos, visto que precisam compensar a simplificação presente nas instruções. Entretanto\n");
        printf("\tse for usado pipeline, a complexidade do compilador CISC é reduzida, pois a arquitetura pipeline evita a \n");
        printf("\tnecessidade de reordenação inteligente de instruções.\n");
		printf("\n");
		printf("\t\t(a) - Certo.\n");
		printf("\t\t(b) - Errado.\n");
		printf("\t\tResposta ?\n");
		printf("\t\t");
		fflush(stdin);
		gets(resp);
		if(!strcmp(resp,"b") || !strcmp(resp,"B")){
            printf("\tParabens!! voce acertou!!:\n\n");
            a_1=a_1+1;
		}
		else{
            printf("\tVoce Errou! Volte a estudar!\n\n");
            e_1=e_1+1;
		}
		printf("\t\tPressione \"enter\"para continuar...");
		getchar();
		system("cls");
		//3ª- questao facil
		printf("\t\t\t===>Modo facil<====\n\n");
		printf("\t\t3- No programa em linguagem de alto nivel, os interpretadores executam os passos definidos\n");
		printf("\tpara cada instrucao e produzem o mesmo resultado que o do programa compilado. Entretanto, a\n");
		printf("\texecucao de um programa em linguagem de alto nivel com uso de interpretadores e mais lenta que\n");
		printf("\ta execução de um programa compilado, uma vez que precisa examinar cada instrucao no programa-fonte\n");
		printf("\t,a medida que ela ocorre, e desviar para a rotina que executa a instrucao.\n");
		printf("\n");
		printf("\t\t(a) - Certo.\n");
		printf("\t\t(b) - Errado.\n");
		printf("\t\tResposta ?\n");
		printf("\t\t");
		fflush(stdin);
		gets(resp);
		if(!strcmp(resp,"a") || !strcmp(resp,"A")){
            printf("\tParabens!! voce acertou!!:\n\n");
            a_1=a_1+1;
		}
		else{
            printf("\tVoce Errou! Volte a estudar!\n\n");
            e_1=e_1+1;
		}
		printf("\t\tPressione \"enter\"para continuar...");
		getchar();
		system("cls");
		//4ª -questao facil
		printf("\t\t\t===>Modo facil<====\n\n");
		printf("\t\t4- Um disco para armazenamento de dados do tipo WORM normalmente pode ser um. \n");
		printf("\t\t(a)-CD-R ou CD-ROM, apenas.\n");
		printf("\t\t(b)-DVD-R ou DVD-ROM, apenas.\n");
		printf("\t\t(c)-CD-R ou DVD-R, apenas.\n");
		printf("\t\t(d)-CD-ROM ou DVD-ROM, apenas.\n");
		printf("\t\t(e)-CD-R, CD-ROM, DVD-R ou DVD-ROM.\n\n");
		printf("\t\tResposta ?\n");
		printf("\t\t");
		fflush(stdin);
		gets(resp);
			if(!strcmp(resp,"c") || !strcmp(resp,"C")){
            printf("\tParabens!! voce acertou!!:\n\n");
            a_1=a_1+1;
		}
		else{
            printf("\tVoce Errou! Volte a estudar!\n\n");
            e_1=e_1=1;
		}
		printf("\t\t\"Enter\"para Resultado: ");
		getchar();
		system("cls");
		printf("\n\n\t\tVoce Acertou: %d\n",a_1);
		printf("\t\tVoce Errou: %d\n",e_1);
		break;

		case 2://Modo Medio
		    //1-questao
		    system("cls");
		    printf("\n\n\t\t\t====> Modo Medio <====\n\n");
		    printf("\t\tO limite superior para o tamanho de um arquivo armazenado em um sistema do tipo FAT32 é: \n");
		    printf("\t\t(a) 1GiB - 1Byte;\n");
		    printf("\t\t(b) 16GiB - 1Byte;\n");
		    printf("\t\t(c) 8GiB - 1Byte;\n");
		    printf("\t\t(d) 4GiB - 1Byte;\n");
		    printf("\t\t(e) 32GiB - 1byte;\n\n");
		    printf("\t\tResposta ?\n");
		    printf("\t\t");
		    fflush(stdin);
		    gets(resp);
		    if(!strcmp(resp,"d")||!strcmp(resp,"D")){
                printf("\t\tParabens Voce a Acertou!!\n\n");
		    }
		    else{
                printf("\t\tVoce errou! Vai estudar\n\n");
		    }
		    printf("\t\t\"Enter\" para continuar...");
		    getchar();
		    system("cls");
		    //2-questao
		    printf("\n\n\t\t\t====> Modo Medio <====\n\n");
		    printf("\t\t2 - Um sistema de arquivo é a forma de organizacao de dados em algum meio de armazenamento\n");
		    printf("\tde dados em massa, frequentemente feito em discos magneticos. Identifique a alternativa\n");
		    printf("\tque NAO apresenta um sistema.\n");
		    printf("\t\t(a)- Ext4\n");
		    printf("\t\t(b)- GUID\n");
		    printf("\t\t(c)- HFS\n");
		    printf("\t\t(d)- Reiser\n");
		    printf("\t\t(a)- NTFS\n");
		    printf("\t\tResposta ?\n");
		    printf("\t\t");
		    fflush(stdin);
		    gets(resp);
		    if(!strcmp(resp,"b")||!strcmp(resp,"B")){
                printf("\t\tParabens! Voce Acertou!\n\n");
		    }
		    else
            {
                printf("\t\tVoce Errou!! Vai estudar!\n\n");
            }
            printf("\t\t\"Enter\" para continuar...");
		    getchar();
		    system("cls");
		    //3ª - questao mediao
		    printf("\n\n\t\t\t====> Modo Medio <====\n\n");
		    printf("\t\t3- Sobre a arquitetura RISC e correto afirmar o seguinte:\n");
		    printf("\t\t(a) Em compara com CISC, RISC apresenta uma arquitetura com poucos registradores.\n");
		    printf("\t\t(b) Muitas instruções RISC são executadas pelo microcodigo\n");
		    printf("\t\t(c) O uso de pipeline e uma caracterisca da RISC.\n");
		    printf("\t\t(d) Comumente, as instruções RISC consomem varios ciclos de clock.\n");
		    printf("\t\t");
		    fflush(stdin);
		    gets(resp);
		    if(!strcmp(resp,"c")||!strcmp(resp,"C")){
                printf("\t\tParabens! Voce Acertou!\n\n");
		    }
		    else
            {
                printf("\t\tVoce errou!! Volte a estudar !\n\n");
            }
            printf("\t\t\"Enter\"para continuar...");
            getchar();
            system("cls");
            //4º questao
            printf("\n\n\t\t\t====> Modo Medio <====\n\n");
            printf("\t\t4-Uma instrução de comparação de valores em uma linguagem de programação, como por \n");
            printf("\texemplo, a comparação do valor booleano verdadeiro ou falso, exige que seja avaliado um\n");
            printf("\tou mais bits presentes em uma célula de memória. O componente do computador responsável\n");
            printf("\tpor avaliar o conteúdo desta célula de memória para esta operação é chamado de \n");
            printf("\t\t(a)- memoria segundaria\n");
            printf("\t\t(b)- memoria principal\n");
            printf("\t\t(c)- registrador\n");
            printf("\t\t(d)- barramento de memoria\n");
            printf("\t\t(e)- CPU");
            printf("\t\t");
            fflush(stdin);
            gets(resp);
            if(!strcmp(resp,"e")||!strcmp(resp,"E")){
                printf("\t\tParabens Voce Acertou!\n\n");
            }
            else{
                printf("\t\tVoce errou!! Volte a estudar!\n\n");
            }
            break;
        case 3:
            system("cls");
            printf("\n\n\t\t\t===> Gabarito <===\n\n");
            printf("\t\tFacil: \n");
            printf("\t->\t1-(b):\n");
            printf("\t->\t2-(b):\n");
            printf("\t->\t3-(a):\n");
            printf("\t->\t4-(c):\n");
            printf("\n\n\t\tMedio :\n");
            printf("\t->\t1-(d):\n");
            printf("\t->\t2-(b):\n");
            printf("\t->\t3-(c):\n");
            printf("\t->\t4-(e):\n");
            break;
        default:
            printf("\t\tOpcao Invalida\n\n");
            }
            printf("\n\n\t\tMenu Principal\n\n");
            printf("\t\t( S )- Sim\n");
            printf("\t\t( N )- Nao\n");
            printf("\t\t");
            sair=getch();
	}while(sair!='s');
}
//INTRODUÇÃO AO CALCULO DIFERENCIAL E INTEGRAL
void prof_vicente(){
	int op,a,e;
	char r1[1],r2[1],r3[1],r4[1],sair;
	do{
    system("cls");
    system("color 2f");
    printf("\n\n\tProf. Vicente: \n");
	printf("\n\n\t\tIntroducao ao CaLculo Diferencial e Integral: \n");
    printf("\t\t*====================*\n");
    printf("\t\t|         Menu       |\n");
    printf("\t\t*====================*\n");
    printf("\t\t|                    |\n");
    printf("\t\t| (1)- Exercicio     |\n");
    printf("\t\t| (2)-Gabarito       |\n");
    printf("\t\t|                    |\n");
    printf("\t\t*====================*\n\n");
    printf("\t\t");
    scanf("%d",&op);
    a=0;
    e=0;
    switch(op){
    case 1:
        //a-letra
        system("cls");
        printf("\n\n\t\tCalcule os limite?\n\n");
        printf("\t\t1- Lim 3^x: \n");
        printf("\t\t x->2\n\n");
        printf("\t\t(a)- 7\n");
        printf("\t\t(b)- 9\n");
        printf("\t\t(c)- 5\n");
        printf("\t\t(d)- 11\n\n");
        printf("\t\tResposta: ");
        fflush(stdin);
        gets(r1);
        if(!strcmp(r1,"b")||!strcmp(r1,"B")){
           printf("\t\tParabens! Voce Acertou!\n\n");
           a++;
           }
           else{
            printf("\t\tVoce errou! Volte estudar!\n\n");
            e++;
           }
           printf("\t\t\"Enter\" para continuar...");
           getchar();
           system("cls");
           //b-letra
           printf("\n\n\t\tCalcule os limite?\n\n");
           printf("\n\n\t\t2-lim 3x: \n");
           printf("\t\tx->2\n\n");
           printf("\t\t(a)- 2\n");
           printf("\t\t(b)- 5\n");
           printf("\t\t(c)- 7\n");
           printf("\t\t(d)- 6\n");
           printf("\t\tResposta: ");
           fflush(stdin);
           gets(r2);
           if(!strcmp(r2,"d")||!strcmp(r2,"D")){
            printf("\t\tParabens! Voce Acertou!\n\n");
            a++;
           }else{
               printf("\t\tVoce errou! Volte a estudar\n\n");
               e++;
           }
              printf("\t\t\"Enter\" para continuar...");
              getchar();
              system("cls");
           //c-calcule
           printf("\n\n\t\tCalcule os limite?\n\n");
           printf("\n\n\t\t3 - Lim (5x^2 - 3x + 1): \n");
           printf("\t\tx->3\n\n");
           printf("\t\t(a)- 37\n");
           printf("\t\t(b)- 48\n");
           printf("\t\t(c)- 17\n");
           printf("\t\t(d)- 25\n");
           printf("\t\tResposta: ");
           fflush(stdin);
           gets(r3);
           if(!strcmp(r3,"a")||!strcmp(r3,"A")){
            printf("\t\tParabens! Voce Acertou!\n\n");
            a++;
           }else{
               printf("\t\tVoce errou! Volte a estudar\n\n");
               e++;
           }
              printf("\t\t\"Enter\" para continuar...");
           getchar();
           system("cls");
           //d-letra
           printf("\n\n\t\tCalcule os limite?\n\n");
           printf("\n\n\t\t           4x^2 -2x \n");
           printf("\t\t4 - Lim  ----------:\n");
           printf("\t\tx->3        x-1    \n\n");
           printf("\t\t(a) - 12\n");
           printf("\t\t(b) - 17\n");
           printf("\t\t(c) - 15\n");
           printf("\t\t(d) - 19\n");
           printf("\t\tResposta: ");
           fflush(stdin);
           gets(r4);
           if(!strcmp(r4,"c")||!strcmp(r4,"C")){
            printf("\t\tParabens! Voce Acertou!\n\n");
            a++;
           }else{
               printf("\t\tVoce errou! Volte a estudar\n\n");
               e++;
           }
              printf("\t\t\"Enter\" para continuar...");
           getchar();
           system("cls");
           printf("\n\n\t\tTotal de Acerto: %d\n",a);
           printf("\t\tTotal de errou: %d\n\n",e);
        break;
    case 2:
        system("cls");
        printf("\n\n\t\t======> Gabarito <======\n");
        printf("\t\t1 - b\n");
        printf("\t\t2 - d\n");
        printf("\t\t3 - a\n");
        printf("\t\t4 - c\n\n");
        break;
    default:
        printf("\t\tOpcao Invalida...");
        }
    printf("\n\n\t\tMenu Principal: \n\n");
    printf("\t\tSim - ( S ).\n");
    printf("\t\tNao - qualquer tecla\n");
    printf("\t\t");
    sair=getche();
	}while(sair!='s');
}
//lINGUAGEM DE PROGRAMAÇAO ESTRUTURADA
void prof_bruno(){
    int opc;
    char sair;
    do{
    system("cls");
    system("color 3f");
    printf("\n\nProf. Bruno. \n\n");
    printf("\n\t\tLINGUAGEM DE PROGRAMACAO C: \n");
    printf("\t\t(1)- Conceito: \n");
    printf("\t\t(2)- Tipo de dados: \n");
    printf("\t\t(3)- Biblioteca: \n");
    printf("\t\t(4)- Operadores: \n");
    printf("\t\t(5)- Entrada e saida de Dados:\n");
    printf("\t\t");
    scanf("%d",&opc);
    switch(opc){
    case 1:
        printf("\t\tLinguagem C e uma linguagem poderoso devido ao seu poder e a liberdade\n");
        printf("\tquase sem limites, que o programador C tem com sua maquina. Isso, porem \n");
        printf("\ttem um custo. Sera necessario um dedicação e estudo maior, principalmente\n");
        printf("\tse comparado com outras linguagens de programacao. Mas vale a pena, sabendo\n");
        printf("\tC, voce aprendera as outras com uma incrivel facilidade.\n");
        break;
    case 2:
        system("cls");
        printf("\n\n\t\tTipos de dados: \n");
        printf("\tfloat -> Conjunto de numeros reais (Ocupa 4 bytes)\n");
        printf("\tinteiro -> Conjuntos dos inteiros (Ocupa 2 bytes)\n");
        printf("\tChar -> Conjuntos de caracteres e numereico (oucupa 1 bytes)\n");
        break;
    case 3:
        system("cls");
        printf("\n\n\t\tBiblioteca: \n");
        printf("\tSao os arquivos de cabecalho que possibilitam o uso das funcoes em C.\n\n");
        printf("\t#include <stdio.h> //Responsavel por funcoes de entrada e saida de dados.\n\n");
        printf("\t\tFuncoes printf e scanf\n\n");
        printf("\t#include <stdlib.h>// Responsavel pela conversao de string para numeros,\n ");
        printf("\tgerenciamento de alocação dinamica na memoria e o uso da funcao system(),entre outras.\n\n");
        printf("\t\tExistem outras bibliotecas que devem ser adicionadas para o uso de outras funcoes\n\n");
        printf("\t\t#include <ctype.h>//Classificacao e tranformacao de caracteres\n\n");
        printf("\t\t#include <math.h>//Uso de operacoes matematicas\n\n");
        printf("\t\t#include <string.h>//Manipulação de strings\n\n");
        printf("\t\t#include <time.h>//Manipulacao de datas e horas\n\n");
        break;
    case 4:
        system("cls");
        printf("\n\n\t\tOperadores: \n");
        printf("\t\tOperadores Relacionais\n");
        printf("\t- Igual a (=) 4 = 4 Verdadeiro\n");
        printf("\tObs: (==) no caso do operador de igualdade o de ser\n");
        printf("\tutilizado dois iguais(==) ao inves de somente 1 em programacao\n");
        printf("\tO sinal de igual e na verdade um sinal de atribuicao\n");
        printf("\t\t- Maior que (>) 10 > 8 verdeiro\n");
        printf("\t\t- Menor que (<) 15 < 10 faso\n");
        printf("\t\t- Maior ou Igual a (>=) 5 >= 5 verdadeiro\n");
        printf("\t\t- Menor ou Igual a (<=) 6 <= 3 falso\n");
        printf("\t\t- Diferente de <> 20,4 <> 40,2 falso ou verdadeiro\n");
        system("pause");
        system("cls");
        printf("\n\n\t\tOperadores Logicos\n");
        printf("\t\t- E (&&)\n");
        printf("\t\t- ou (||)\n");
        system("pause");
        system("cls");
        printf("\n\n\t\tOperadores matematicos\n");
        printf("\t\t- ** ou ^ //Exponenciacao\n");
        printf("\t\t- *,/,%% //Multiplicacao, divisao, Resto da divisao\n");
        printf("\t\t- +,- // Adicao e Sutracao\n");
        break;
    case 5:
        system("cls");
        printf("\n\n\t\tENTRADA E SAIDA DE DADOS\n");
        printf("\tA saida de dados (impressao na tela) geralmente e realizada pela funcao \n");
        printf("\tFuncao -> printf();\n");
        printf("\tEx: printf(\"Digite o seu nome\");\n\n");
        printf("\tprintf() tambem pode imprimir valores de variaveis\n");
        printf("\tEx: printf(\"Nome e: %s\",nome);\n\n");
        system("pause");
        system("cls");
        printf("\n\n\t\tA entrada de dados (recepcao dos dados digitados) e responsabilidade da \n");
        printf("\t\tFuncao -> scanf();\n");
        printf("\t\tscanf(\"%%s\",&nome);\n\n");
        break;
    default:
        system("cls");
        printf("\n\n\t\tVolte e faca a coisa certa: \n\n");
    }
    printf("\n\n\t\tMenu Principal: \n\n");
    printf("\t\tSim - ( S )\n");
    printf("\t\tTopo - qualquer tecla...\n");
    printf("\t\t");
    sair=getche();
    }while(sair!='s');
}
//METODOLOGIA DO TRABALHO CIENTIFICO
void prof_frank(){
    char sair;
    int op;
    do{
    system("cls");
    system("color 4f");
    printf("\n\n");
    printf("\t\t\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\n");
    printf("\t\t\262                                           \262\n");
    printf("\t\t\262     METODOLOGIA DO TRABALHO CIENTIFICO    \262\n");
    printf("\t\t\262                                           \262\n");
    printf("\t\t\262 (1) Estrutura Trabalho Academico          \262\n");
    printf("\t\t\262 (2) Estrutura Trabalho Conclusao de curso \262\n");
    printf("\t\t\262 (3) Estrutura artigo                      \262\n");
    printf("\t\t\262                                           \262\n");
    printf("\t\t\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\262\n");
    printf("\t\t");
    scanf("%d",&op);
    switch(op){
    case 1:
        system("cls");
        printf("\n\n");
        printf("\t\tESTRUTURA DO TRABALHO ACADEMICO\n");
        printf("\t\tCapa \n");
        printf("\t\tFolha de rosto \n");
        printf("\t\tSumario \n");
        printf("\t\tIntroducao \n");
        printf("\t\tDesenvolvimento \n");
        printf("\t\tConsiderações finais\n");
        printf("\t\tReferiencias \n\n");
    break;
    case 2:
         system("cls");
        printf("\n\n");
        printf("\t\tESTRUTURA DO TRABALHO - CONCLUSAO DE CURSO-TCC\n");
        printf("\t\tCapa \n");
        printf("\t\tFolha de rosto \n");
        printf("\t\tErrata \n");
        printf("\t\tAgracimento \n");
        printf("\t\tEpigrafe \n");
        printf("\t\tDedicatoria \n");
        printf("\t\tlista | - Grafico\n\n");
        printf("\t\t      | - Tabela\n\n");
        printf("\t\t      | - Figura\n\n");
        printf("\t\tSumario\n");
        printf("\t\tIntroducao\n");
        printf("\t\tDesenvolvimento\n");
        printf("\t\tConsideracoes finais\n");
        printf("\t\tReferencias\n");
        printf("\t\tAnexos\n");
        printf("\t\tApendices\n");
        printf("\t\tIndice\n");
    break;
    case 3:
        system("cls");
        printf("\n\n");
        printf("\t\tESTRUTURA DE ARTIGO\n");
        printf("\t\tTitulo\n");
        printf("\t\tAutor\n");
        printf("\t\tResumo\n");
        printf("\t\tPalavra - chave\n");
        printf("\t\tAbstract\n");
        printf("\t\tIntroducao\n");
        printf("\t\tDesenvolvimento\n");
        printf("\t\tConsideracoes finais\n");
        printf("\t\tReferencias\n");
    break;
    default:
        system("cls");
        printf("\n\n");
        printf("\t\tOpcao Invalida\n\n");

    }
    printf("\n\n\t\tMenu Principal\n\n");
    printf("\t\tSim - ( s )\n");
    printf("\t\ttopo qualquer tecla. \n");
    printf("\t\t");
    sair=getch();
    }while(sair!='s');
}
//ESTRUTURA DE DADOS
void prof_jaqueline(){
    int op;
    char sair;
    system("cls");
    printf("\n\n");
    printf("\t\tOI Gente!!\n");
    printf("\t\tApreendendo Logica de Programacao\n\n");
    system("pause");
    do{
    system("cls");
    system("color 1f");
    printf("\t\tProf. Jaqueline\n\n");
    printf("\n\n");
    printf("\t\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\n");
    printf("\t\260     ESTRUTURA DE DADOS       \260\n");
    printf("\t\260                              \260\n");
    printf("\t\260(1)- Declaracao de vetor      \260\n");
    printf("\t\260(2)- Exemplo                  \260\n");
    printf("\t\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\260\n");
    printf("\t");
    scanf("%d",&op);
    switch(op){
    case 1:
        system("cls");
        printf("\n\n");
        printf("\t\tEm portugol declarar vetor: \n");
        printf("\tEx: Nome_do_vetor: vetor[tamanho do vetor] e tipo do vetor\n\n");
        break;
    case 2:
        printf("\t\tVeja um codigo exemplo com vetor:\n\n");
        printf("\t\talgoritmo exemplo;\n");
        printf("\t\tvar\n");
        printf("\t\tnotas: vetor[1..3] de real;\n");
        printf("\t\tinicio\n");
        printf("\t\tescreva(\"Insira a primeira nota:\");\n");
        printf("\t\tleia(notas[0]);\n");
        printf("\t\tescreva(\"Insira a segunda nota:\");\n");
        printf("\t\tleia(notas[1]);\n");
        printf("\t\tnotas[2] <- (notas[0]+notas[1])/2;\n");
        printf("\t\tescreva(\"Sua media e:\",notas[2]);\n");
        printf("\t\tfim.\n\n");
        break;
    default:
        system("cls");
        printf("\n\n");
        printf("\t\tVote e faca a coisa certa\n");
    }
    printf("\n\n\t\tMenu Principal\n\n");
    printf("\t\tSim - (S)\n");
    printf("\t\tTopo - Qualquer tecla\n");
    printf("\t\t");
    sair=getche();
    }while(sair!='s');
}
//CONTABILIDADE
void prof_nilcicleia(){
    char sair, resp, opc;
    int e,c;
do{
system("cls");
system("color 5f");
e=0;
c=0;
printf("\n\tProf. Nilcicleia. \n\n");
printf("\t\t1 - Atividade: \n");
printf("\t\t2 - Resposta: \n");
printf("\t\t");
scanf("%d",&opc);
switch(opc){
    case 1:
system("cls");
printf("\n\n\t\tEscolha a alternativa correta: \n\n");
printf("\t\t1 - A escritura começa pelo livro: \n");
printf("\t\t( a ) registro de invetario\n");
printf("\t\t( b ) contabilidade\n");
printf("\t\t( c ) caixa\n");
printf("\t\t( d ) diario\n");
printf("\t\t");
scanf("%s",&resp);
if((resp=='d')||(resp=='D')){
printf("\n\t\tParabens! Voce Acertou!\n\n");
c++;
}else{
    printf("\n\t\tVoce Errou!\n\n");
e++;
}
printf("\t\t"); system("pause");
//2- pergunta
system("cls");
printf("\n\n\t\t2 - Sao usuario da contabilidade?\n\n");
printf("\t\t( a ) fornecedores, cliente e estoque\n");
printf("\t\t( b ) dinheiro, bancos e governo\n");
printf("\t\t( c ) mercadorias, patrimonios e empresas\n");
printf("\t\t( d ) fornecedores, clientes, bancos e administradores\n");
printf("\t\t");
scanf("%s",&resp);
if((resp=='d')||(resp=='D')){
printf("\n\t\tParabens! Voce Acertou!\n\n");
c++;
}else{
    printf("\n\t\tVoce Errou!\n\n");
e++;
}
printf("\t\t"); system("pause");
system("cls");
//3 pergunta
printf("\n\n\t\t3 - O principal objetivo da empresa e:\n");
printf("\t\t( a ) prestar servicos a contabilidade\n");
printf("\t\t( b ) obter lucro\n");
printf("\t\t( c ) vender mercadorias\n");
printf("\t\t( d ) pagar impostos\n");
printf("\t\t");
scanf("%s",&resp);
if((resp=='b')||(resp=='B')){
printf("\n\t\tParabens! Voce Acertou!\n\n");
c++;
}else{
    printf("\n\t\tVoce Errou!\n\n");
e++;
}
printf("\t\t"); system("pause");
system("cls");
printf("\n\n\t\t4 - Sua empresa compra mercadoria de\n\n");
printf("\t\t( a ) fornecedores\n");
printf("\t\t( b ) clientes\n");
printf("\t\t( c ) compradores\n");
printf("\t\t( d ) bancos\n");
printf("\t\t");
scanf("%s",&resp);
if((resp=='a')||(resp=='A')){
printf("\n\t\tParabens! Voce Acertou!\n\n");
c++;
}else{
    printf("\n\t\tVoce Errou!\n\n");
e++;
}
printf("\t\t"); system("pause");
system("cls");
printf("\n\n\t\t Total de acerto: %d\n",c);
printf("\t\t Total de erro: %d\n\n",e);

    break;
    case 2:
        system("cls");
        printf("\n\n\t\t======> Gabarito <======\n");
        printf("\t\t1 - d\n");
        printf("\t\t2 - d\n");
        printf("\t\t3 - b\n");
        printf("\t\t4 - a\n\n");
        break;
default:
    system("cls");
    printf("\n\n");
    printf("\t\tOpcao Invalida\n\n");
}

printf("\t\tMenu Principal: \n\n");
printf("\t\tSim - ( S )\n");
printf("\t\tTopo qualquer tecla..\n");
printf("\t\t");
sair=getch();
}while(sair!='s');
}
//ALUNO FAMETRO
void aluno(){
    system("cls");
    system("color 3f");
    printf("\n\n");
    printf("\t\t\t\t*=============================================*\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|  FACULDADE METROPOLITANA DE MANAUS          |\n");
    printf("\t\t\t\t|        SISTEMA DE INFORMACAO                |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|               LINGUAGEM C                   |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|  GI\663\341ER CARVA\663HO \321E SO\746ZA - 300485          |\n");
    printf("\t\t\t\t|  CHARLES COSTA DOS SANTOS - 299942          |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|     TRABALHO ACADEMICO DE LINGUAGEM DE      |\n");
    printf("\t\t\t\t|           PROGRAMACAO ESTRUTURADA           |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|            PROFESSOR: BRUNO                 |\n");
    printf("\t\t\t\t|                                             |\n");
    printf("\t\t\t\t|               MANAUS - AM                   |\n");
    printf("\t\t\t\t|                  2016                       |\n");
    printf("\t\t\t\t*=============================================*\n");
    printf("\t\t\t\t");
    printf("\n\n\n\n");
    printf("\t\t\t\tQualquer tecla para Menu Principal...");
    getch();

}
