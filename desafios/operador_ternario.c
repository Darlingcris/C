#include <stdio.h>
#include <locale.h>
main(){

    setlocale(0,"Portuguese");

    int num, n;

    printf("Digite um n�mero: ");
    scanf("%i", &num);

    n = (num%2==0)? "Par" : "Impar";

    printf("O n�mero %i � %s.", num,n);
}
