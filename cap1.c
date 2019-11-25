#include <stdio.h>
#include <math.h>
#define lista1EX1

/*****************************************************************************

			LISTA 1

*****************************************************************************/

#ifdef lista1EX1
/*1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
    long, unsigned(char, int, short, long), float e double com seus valores
    limites e imprima-os no video. Utilize variaveis globais para os valores
    positivos e locais para os negativos.*/
main(){
int posint = 32767;
short posshort = 32767;
long poslong = 2147483647;
unsigned char c=0, d=255;
unsigned int unint1=0, unint2=65535;
unsigned short unshort1=0, unshort2=65535;
unsigned  long unlong1=0, unlong2=4294967295;

	printf("O tamanho de uma variavel char eh de apenas um byte e ssua faixa de valores vao de -%c%c%c ate %c%c%c.", 49,50,56,49,50,55);
	printf("\nO tamanho de uma variavel int eh de dois bytes sua faixa de valores vao de %d ate %d.", negint,posint);
	printf("\nO tamanho de uma variavel short eh de dois bytes sua faixa de valores vao de %hd ate %hd.", negshort,posshort);
	printf("\nO tamanho de uma variavel long eh de quatro bytes sua faixa de valores vao de %ld ate %ld.", neglong,poslong);
	printf("\nVariaveis unsigned soh aceitam valores positivos, portanto a variavel char tem seus valores alterados e vao de %u%cate %u.%c", c,c,d,d);
	printf("\nVariaveis unsigned soh aceitam valores positivos, portanto a variavel int tem seus valores alterados e vao de %u ate %u.", unint1,unint2);
	printf("\nVariaveis unsigned soh aceitam valores positivos, portanto a variavel short tem seus valores alterados e vao de %hu ate %hu.", unshort1,unshort2);
	printf("\nVariaveis unsigned soh aceitam valores positivos, portanto a variavel long tem seus valores alterados e vao de %lu ate %lu.", unlong1,unlong2);
}
}
#endif // ex1

#ifdef lista1EX2
/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/
main(){
short int s;
long int l;
int i;
float f;
double d;
char c;

printf("Digite um valor short: ");
scanf("%ld", &s );
printf("Digite um valor long: ");
scanf("%hd", &l );
printf("Digite um valor int: ");
scanf("%d", &i );
printf("Digite um valor float: ");
scanf("%f", &f );
printf("Digite um valor double: ");
scanf("%lf", &d );
printf("Digite um valor char: ");
scanf(" %c", &c );
system("cls");

printf("\n%10d %10d %10d %10d %10d %10d\n", 10, 20, 30, 40, 50, 60);
printf("12345678901234567890123456789012345678901234567890123456789012345\n");
printf("%10ld %20hd %20d\n", s, l, i);
printf("%20.2f %20.2lf %20c\n", f, d, c);
}
#endif // ex2

#ifdef lista1EX3
/*3 - Acrescente ao exercicio anterior mais uma linha. Receba via teclado os valores
    sem sinal char, int e long int e escrevendo nas coluna 10, 30 e 50.*/


main(){
short int s;
long int l;
int i;
float f;
double d;
char c;
unsigned char uc;
unsigned int ui;
unsigned ul;

printf("Digite um valor short: ");
scanf("%ld", &s );
printf("Digite um valor long: ");
scanf("%hd", &l );
printf("Digite um valor int: ");
scanf("%d", &i );
printf("Digite um valor float: ");
scanf("%f", &f );
printf("Digite um valor double: ");
scanf("%lf", &d );
printf("Digite um valor char: ");
scanf(" %c", &c );
printf("Digite um valor unsigned char: ");
scanf(" %c", &uc );
printf("Digite um valor unsigned int: ");
scanf("%u", &ui );
printf("Digite um valor unsigned long int: ");
scanf("%lu", &ul );
system("cls");

printf("\n%10d%10d%10d%10d%10d%10d\n", 10, 20, 30, 40, 50, 60);
printf("12345678901234567890123456789012345678901234567890123456789012345\n");
printf("%10ld %20hd %20d\n", s, l, i);
printf("%20.2f %20.2lf %20c\n", f, d, c);
printf("%9u%c%20u%20lu\n", uc, uc, ui, ul);
}

#endif // ex3

#ifdef lista1EX4
/*4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/

main(){
int a, b;

printf("Digite o valor de A: ");
scanf("%d", &a);
printf("Digite o valor de B: ");
scanf("%d", &b);

printf("A: %d", b);
printf("B: %d", a);
}
#endif // ex4

#ifdef lista1EX5
/*5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/

main(){
int n1, n2, m;
printf("menor multiplo de ");
scanf("%d", &n1);
printf("maior que ");
scanf("%d", &n2);

do{
		if((n2%n1)!=0){
			n2=n2+1;}
		}while((n2%n1)!=0);
		m=n2;

printf("eh %d", m);
}

#endif // lista1EX5

#ifdef lista1EX6

/*6 - Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/

main(){
int s2, h, m, s1;
printf("Digite um tempo em segundos: ");
scanf("%d", s1);

h=s/3600;
m=()

}
#endif // lista1EX6

#ifdef lista1EX7
/*Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321*/
 main(){
	 int numLido;
	 int i=0, numGerado[3];
	 printf("Digite um numero inteiro de 03 digitos: ");
	 scanf("%d",&numLido);
	 for(i=0;i<3;i++){
		 numGerado[i]=numLido%10;
		 numLido = numLido/10;}
		 printf("O numero ao contrario eh: ");
		 for(i=0;i<3;i++){
		 printf("%d",numGerado[i]);}
}
#endif
#ifdef lista1EX8
/*Escreva um program que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $10 e $1 em que o valor lido pode ser
    decomposto. Imprimir o valor lido e a relação de notas necessárias.*/
main(){
	int valor, cem, cinquenta, dez,um;
	printf("Digite o valor em reais: ");
	scanf("%d",&valor);
	cem=valor/100;
	cinquenta=(valor-(100*cem))/50;
	dez=(valor-((100*cem)+(50*cinquenta)))/10;
	um=(valor-((100*cem)+(50*cinquenta)+(10*dez)))/1;
	printf("Numero minimo de notas: %d nota(s) de $100, %d nota(s) de $50, %d nota(s) de $10 e %d nota(s) de $1.",cem,cinquenta,dez,um);
}
#endif
