#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");

    int num;

    printf("Digite um n�mero: ");
    scanf("%i",&num);

    if (num%3==0 && num%7==0){
        printf("\nO n�mero %i � divis�vel por 3 e 7.\n",num);
    }else{
        printf("\nO n�mero %i n�o � divis�vel por 3 e 7.\n",num);
    }

}
