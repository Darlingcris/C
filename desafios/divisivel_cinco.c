#include <stdio.h>
#include <locale.h>

main() {

    setlocale(0,"Portuguese");
    int num;


    printf("Digite um n�mero: ");
    scanf("%i", &num);



    if (num%5==0){
        printf("O n�mero %i � divis�vel por 5!",num);

    }else{
        printf("O n�mero %i n�o � divis�vel por 5!",num);

    }

}
