#include <stdio.h>
#include <locale.h>

main() {

    setlocale(0,"Portuguese");
    int num, div;


    printf("Digite um número: ");
    scanf("%i", &num);

    //6div = num%5;

    if (num%5==0){
        printf("O número %i é divisível por 5!",num);

    }else{
        printf("O número %i não é divisível por 5!",num);

    }

}
