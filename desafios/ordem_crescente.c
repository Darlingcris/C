#include <stdio.h>
#include <locale.h>

main (){

    setlocale(0,"Portuguese");

    int n1,n2;

    printf("\nMe diga um n�mero e eu colocarei em Ordem Crescente.");
    printf("\nDigite um n�mero: ");
    scanf("%i",&n1);
    printf("\nDigite um outro n�mero: ");
    scanf("%i",&n2);
    printf("\nOs n�meros em ordem s�o: ");

    if (n1>n2){
        printf("%i e %i",n2,n1);
    }
    else{
        printf("%i e %i",n1,n2);
    }

}
