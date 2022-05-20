#include <stdio.h>
#include <time.h>
#include <locale.h>

main(){

    setlocale (0,"Portuguese");

    time_t t;
    time (&t);
    struct tm *data;
    data = localtime(&t);

    int d = data -> tm_year + 1900;
    int ano,idade;

    printf("\nEm que ano voce nasceu? ");
    scanf("%i",&ano);

    idade = d - ano;

    if (idade>65){
        printf("\nVoce tem %i anos.\n", idade);
        printf("\n------------ATENÇÃO------------");
        printf("\nDirija-se à fila preferencial!");
        printf("\n-------------------------------\n");
    }

    printf("\nTenha um Bom Dia!!!");


}
