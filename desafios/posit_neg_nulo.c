#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");

    int num;

    printf("\nMe diga um n�mero e eu te direi se ele � Positivo, Negativo ou Nulo.");
    printf("\nDigite um n�mero: ");
    scanf("%i",&num);

    if (num>0){
        printf("\nO n�mero %i � Positivo!\n",num);
    }else if (num<0){
        printf("\nO n�mero %i � Negativo!\n",num);
    }else if (num==0){
        printf("\nO n�mero %i � Nulo!\n",num);
    }
}
