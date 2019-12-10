#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Dados {
            char nome[20];
            int dia_nasc;
            int mes_nasc;
            int ano_nasc;
            char e_civil[20];
            float salario;
            };

void inserirDados();
void listarDados();
int pesquisarNome();
void pesquisarCivil();
int pesquisarNiver();
int pesquisarSalario();
void alterarSalario();
void alterarDados();
void excluirDados();

main(){
    struct Dados dados;
    struct Dados *p;
    int menu = 0;
    int tam;
    char op;

    p = &dados;
    tam = sizeof(dados);

    do{
        printf("\n\n-----------Menu-----------\n");
        printf("1- Incluir Dados\n");
        printf("2- Listar Dados na Tela\n");
        printf("3- Pesquisar por Nome\n");
        printf("4- Pesquisar por Estado Civil\n");
        printf("5- Pesquisar aniversariantes do mes\n");
        printf("6- Pesquisar por faixa salarial\n");
        printf("7- Alterar valor do salario\n");
        printf("8- Alterar dados\n");
        printf("9- Excluir registro\n");
        printf("10- Sair\n");
        scanf("%d", &menu);

        switch(menu)
        {
            case 1 : inserirDados(p, tam);   //passa como parametro o ponteiro para a estrutura e o n. de bytes da desta
            break;

            case 2: listarDados(p, tam);
            break;

            case 3: pesquisarNome(p, tam);
            break;

            case 4: pesquisarCivil(p, tam);
            break;

            case 5: pesquisarNiver(p, tam);
            break;

            case 6: pesquisarSalario(p, tam);
            break;

            case 7: alterarSalario(p, tam);
            break;

            case 8: alterarDados(p, tam);
            break;

            case 9: excluirDados(p, tam);
            break;

            case 10: break;

            default: printf("\n opcao invalida\n");
        }



    }while (menu != 10);

}

void inserirDados(struct Dados *ps, int tam){

    system("cls");

    FILE *p, *p1;
    int cont = 0;
    int i;

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    printf("contador antes %d\n",cont);
    fclose(p1);

    for(i=0; i<20; i++){
        ps->nome[i] = '\0';
        ps->e_civil[i] = '\0';
    }
    ps->dia_nasc = 0;
    ps->ano_nasc = 0;
    ps->salario = 0.0;

    p = fopen("arquivo.txt", "a");

    if( p == NULL){
        printf("\nERRO");
        exit(1);
    }

    getchar();
    printf("Digite o Nome: ");
    gets(ps->nome);
    printf("Digite o estado civil: ");
    gets(ps->e_civil);

    do{
        printf("Digite o ano de nascimento: ");
        scanf("%d", &ps->ano_nasc);
            if(ps->ano_nasc < 0 || ps->ano_nasc > 2019){
                printf("\nDigite um valor válido!\n");
            }
    }while(ps->ano_nasc < 0 || ps->ano_nasc > 2019);

    do{
        printf("Digite o mes de nascimento: ");
        scanf("%d", &ps->mes_nasc);
            if(ps->mes_nasc < 1 || ps->mes_nasc > 12){
                printf("\nDigite um valor válido!\n");
            }
    }while(ps->mes_nasc < 1 || ps->mes_nasc > 12);

    do{
        printf("Digite o dia de nascimento: ");
        scanf("%d", &ps->dia_nasc);
            if(ps->dia_nasc < 1 || ps->dia_nasc > 31){
                printf("\nDigite um valor válido!\n");
            }
    }while(ps->dia_nasc < 1 || ps->dia_nasc > 31);

    do{
        printf("Digite o salario: ");
        scanf("%f", &ps->salario);
            if(ps->salario < 0){
                printf("\nDigite um valor válido!\n");
            }
    }while(ps->salario < 0);


    fwrite(ps, tam,1,p);
    fclose(p);

    cont++;

    p1 = fopen("contador.txt", "w");
    fprintf(p1,"%d",cont);
    printf("contador depois %d\n",cont);
    fclose(p1);
}

void listarDados(struct Dados *ps, int tam){

    system("cls");
    FILE *p, *p1;
    int i;
    int cont,comp;

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);

    p = fopen("arquivo.txt", "r");

    if( p == NULL)
        {
        puts("\nERRO\n");
        exit(1);
    }

    for(i=0;i<cont; i++){
        comp = i*tam;

    fseek(p,comp,0);
    fread(ps,tam,1,p);
    if(ps -> nome[0] != '*'){
        printf("\n\nRegistro %d:", i);
        printf("\nNome: %s", ps->nome);
        printf("\nData de Nascimento: %d/%d/%d", ps->dia_nasc, ps->mes_nasc, ps->ano_nasc);
        printf("\nEstado Civil: %s", ps->e_civil);
        printf("\nSalario: R$%2.f", ps->salario);
        }
    }
    fclose(p);
}

int pesquisarNome(struct Dados *ps, int tam){
    system("cls");
    FILE *p;
    FILE *p1;

    char nome1[20];
    int i=0,y, x;
    int cont;


    getchar();
    printf("Informe um nome para pesquisa: ");
    gets(nome1);

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);
    p = fopen("arquivo.txt", "r");

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);
        for(x = 0; nome1[x] != '\0';x++){
            if(nome1[x] != ps -> nome[x]){
                break;
            }
        }

    if(nome1[x] == '\0' && ps -> nome[x] == '\0')
    {
        printf("\n\nRegistro %d:\n", y);
        printf("\nNome: %s", ps->nome);
        printf("\nData de Nascimento: %d/%d/%d", ps->dia_nasc, ps->mes_nasc, ps->ano_nasc);
        printf("\nEstado Civil: %s", ps->e_civil);
        printf("\nSalário: R$%.2f", ps->salario);
        return y;
    }
    }
    printf("Nao Existem registros com esse nome\n");
    return -1;
}


void pesquisarCivil(struct Dados *ps, int tam){
    system("cls");
    FILE *p;
    FILE *p1;

    char civil[20];
    int i=0,y, x;
    int cont, c=0;


    getchar();
    printf("Informe o estado civil para pesquisa: ");
    gets(civil);

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);
    p = fopen("arquivo.txt", "r");

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);
        for(x = 0; civil[x] != '\0';x++){
            if(civil[x] != ps -> e_civil[x]){
                break;
            }
        }

    if(civil[x] == '\0' && ps -> e_civil[x] == '\0')
        {
            printf("\n\nRegistro %d:\n", y);
            printf("\nNome: %s", ps->nome);
            printf("\nData de Nascimento: %d/%d/%d", ps->dia_nasc, ps->mes_nasc, ps->ano_nasc);
            printf("\nEstado Civil: %s", ps->e_civil);
            printf("\nSalário: R$%.2f", ps->salario);
            c++;
        }
    }

    if(c==0){
    printf("Nao Existem registros com esse estado civil\n");
    }
}

int pesquisarNiver(struct Dados *ps, int tam){
    system("cls");
    FILE *p;
    FILE *p1;

    int mes;
    int i=0,y, x;
    int cont, c=0, comp;

    do {
        printf("\nInforme o mes do aniversario: ");
        scanf("%d", &mes);
        if(mes < 1 || mes > 12){
            printf("\nInforme um valor válido!");
            }
    }while(mes < 1 || mes > 12);



    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);
    p = fopen("arquivo.txt", "r");

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);

        if(mes == ps -> mes_nasc)
        {
            printf("\n\nRegistro %d:\n", y);
            printf("\nNome: %s", ps->nome);
            printf("\nData de Nascimento: %d/%d/%d", ps->dia_nasc, ps->mes_nasc, ps->ano_nasc);
            c++;
        }
    }

    if(c==0){
    printf("Nao Existem registros com esse mes de nascimento\n");
    }

}

int pesquisarSalario(struct Dados *ps, int tam){
    system("cls");
    FILE *p;
    FILE *p1;

    float sal_min, sal_max;
    int i=0,y, x;
    int cont, c=0;

    do {
        printf("\nInforme o valor minimo: ");
        scanf("%f", &sal_min);
        if(sal_min <= 0){
            printf("\nInforme um valor valido!");
            }
    }while(sal_min <= 0);

    do {
        printf("\nInforme o valor maximo: ");
        scanf("%f", &sal_max);
        if(sal_max <= 0 || sal_max <= sal_min){
            printf("\nInforme um valor valido!");
            }
    }while(sal_max <= 0 || sal_max <= sal_min);



    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);
    p = fopen("arquivo.txt", "r");

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);
        if(ps->salario < sal_min || ps->salario > sal_max)
        break;


    if(ps->salario >= sal_min && ps->salario <= sal_max)
        {
            printf("\n\nRegistro %d:\n", y);
            printf("\nNome: %s", ps->nome);
            printf("\nSalario: R$ %2.f", ps->salario);
            c++;
        }
    }

    if(c==0){
    printf("Nao Existem registros com essa faixa salarial\n");
    }

}

void alterarSalario(struct Dados *ps, int tam)
{
    system("cls");
    FILE *p;
    int n_reg;;
    int n_bytes;

    n_reg = pesquisarNome(ps, tam);     //pesquisa o registro no arquivo
    if(n_reg != -1){
        printf("\n\nAlterando registro de numero %d\n",n_reg);
    n_bytes = tam * n_reg;

    p = fopen("arquivo.txt", "r+");

    fseek(p,n_bytes,0);       //posioiona o ponteiro do arquivo no registro a ser alterado
    fread(ps, tam, 1, p );  //le registro do arquivo

    do{
        printf("\nDigite o novo salario: ");
        scanf("%f", &ps->salario);
            if(ps->salario < 0){
                printf("\nInforme um valor valido!");
            }
    }while(ps->salario < 0);

    fseek(p,n_bytes,0);    //posiciona o ponteiro do arquivo no inicio do regisro a ser alterado
    fwrite(ps, tam,1,p);  //escreve o registro no arquivo

    fclose(p);
    }
}

void alterarDados(struct Dados *ps, int tam)
{
    system("cls");
    FILE *p;
    int n_reg;;
    int n_bytes;

    n_reg = pesquisarNome(ps, tam);     //pesquisa o registro no arquivo
    if(n_reg != -1){
        printf("\n\nAlterando registro de numero %d\n",n_reg);
    n_bytes = tam * n_reg;

    p = fopen("arquivo.txt", "r+");

    fseek(p,n_bytes,0);       //posioiona o ponteiro do arquivo no registro a ser alterado
    fread(ps, tam, 1, p );  //le registro do arquivo

    printf("Digite o novo Nome: ");
    gets(ps->nome);
    printf("Digite o novo estado civil: ");
    gets(ps->e_civil);

    do{
        printf("Digite o novo ano de nascimento: ");
        scanf("%d", &ps->ano_nasc);
            if(ps->ano_nasc < 0 || ps->ano_nasc > 2019){
                printf("\nDigite um valor válido!\n");
            }
    }while(ps->ano_nasc < 0 || ps->ano_nasc > 2019);

    do{
        printf("Digite o novo mes de nascimento: ");
        scanf("%d", &ps->mes_nasc);
            if(ps->mes_nasc < 1 || ps->mes_nasc > 12){
                printf("\nDigite um valor válido!\n");
            }
    }while(ps->mes_nasc < 1 || ps->mes_nasc > 12);

    do{
        printf("Digite o novo dia de nascimento: ");
        scanf("%d", &ps->dia_nasc);
            if(ps->dia_nasc < 1 || ps->dia_nasc > 31){
                printf("\nDigite um valor válido!\n");
            }
    }while(ps->dia_nasc < 1 || ps->dia_nasc > 31);

    do{
        printf("Digite o novo salario: ");
        scanf("%f", &ps->salario);
            if(ps->salario < 0){
                printf("\nDigite um valor válido!\n");
            }
    }while(ps->salario < 0);

    fseek(p,n_bytes,0);    //posiciona o ponteiro do arquivo no inicio do regisro a ser alterado
    fwrite(ps, tam,1,p);  //escreve o registro no arquivo

    fclose(p);
    }

}


void excluirDados(struct Dados *ps, int tam){

    system("cls");
    FILE *p;
    p = fopen("arquivo.txt", "r+");
    int n_reg;
    int n_bytes;
    char opc;
    int i;

    n_reg = pesquisarNome(ps, tam);  //pesquisa o registro no arquivo
    if(n_reg =! -1){
        n_bytes = tam * n_reg;

    printf("\n\nDeseja continuar? S/N");
    scanf("%c", &opc);

    if(opc == 's'){
        fseek(p,n_bytes,0);       //posioiona o ponteiro do arquivo no registro a ser apagado
        fread(ps, tam, 1, p );   //le o registro do arquivo
        ps->nome[0]='*';
        for(i=0; i<20; i++){
        ps->e_civil[i] = '\0';
        }
        ps->mes_nasc = 0;
        ps->dia_nasc = 0;
        ps->ano_nasc = 0;
        ps->salario = 0.0;

        fseek(p,n_bytes,0);  //posiciona o ponteiro do arquivo no inicio do regisro a ser apagado
        fwrite(ps,tam,1,p);  //escreve o registro

        fclose(p);
    } else {
       return -1;
    }
    }


}






