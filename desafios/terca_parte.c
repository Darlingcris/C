#include <stdio.h>
#include <locale.h>


main (){
    setlocale(0,"Portuguese");

    int num;
    //float parte = 3;

    printf ("Digite um n�mero: ");
    scanf("%i", &num);

    printf("O n�mero digitado foi %i, o seu dobro � %i e a ter�a parte � %.2f\n", num,(num*2),((float)num/3));
}
