#include <stdio.h>
#define lista6EX7

/******************************************************************************

                                LISTA 6

*******************************************************************************/

#ifdef lista6EX1
/*
1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.
*/

main()
{
    int num1, num2;
    int continuar;
    do
    {

        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("\nDigite outro numero: ");
        scanf("%d", &num2);

        int soma = num1 + num2;
        int multiplicacao = num1 * num2;
        int subtracao = num1 - num2;
        float divisao = (float)num1 / (float)num2;

        printf("\nSoma: %d", soma);
        printf("\nSubtracao: %d", subtracao);
        printf("\nMultiplicacao: %d", multiplicacao);
        printf("\nDivisao: %.2f", divisao);

        printf("\n\nDeseja continuar? ");
        printf("\n 1 - Sim\n");
        printf("\n 2 - Nao\n");
        scanf("%d", &continuar);

    } while (continuar == 1);
}
#endif // ex1

#ifdef lista6EX2
/*
2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.
*/

main()
{
    int num1, num2;
    int continuar;
    int soma, subtracao, multiplicacao;
    float divisao;
    do
    {

        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("\nDigite outro numero: ");
        scanf("%d", &num2);

        soma = num1;
        soma += num2;
        subtracao = num1;
        subtracao -= num2;
        multiplicacao = num1;
        multiplicacao *= num2;
        divisao = (float)num1;
        divisao /= (float)num2;

        printf("\nSoma: %d", soma);
        printf("\nSubtracao: %d", subtracao);
        printf("\nMultiplicacao: %d", multiplicacao);
        printf("\nDivisao: %.2f", divisao);

        printf("\n\nDeseja continuar? ");
        printf("\n 1 - Sim\n");
        printf("\n 2 - Nao\n");
        scanf("%d", &continuar);

    } while (continuar == 1);
}
#endif // ex2

#ifdef lista6EX3
/*
3 - Reescreva o exercicio anterior utilizando numeros float.
*/

main()
{
    float num1, num2;
    int continuar;
    float soma, subtracao, multiplicacao;
    float divisao;
    do
    {

        printf("Digite um numero: ");
        scanf("%f", &num1);
        printf("\nDigite outro numero: ");
        scanf("%f", &num2);

        soma = num1;
        soma += num2;
        subtracao = num1;
        subtracao -= num2;
        multiplicacao = num1;
        multiplicacao *= num2;
        divisao = num1;
        divisao /= num2;

        printf("\nSoma: %.2f", soma);
        printf("\nSubtracao: %.2f", subtracao);
        printf("\nMultiplicacao: %.2f", multiplicacao);
        printf("\nDivisao: %.2f", divisao);

        printf("\n\nDeseja continuar? ");
        printf("\n 1 - Sim\n");
        printf("\n 2 - Nao\n");
        scanf("%d", &continuar);

    } while (continuar == 1);
}
#endif // ex3

#ifdef lista6EX5
/*5 - Escreva um programa que receba um numero inteiro via teclado, divida-o
    por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
    Imprima no video o numero recebido e os resultados obtidos.*/

main()
{
int a;
printf("\nDigite um numero inteiro: ");
scanf("%d",&a);
printf("Divisao %d \t\t Multiplicacao: %d\n",a >> 3 ,a << 3);
}
#endif

#ifdef lista6EX6
/*6 - Receba 2 numeros inteiros via teclado. Compare utilizando as expressoes
    abaixo. Imprima no video o resultado (se verdadeiro = 1 se falso = 0)
    a e b e' recebido via teclado para cada expressao
        a >= 120 && b < 240
        a != 60  || b == 120
       (a*25) == 100 && (b+10) >= 100
       ((a + 300)/5) >= 100 || (b - 200) <= 200*/

main(){
int a,b;

printf("\nDigite dois numeros: ");
scanf("%d %d",&a,&b);

if (a >= 120 && b < 240){
    printf("\n1");
}
else
    printf("\n2");


if (a != 60  || b == 120){
    printf("\n1");
}else
     printf("\n2");


if ((a*25) == 100 && (b+10) >= 100){
    printf("\n1");
}  else
    printf("\n2");


if (((a + 300)/5) >= 100 || (b - 200) <= 200){
    printf("\n1");
}  else
    printf("\n2");

}

#endif // lista6EX6

#ifdef lista6EX7
/*7 - Escreva um programa que tenha o menu abaixo. F
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit e Celsius e Kelvin
       3 - transforma graus Kelvin e Celsius e Fahrenheit*/

main(){
    int opc;
    float a;

    printf("MENU");
    printf("\n1 - transforma graus Celsius em Fahrenheit e Kelvin\n2 - transforma graus Fahrenheit e Celsius e Kelvin\n3 - transforma graus Kelvin e Celsius e Fahrenheit\n");
    scanf("%d", &opc);

    if(opc == 1){
        printf("\nDigite graus os Celsius: ");
        scanf("%f", &a);
        printf("\n%.1f F\t%.2f K",(a*9/5)+32,a+273.15);

    } else {
        if(opc == 2){
            printf("\nDigite graus os Fahrenheit: ");
            scanf("%f", &a);

             printf("\n%.1f C\t%.2f K",((a-32)*(5/9)),((a-32)*(5/9))+273.15);

        } else {
            if(opc == 3){
                printf("\nDigite graus os Kelvin ");
            scanf("%f", &a);

            printf("\n%.1f C\t%.2f F",a-273.15, (a-273,15)*9/5+32);
            } else {
                printf("Opcao Invalida");
            }
        }
    }
}
#endif // lista6EX7

#ifdef lista6EX8
/*8 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mês e ano) do seu nascimento e a
    data (dia, mês e ano) atual.Verifique se a data atual e' anterior a data de
    nascimento.*/

int main(){
int a,b,c,d,e,f,ano,dia,mes;
do{
do{
printf("\nDigite o ano que vc nasceu: ");
scanf("%d",&a);}while(a<=0);
do{
printf("\nDigite o mes que vc nasceu: ");
scanf("%d",&b);}while(b<=0 || b>12);
do{
printf("\nDigite o dia que vc nasceu: ");
scanf("%d",&c);}while(c<=0||c>31);
do{
printf("\nDigite o ano atual: ");
scanf("%d",&d);}while(d<=0);
do{
printf("\nDigite o mes atual: ");
scanf("%d",&e);}while(e<=0 || e>12);
do{
printf("\nDigite o dia atual: ");
scanf("%d",&f);}while(f<=0 || f>31);
}while(d<a);
ano=d-a;
mes=e-b;
if (mes<0)
    ano-=1;
dia=f-c;
if (dia<0){
    dia+=31;
    mes-=1;}
    printf("\nSua idade dia %d Mes %d Ano %d",dia,mes,ano);
}
#endif // lista6EX8

#ifdef lista6EX9
/*9 - Escreva um programa para determinar o dia da semana de uma determinada
    data (dia, mes e ano).
*/

int main(){
int dia,mes,ano,a,b,d,res;
do{
printf("\nDigite o ano: ");
scanf("%d",&ano);}while(ano<=0);
do{
printf("\nDigite o mes: ");
scanf("%d",&mes);}while(mes<=0 || mes>12);
do{
printf("\nDigite o dia: ");
scanf("%d",&dia);}while(dia<=0 || dia>31);
a=ano-1900;
b=a/4;
if (a%4==0)
    b-=1;
if (mes==1 || mes==10)
    mes=0;
else if (mes==2 || mes==3 || mes==11)
        mes=3;
else if (mes==4 || mes==7)
        mes=6;
else if (mes==5)
        mes=1;
else if (mes==6)
        mes=4;
else if (mes==8)
    mes=2;
else if (mes==9 || mes==12)
    mes=5;

d=dia-1;
res=a+b+mes+d;
printf("teste mes %d",res);
res=(res%7);
printf("teste mes %d",res);
if (res==0)
    printf("\nSegunda-Feira!");
else if (res==1)
    printf("\nTerca-Feira!");
else if (res==2)
    printf("\nQuarta-Feira!");
else if (res==3)
    printf("\nQuinta-Feira!");
else if (res==4)
    printf("\nSexta-Feira!");
else if (res==5)
    printf("\nSabado!");
else if (res==6)
    printf("\nDomingo!");
}
#endif // ex9

#ifdef lista6EX10
/*10 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
     possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%;
     MS 8%). Escreva um programa em que o usuario entre com o valor do produto e o
     estado destino do produto. O programa deve mostrar o preco final do produto
     acrescido do imposto do estado em que ele sera vendido. Se o estado digitado
     nao for valido, mostrar uma mensagem de erro.*/

int main(){
float valor;
float taxa;
char a[3];
do{
printf("\nValor do produto: ");
scanf("%f",&valor);}while(valor<=0);
do{
    printf("Qual estado: \n\tMG 7%\t SP 12%\t RJ 15%\t MS 8% \n");
    scanf("%s",&a);
    getchar();
    printf("\nteste %s",a);
    } while (a!="MG\o" || "mg\o");}
#endif // ex10
