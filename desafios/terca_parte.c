#include <stdio.h>
#include <locale.h>


main (){
    setlocale(0,"Portuguese");

    int num;
    float parte = 3,p;

    printf ("Digite um n�mero: ");
    scanf("%i", &num);

    p = num/parte;

    printf("O n�mero digitado foi %i, o seu dobro � %i e a ter�a parte � %.2f", num,num*2,p);
}
