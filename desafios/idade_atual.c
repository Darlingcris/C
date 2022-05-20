#include <stdio.h>
#include <time.h>

main(){

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int ano = data -> tm_year + 1900;
    int nascimento,idade;

    printf("Em que ano voce nasceu? ");
    scanf("%i",&nascimento);

    idade = ano-nascimento;

    printf("\nEstamos no ano de %i.",ano);
    printf("\nVoce tem %i ",idade);

    if (idade<18){
        printf("e ainda nao deve fazer o Alistamento Militar.\n");

    }else{
        printf(" e espero que voce ja tenha feito o Alistamento Militar!\n");
    }
}
