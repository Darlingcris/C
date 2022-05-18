#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");

    char prato[15], bebida[15];
    float c1, c2;
    int op_p,op_b;

    printf("Qual o prato desejado? Escolha...\n\n1 - Italiano\n2 - Japones\n3 - Salvadorenho\n");
    printf("\nQual a sua opção? ");
    scanf ("%i", &op_p);

    printf("\nQual a bebida desejada? Escolha...\n\n1 - Chá\n2 - Suco de laranja\n3 - Refrigerante\n");
    printf("\nQual a sua opção? ");
    scanf ("%i", &op_b);

    switch (op_p){
    case 1:
        c1 = 750;
        printf("\nO prato Italiano tem 750 calorias ");
        break;
    case 2:
        c1=324;
        printf("\nO prato Japonês tem 324 calorias ");
        break;
    case 3:
        c1=545;
        printf("\nO prato Salvadorenho tem 545 calorias ");
        break;
    }


    switch (op_b){
    case 1:
        c2 = 30;
        printf("e o chá tem 30 calorias. ");
        break;
    case 2:
        c2=80;
        printf("e o suco de laranja 80 calorias. ");
        break;
    case 3:
        c2=90;
        printf("e o refrigerante 90 calorias. ");
        break;
    }

    printf("\nO valor total de calorias a serem ingeridas será de: %.2f cal.\n",c1+c2);



}
