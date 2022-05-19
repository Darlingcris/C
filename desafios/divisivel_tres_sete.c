#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%i",&num);

    if (num%3==0 && num%7==0){
        printf("\nO número %i é divisível por 3 e 7.\n",num);
    }else{
        printf("\nO número %i não é divisível por 3 e 7.\n",num);
    }

}
