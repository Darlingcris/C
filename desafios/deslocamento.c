#include <stdio.h>

main(){

    int num, desl;

    printf("Digite um numero: ");
    fflush(stdin);
    scanf("%i",&num);

    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%i",&desl);

    printf("\nCalculando %i >> %i = %i.",num,desl,(num>>desl));
    printf("\nCalculando %i << %i = %i.\n",num,desl,(num<<desl));
}
