#include <stdio.h>
#include <locale.h>

main(){
    setlocale(0,"Portuguese");
    int num;

    printf("Digite um numero: ");
    scanf("%i",&num);

    if (num > 0){
        printf("O inverso de %i � %.2f",num,(float)1/num);

    }else if (num<0){
        printf("O valor absoluto de %i � %i",num,num*(-1));
        }if (num==0){
            printf("O valor de %i � %i",num,num);
    }
}



