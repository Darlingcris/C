#include <stdio.h>  //{}
#include <locale.h>

void main (){
    setlocale(LC_ALL,"Portuguese");
    printf("A %s tem %i anos de idade.\n", "Darling",42);
    printf("Seu peso atual � de %.2f Kg. \n", 61.5);
    printf("O seu sexo � %c.\n",'F');
}
