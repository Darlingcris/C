#include <stdio.h>
#include <math.h>

main(){

    int num1, num2,potencia;

    printf("Escreva um numero: ");
    scanf("%i",&num1);

    printf("Escreva outro numero: ");
    scanf ("%i",&num2);

    potencia = pow(num1, num2);

    printf("O valor da potencia e: %i",potencia);
}
