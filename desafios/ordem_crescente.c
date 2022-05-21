#include <stdio.h>
#include <locale.h>

main (){

    setlocale(0,"Portuguese");

    int n1,n2;

    printf("\nMe diga um número e eu colocarei em Ordem Crescente.");
    printf("\nDigite um número: ");
    scanf("%i",&n1);
    printf("\nDigite um outro número: ");
    scanf("%i",&n2);
    printf("\nOs números em ordem são: ");

    if (n1>n2){
        printf("%i e %i",n2,n1);
    }
    else{
        printf("%i e %i",n1,n2);
    }

}
