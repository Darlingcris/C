#include <stdio.h>
#include <locale.h>


main (){
    setlocale(0,"Portuguese");

    int num;
    //float parte = 3;

    printf ("Digite um número: ");
    scanf("%i", &num);

    printf("O número digitado foi %i, o seu dobro é %i e a terça parte é %.2f\n", num,(num*2),((float)num/3));
}
