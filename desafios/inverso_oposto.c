#include <stdio.h>
#include <locale.h>

main(){
    setlocale(0,"Portuguese");
    int num;

    printf("Digite um numero (positivo ou negativo): ");
    scanf("%i",&num);

    if (num > 0){
        printf("O inverso de %i é %.2f.",num,(float)1/num);

    }else{
        if (num<0){
        printf("O valor absoluto de %i é %i.",num,num*(-1));
        }else{
            printf("O valor de %i é %i.",num,num);
    }
    }
}



