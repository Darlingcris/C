#include <stdio.h>
#include <locale.h>
#include <time.h>

main (){

    setlocale(0,"Portuguese");
    time_t t;
    time (&t);
    struct tm *date;
    date = localtime(&t);

    int ano = date -> tm_year + 1900,nascimento,idade,alist,atraso;



    printf("\nAtualmente estamos no ano de %i",ano);
    printf("\nDigite o ano que você nasceu: ");
    scanf("%i",&nascimento);

    idade = ano - nascimento;

    printf("\nSua idade é: %i anos.\n",idade);

    alist=nascimento+18;
    atraso= ano -alist;

    if (idade>18){
        printf("\nSeu alistamento foi em %i. Já se passaram %i anos.\n",alist,atraso);
    }else if (idade<18){
        printf("\nSeu alistamento será em %i. Ainda faltam %i anos.\n",alist,18-idade);
    }else if (idade==18){
        printf("\nVocê completa 18 anos exatamente em %i. Deve se alistar!\n",ano);
    }
}
