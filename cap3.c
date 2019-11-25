#include <stdio.h>
#include <math.h>
#define lista3EX1

/*****************************************************************************

			LISTA 3

*****************************************************************************/

#ifdef lista3EX1
/*1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double*/

main(){

    int vInt[3];
    float vFloat[3];
    long vLong[3];
    double vDouble[3];
    unsigned int vUnsigned[3];

    char resp;

    do {
        for(int i=0; i<3; i++){
            printf("Digite um Int: ");
            scanf("%d", &vInt[i]);
        }
        system("cls");

        for(int i=0; i<3; i++){
            printf("Digite um Float: ");
            scanf("%f", &vFloat[i]);
        }
        system("cls");

        for(int i=0; i<3; i++){
            printf("Digite um Long: ");
            scanf("%ld", &vLong[i]);
        }
        system("cls");

        for(int i=0; i<3; i++){
            printf("Digite um Double: ");
            scanf("%lf", &vDouble[i]);
        }
        system("cls");

        for(int i=0; i<3; i++){
            printf("Digite um Unsigned: ");
            scanf("%u", &vUnsigned[i]);
        }
        system("cls");

        printf("\n%10d %9d %9d %9d %9d\n", 10, 20, 30, 40, 50, 60);
        printf("12345678901234567890123456789012345678901234567890\n");
        printf("%5d %20ld %23u \n", vInt[0], vLong[0], vUnsigned[0]);
        printf("%17.2f %20.2lf\n", vFloat[0], vDouble[0]);
        printf("%5d %20ld %23u \n", vInt[1], vLong[1], vUnsigned[1]);
        printf("%17.2f %20.2lf\n", vFloat[1], vDouble[1]);
        printf("%5d %20ld %23u \n", vInt[2], vLong[2], vUnsigned[2]);
        printf("%17.2f %20.2lf\n", vFloat[2], vDouble[2]);

        printf("\n\n Deseja repetir? S ou N ");
        scanf(" %c", &resp);
        system("cls");

    } while(resp == 's');

}
#endif // lista3EX1

#ifdef lista3EX2

/*2 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10)
*/

main(){
    int v[10];

    for(int i=0; i<10; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i]);
    }

    if(v[0] == v[9] && v[1] == v[8] && v[2] == v[7] && v[3] == v[6] && v[4] == v[5]) {
        printf("O vetor eh palindromo");
    } else {
        printf("O vetor nao eh palindromo");
    }

}
#endif // lista3EX2

#ifdef lista3EX3
/*3 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
    inteiros e inicialize-o com "0". Receba via teclado novos valores para
    todos os elementos do vetor e imprima no video estes novos conteudos.*/

main(){
    int v[2][3][3];

    for(int i=0; i<2; i++){
       for(int a=0; a<3; a++) {
            for(int b=0; b<3; b++){
                printf("Digite um valor: ");
                scanf("%d", &v[i][a][b]);
            }
       }
    }

    printf("%d %d %d\n", v[0][0][0], v[0][0][1], v[0][0][2]);
    printf("%d %d %d\n", v[0][1][0], v[0][1][1], v[0][1][2]);
    printf("%d %d %d", v[0][2][0], v[0][2][1], v[0][2][2]);

    printf("\n\n%d %d %d\n", v[1][0][0], v[1][0][1], v[1][0][2]);
    printf("%d %d %d\n", v[1][1][0], v[1][1][1], v[1][1][2]);
    printf("%d %d %d", v[1][2][0], v[1][2][1], v[1][2][2]);


}
#endif // lista3EX3

#ifdef lista3EX4

/*4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.
*/

main(){
    int v1[2][3], v2[2][3], v3[2][3];
    int a, b;

    printf("PRIMEIRO VETOR");
    for(a=0; a<2; a++) {
            for(b=0; b<3; b++){
                printf("\nDigite um valor: ");
                scanf("%d", &v1[a][b]);
            }
       }
       system("cls");

       printf("SEGUNDO VETOR");
       for(a=0; a<2; a++) {
            for(b=0; b<3; b++){
                printf("\nDigite um valor: ");
                scanf("%d", &v2[a][b]);
            }
       }
       system("cls");

        for(a=0; a<2; a++) {
            for(b=0; b<3; b++){
                v3[a][b] = v1[a][b] * v2[a][b];
            }
       }

       for(a=0; a<2; a++) {
            for(b=0; b<3; b++){
                printf("\nIndice: [ %d ][ %d ]\n", a, b);
                printf("Valores: %d e %d\n", v1[a][b], v2[a][b]);
                printf("Resultado: %d\n", v3[a][b]);
            }
       }

}
#endif // lista3EX4

#ifdef lista3EX5

/*5 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores,
    um contendo as componentes de ordem ímpar e o outro contendo as componentes
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.
*/

main(){
    int x;
    int cP=0, cI=0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &x);

    int vT[x], vI[x], vP[x];

    for(int i=0; i<x; i++){
        printf("Digite o valor %d:", i+1);
        scanf("%d", &vT[i]);

        if((i%2) == 0){
            vP[cP]= vT[i];
            cP++;
        } else {
          vI[cI]= vT[i];
          cI++;
        }
    }
    system("cls");

    printf("VETOR PRINCIPAL\n");
    for(int i=0; i<10; i++){
        printf("Indice %d: %d\n", i, vT[i]);
    }
    printf("\nVETOR PAR\n");
    for(int i=0; i<cP; i++){
        printf("Indice %d: %d\n", i, vP[i]);
    }
    printf("\nVETOR IMPAR\n");
    for(int i=0; i<cI; i++){
        printf("Indice %d: %d\n", i, vI[i]);
    }
}

#endif // lista3EX5

#ifdef lista3EX6
/*6 - Escreva um programa que decomponha um vetor de inteiros em dois outros vetores,
    um contendo as componentes de valor ímpar e o outro contendo as componentes de
    valor par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2}.*/

main(){
    int x;
    int cP=0, cI=0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &x);

    int vT[x], vI[x], vP[x];

    for(int i=0; i<x; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vT[i]);

        if((vT[i]%2) == 0){
            vP[cP]= vT[i];
            cP++;
        } else {
          vI[cI]= vT[i];
          cI++;
        }
    }
    system("cls");

    printf("VETOR PRINCIPAL\n");
    for(int i=0; i<x; i++){
        printf("Indice %d: %d\n", i, vT[i]);
    }
    printf("\nVETOR PAR\n");
    for(int i=0; i<cP; i++){
        printf("Indice %d: %d\n", i, vP[i]);
    }
    printf("\nVETOR IMPAR\n");
    for(int i=0; i<cI; i++){
        printf("Indice %d: %d\n", i, vI[i]);
    }
}
#endif // lista3EX6

#ifdef lista3EX7
/*7 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado.
    Mostre ao final os valores em ordem.*/

main(){
    int vetorNumeros[10], x = 0, aux = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetorNumeros[i]);
    }
    for(int i = 0; i < 10; i++){
        for(x = i + 1; x < 10; x++){
            if(vetorNumeros[i] > vetorNumeros[x]){
                aux = vetorNumeros[i];
                vetorNumeros[i] = vetorNumeros[x];
                vetorNumeros[x] = aux;
            }
        }
    }
    printf("\nVetor ordenado -> ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetorNumeros[i]);
    }
}

#endif // lista3EX7

#ifdef lista3EX8
/*8 - Leia uma matriz 5 x 5. Leia tambem um valor X. O programa dever fazer a busca
    desse valor na matriz e, ao final escrever a localizacao (linha e coluna) ou
    uma mensagem de ”nao encontrado”.*/

main(){
    int matriz[5][5];
    int x;

    for(int a=0; a<5; a++){
        for(int b=0; b<5; b++){
           printf("Digite um número: ");
           scanf("%d", &matriz[a][b]);
        }
    }
    system("cls");

    printf("Digite um número já existente na matriz:\n");
    scanf("%d", &x);

    printf("O número %d encontra-se em: ");
    for(int a=0; a<5; a++){
        for(int b=0; b<5; b++){
           if(matriz[a][b] == x){
            printf("Linha [ %d ] e Coluna: [ %d ]\n", a, b);
           }
        }
    }



}
#endif // lista3EX8
