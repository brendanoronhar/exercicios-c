#include <stdio.h>
#include <math.h>
#define lista2EX1

/*****************************************************************************

			LISTA 2

*****************************************************************************/

#ifdef lista2EX1
/*1 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores digitados.*/

    main(){
        int x;
    for(;;){
      printf("Digite um número: ");
      scanf("%d", &x);
      if(x < 0){
        printf("fim do loop :)");
        break;
      }

    }
    }
#endif // lista2EX1

#ifdef lista2EX2
/*2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else.
*/
main(){
int menor = 1, maior = 99;
int resultado;
char resp;
float media;

printf("Pense em um numero de 1 a 100.\nResponda com:\n> para Maior\n< para Menor\n= para Igual");

for(;;){
media = (menor + maior)/2;
printf("\nEsse numero eh maior, menor ou igual a %f ? ", media);
scanf(" %c", &resp);
if(resp == '>'){
    menor = media;
} else{
    if(resp == '<'){
    maior = media;
    } else {
        if(resp == '='){
        resultado = media;
        break;
    } else {
    printf("Resposta Invalida");
    }
}
}
}
printf("O numero que vc pensou eh: %d", resultado);
}
#endif // lista2EX2

#ifdef lista2EX3
/*3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/

main(){
    int menor = 1, maior = 99;
    int resultado, tentativas = 0;
    char resp;
    float media;

    printf("Pense em um numero de 1 a 100.\nResponda com:\n> para Maior\n< para Menor\n= para Igual");

do{
tentativas++;
media = (menor + maior)/2;
printf("\nEsse numero eh maior, menor ou igual a %f ? ", media);
scanf(" %c", &resp);

switch(resp)
{
    case '>': {
        menor = media;
        break;
    }
    case '<': {
        maior = media;
        break;
    }
    case '=': {
        resultado = media;
        break;
    }
    default: {
        printf("\nOpçao Invalida");
        break;
    }
}
}while(resp != '=');

printf("O numero que vc pensou eh: %d", resultado);
printf("\nNumero de tentativas: %d", tentativas);
}

#endif // lista2EX3

#ifdef lista2EX4
/*4 - De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída.
    Escreva um programa que recebe os dois instantes dados em horas, minutos e
    segundo e determina o intervalo de tempo (em horas, minutos e segundos)
    decorrido entre eles.*/

    main(){


    }
#endif // lista1EX4

#ifdef lista2EX5
/*5 - Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior*/
main(){
    float num, dec, res;

    printf("Digite um numero para arredondamento: ");
    scanf("%f", &num);

    dec = num - floor(num);

    if(dec <= 0.24){
        res = floor(num);
    } else {
        if(dec >= 0.25 && dec <= 0.74){
            res = floor(num) + 0.5;
        } else {
            res = floor(num) + 1;
        }
    }

    printf("O numero arredondado eh: %f", res);

}
#endif // lista2EX5

#ifdef lista2EX6
/*6 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 3,88 e o preço do litro do álcool é R$ 3,18.*/

main(){
    int litros;
    char tipo;
    float subtotal, valorFinal;

    printf("Quantos litros de combustivel você deseja?");
    scanf("%d", &litros);
    printf("Alcool ou Gasolina?");
    scanf(" %c", &tipo);

    if(tipo == 'a'){
            subtotal = (litros * 3.18);
        if(litros <= 20){
            valorFinal = subtotal - subtotal*0.03;
        } else {
            valorFinal = subtotal - subtotal*0.05;
        }
    } else{
        if(tipo == 'g'){
        subtotal = (litros * 3.88);
        if(litros <= 20){
            valorFinal = subtotal - subtotal*0.04;
        } else {
            valorFinal = subtotal - subtotal*0.06;
        }
    } else {
        printf("Tipo de gasolina invalido");
    }
    }

    printf("Total a ser pago: %f", valorFinal);


}
#endif // lista2EX6

#ifdef lista2EX7

/*7 - Leia a distancia em Km e a quantidade de litros de gasolina consumidos
    por um carro em um percurso, calcule o consumo em Km/l e escreva uma
    mensagem de acordo com a tabela abaixo:
    CONSUMO (Km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/

main(){
    int dist, litros;
    float consumo;

    printf("Distancia em KM: ");
    scanf("%d", &dist);
    printf("Litros consumidos: ");
    scanf("%d", &litros);

    consumo = dist/litros;

    if(consumo < 8){
        printf("Venda o carro!");
    } else {
    if(consumo >= 8 && consumo <= 14){
        printf("Economico!");
    } else {
        printf("Super Economico!");
    }
    }
}

#endif // lista2EX7

#ifdef lista2EX8

/*8 - Escreva um programa que calcule o IMC de uma pessoa e mostre sua classificacao
    conforme tabela abaixo:
       IMC             Classificacao
     < 18,5            Abaixo do Peso
       18,6 - 24,9     Saudavel
       25,0 - 29,9     Peso em excesso
       30,0 - 34,9     Obesidade Grau I
       35,0 - 39,9     Obesidade Grau II(severa)
     > 40,0            Obesidade Grau III(morbida)
*/

main(){
    float altura, peso;
    float imc;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    imc = peso/ (altura * altura) ;

    if(imc < 18.5){
        printf("Abaixo do peso");
    } else {
       if(imc >= 18.5 && imc <= 24.9){
        printf("Saudavel");
    } else {
        if(imc >= 25 && imc <= 29.9){
        printf("Peso em excesso");
    } else {
        if(imc >= 30 && imc <= 34.9){
        printf("Obesidade Grau I");
    } else {
        if(imc >= 35.5 && imc <= 39.9){
        printf("Obesidade Grau II (severa)");
    } else {
        if(imc >= 40){
        printf("Obesidade Grau III (morbida)");
    }
    }
    }
    }
    }
    }
}


#endif // lista2EX8
