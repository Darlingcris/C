#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");

    int num; //n

    printf("Digite um número: ");
    scanf("%i", &num);

    //n = (num%2==0)? "Par" : "Impar";

    //printf("O número %i é %s.", num,n);
    printf("O número %i é %s.", num,((num%2==0)? "Par" : "Impar"));
}
