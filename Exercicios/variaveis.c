#include <stdio.h>   //{}
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    unsigned int idade=33;
    float peso=61.5;
    char sexo='F';
    char *nome="Darling";
    //char nome[]="Darling";

    printf("A pessoa se chama %s, é do sexo %c, pesa %.1f e tem %i anos de idade.", nome,sexo,peso,idade);
}
