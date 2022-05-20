#include <stdio.h>

main(){

    int ano;

    printf("Digite um ano qualquer: ");
    scanf("%i", &ano);


    if (ano%4==0 && ano%100!=0 || ano%400==0){
        printf("O ano de %i E Bissexto.",ano);
    }else{
        printf("O ano de %i Nao e Bissexto.",ano);
    }
}
