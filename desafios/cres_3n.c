#include <stdio.h>
#include <locale.h>

main (){

    setlocale(0,"Portuguese");

    int n1,n2,n3;

    printf("\nMe diga um número e eu colocarei em Ordem Crescente.");
    printf("\nDigite o primeiro número: ");
    scanf("%i",&n1);
    printf("\nDigite o segundo número: ");
    scanf("%i",&n2);
    printf("\nDigite o terceiro número: ");
    scanf("%i",&n3);
    printf("\nOs números em ordem são: ");

    if (n1>n2 && n2>n3){
        printf("%i, %i e %i",n3,n2,n1);
    }
    else if (n2>n3 && n3>n1){
        printf("%i,%i e %i",n1,n3,n2);
    }
    else if (n3>n1 && n1>n2){
        printf("%i,%i e %i",n2,n1,n3);
    }

}
