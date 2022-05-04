#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
    setlocale(0,"Portuguese");
    srand(time(NULL));
    int numero = rand() % 5+1,palpite;

    printf("Vou pensar em um número entre 1 e 5... Tente adivinhar...\n");
    printf("Qual é o seu palpite? ");
    scanf("%i",&palpite);
    printf("\nEu pensei no número %i e você digitou %i.\n",numero,palpite);

}
