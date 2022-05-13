#include <stdio.h>
#include <locale.h>


main (){
    setlocale(0,"Portuguese");

    int num;
    float parte = 3,p;

    printf ("Digite um número: ");
    scanf("%i", &num);

    p = num/parte;

    printf("O número digitado foi %i, o seu dobro é %i e a terça parte é %.2f", num,num*2,p);
}
