#include <stdio.h>
#include <locale.h>

main (){

    setlocale(0,"Portuguese");

    int n1,n2,n3;

    printf("\nMe diga um n�mero e eu colocarei em Ordem Crescente.");
    printf("\nDigite o primeiro n�mero: ");
    scanf("%i",&n1);
    printf("\nDigite o segundo n�mero: ");
    scanf("%i",&n2);
    printf("\nDigite o terceiro n�mero: ");
    scanf("%i",&n3);
    printf("\nOs n�meros em ordem s�o: ");

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
