#include <stdio.h>

main(){

    int num, desl;

    printf("Digite um numero: ");
    scanf("%i",&num);

    printf("Digite o deslocamento: ");
    scanf("%i",&desl);

    printf("\nCalculando %i >> %i = %i.",num,desl,num>>desl);
    printf("\nCalculando %i << %i = %i.\n",num,desl,num<<desl);
}
