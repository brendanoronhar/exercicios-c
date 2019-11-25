#include <stdio.h>
#define lista5EX4

/******************************************************************************

				         LISTA 5

*******************************************************************************/

#ifdef lista5EX1
/*1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return)

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/

int pesquisa(char x){
    char vetor[] = {'b','d','f','h','j','k','m','o','q','s','u','w','y','\0'};
    int resp = -1;

    for(int i=0;i<12;i++)
    {
     if(x==vetor[i]){
        resp = i;
     }
    }

    return resp;

}

main(){
    char letra;
    int posicao;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    posicao = pesquisa(letra);

    if(posicao == -1){
        printf("Nao foi possivel encontrar a letra no vetor.");
    } else {
        printf("A letra %c encontra-se na posicao %d do vetor.", letra, posicao);
    }
}
#endif // lista5EX1

#ifdef lista5EX2
/*2 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().*/

int soma(a,b){
    return a+b;
}

int subtracao(a,b){
    return a-b;
}

int multiplicacao(a,b){
    return a*b;
}
int divisao(a,b){
    return a/b;
}

main(){
    int a, b, som, sub, mult;
    int div;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    som = soma(a,b);
    sub = subtracao(a,b);
    mult = multiplicacao(a,b);
    div = divisao(a,b);

    printf("Soma: %d\n", som);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %d\n", div);


}


#endif // lista5EX2

#ifdef lista5EX3
/*3 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.*/

main(){
    int i=0, n;
    int v[i];
    char resp;


    printf("\nDigite um numero: ");
    scanf("%d", &n);

    int som = n, sub = n, mult = n;
    float div = n;

    do{
        i++;
        printf("\nDigite outro numero: ");
        scanf("%d", &v[i]);

        som = som+v[i];
        sub = sub-v[i];
        mult = mult*v[i];
        div = div/v[i];

        printf("\nDeseja digitar mais um numero? S ou N: ");
        scanf(" %c", &resp);

     }while(resp == 's' || resp == 'S');



    printf("Soma: %d\n", som);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %.2f\n", div);


}

#endif // lista5EX3

#ifdef lista5EX4
/*4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).*/

int i=0, n;
int v[];
char resp;
int som = 0, sub = 0, mult = 0;
float div = 0;

 int opSom(som){

    printf("\nDigite um numero: ");
    scanf("%d", &n);

    som = n;

     do{
        i++;
        printf("\nDigite outro numero: ");
        scanf("%d", &v[i]);

        som = som+v[i];

        printf("\nDeseja digitar mais um numero? S ou N: ");
        scanf(" %c", &resp);

    }while(resp == 's' || resp == 'S');

 return som;
}

 int opSub(sub){

    printf("\nDigite um numero: ");
    scanf("%d", &n);

    sub = n;

     do{
        i++;
        printf("\nDigite outro numero: ");
        scanf("%d", &v[i]);

        sub = sub-v[i];

        printf("\nDeseja digitar mais um numero? S ou N: ");
        scanf(" %c", &resp);

    }while(resp == 's' || resp == 'S');

 return sub;
}

 int opMult(mult){

    printf("\nDigite um numero: ");
    scanf("%d", &n);

    mult = n;

     do{
        i++;
        printf("\nDigite outro numero: ");
        scanf("%d", &v[i]);

        mult = mult*v[i];

        printf("\nDeseja digitar mais um numero? S ou N: ");
        scanf(" %c", &resp);

    }while(resp == 's' || resp == 'S');

 return mult;
}

 float opDiv(div){

    printf("\nDigite um numero: ");
    scanf("%d", &n);

    div = n;

     do{
        i++;
        printf("\nDigite outro numero: ");
        scanf("%d", &v[i]);

        div= div/v[i];

        printf("\nDeseja digitar mais um numero? S ou N: ");
        scanf(" %c", &resp);

    }while(resp == 's' || resp == 'S');

 return div;
}

main(){
    char op, returne;

 volta:
    system("cls");
    printf("Escolha uma operacao a ser executada: \n");
    printf("'+' - Soma\n");
    printf("'-' - Subtracao\n");
    printf("'*' - Multiplicacao\n");
    printf("'/' - Divisao\n");
    scanf(" %c", &op);

    if(op == '+'){
    printf("Soma: %d\n", opSom(som));
    } else {
        if(op == '-'){
            printf("Subtracao: %d\n", opSub(sub));

        } else {
            if(op == '*'){
                printf("Multiplicacao: %d\n", opMult(mult));
            } else{
                if(op == '/'){
                    printf("Divisao: %.2f\n", opDiv(div));
                } else {
                    printf("Opcao Inválida");
                    goto volta;
                }
            }
        }
    }

printf("Deseja Realizar novamente? S ou N");
scanf(" %c", &returne);
if(returne=='s'){
    goto volta;
}

}

#endif // lista5EX4

#ifdef lista5EX5
/*5 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva uma funcao que compare estas 2 strings e retorne se sao IGUAIS 1 ou
    DIFERENTES 0. Se forem DIFERENTES, retorne 2 se a 1. string for maior que a 2.
    e 3 se a 2. string for maior que a 1.. Declare as strings como variavel global.*/
char a[10], b[10];

char comparacao(a,b){
    char x;

    if(strcmp(a,b)==0){
        x='a';
    }
    if(strcmp(a,b)==1){
        x='b';
    }
    if(strcmp(a,b)==-1){
        x='c';
    }
    return x;
}
int main(){
    char x;

    printf("\nDigite a primeira palavra ate' 10 caracteres: ");
    scanf("%s", &a);
    printf("\nDigite a segunda palavra ate' 10 caracteres: ");
    scanf("%s", &b);

    x=comparacao(a,b);

    if(x=='a'){
        printf("\nAs palavras sao iguais!\n");
    }
    if(x=='b'){
        printf("\nAs palavras sao diferentes e A e' maior q B!\n");
    }
    if(x=='c'){
        printf("\nAs palavras sao diferentes e A e' menor q B!\n");
    }
}
#endif // ex5

#ifdef lista5EX6
/*6 - Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!.
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.*/
int fatoracao(N){
    int cont=1, N2=1, a, b, c;
    for(cont;cont<=N;cont++){
        N2=N2*cont;
    }

    a=N2%10;
    b=N2/10;

    c=a+b;
    return c;
}
int main(){
    int N, Nsoma;

    printf("\nDigite um valor positivo inteiro: ");
    scanf("%d", &N);

    Nsoma=fatoracao(N);

    printf("\nSoma do digitos da fatoracao: %d", Nsoma);
}
#endif // ex6

#ifdef lista5EX7
/*7 - Escreva um programa que recebe 2 valores X e Z na função main(). Escreva uma
    função que receba por parametro os 2 valores X e Z, calcule e retorne o
    resultado de X exponencial Z para o programa principal.
    ATENCAO: nao utilize nenhuma funcao pronta de exponenciacao.*/
int expo(int Z,int X){
    int cont=0, n=1;
    for(cont;cont<X;cont++){
        n=n*Z;
    }
    return n;
}

int main(){
    int X, Z, res;

    printf("\nQual o numero? ");
    scanf("%d", &Z);
    printf("\nQual o expoente? ");
    scanf("%d", &X);

    res=expo(Z,X);

    printf("\nResultado: %d", res);
}
#endif // ex7

#ifdef lista5EX8
/*8 - Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
      entre eles.*/
int verif(int n){
    int x;
    if(n>0){
        x=1;
    }
    if(n<0){
        x=0;
    }
    if(n==0){
        x=-1;
    }

    return x;
}

int mult(int xa, int xb, int a, int b){
    int aux;
    if(xa==1 && xb==1){
        aux=0;
        if(a<b){
            a++;
            for(a;a<b;a++){
                aux=aux+a;
            }
        }
        if(a>b){
            b++;
            for(b;b<a;b++){
                aux=aux+b;
            }
        }
    }
    if(xa==0 && xb==0){
        aux=1;
        if(a<b){
            a++;
            for(a;a<b;a++){
                aux=aux*a;
            }
        }
        if(a>b){
            b++;
            for(b;b<a;b++){
                aux=aux*b;
            }
        }
    }
    if(xa==-1 || xb==-1){
        aux=0;
    }

    return aux;
}

int main(){
    int a, b, xa, xb, aux;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &b);

    xa=verif(a);
    xb=verif(b);

    aux=mult(xa,xb,a,b);

    if(aux==0){
        printf("\nValores inclui um zero\n");
    }
    else{
        printf("\nResultado: %d", aux);
    }
}
#endif
