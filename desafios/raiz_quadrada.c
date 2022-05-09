#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");

    int num,quadrado;
    float raiz;

    printf("Digite um numero inteiro: ");
    scanf("%i",&num);

    raiz = sqrt(num);
    quadrado = pow(num,2);

    printf("O número digitado foi %i, a sua raíz quadrada é %.2f e o quadrado do número é %i.",num,raiz,quadrado);
}
