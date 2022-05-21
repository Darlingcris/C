#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");

    int num;

    printf("\nMe diga um número e eu te direi se ele é Positivo, Negativo ou Nulo.");
    printf("\nDigite um número: ");
    scanf("%i",&num);

    if (num>0){
        printf("\nO número %i é Positivo!\n",num);
    }else if (num<0){
        printf("\nO número %i é Negativo!\n",num);
    }else if (num==0){
        printf("\nO número %i é Nulo!\n",num);
    }
}
