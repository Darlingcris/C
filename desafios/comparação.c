#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
    setlocale(0,"Portuguese");
    srand(time(NULL));
    int numero = rand() % 5+1,palpite;

    printf("Vou pensar em um n�mero entre 1 e 5... Tente adivinhar...\n");
    printf("Qual � o seu palpite? ");
    scanf("%i",&palpite);
    printf("\nEu pensei no n�mero %i e voc� digitou %i.\n",numero,palpite);

}
