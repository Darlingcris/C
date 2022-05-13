#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");

    int num, ant,suc;

    printf("Digite um numero: ");
    scanf("%i", &num);
    ant = num - 1;
    suc = num + 1;

    printf("O numero digitado foi %i, o seu antecessor é %i e o sucessor é %i", num,ant,suc);
}
