#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");
    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("\nAntes da letra '%c' temos a letra '%c'. Depois temos a letra '%c'.\n",letra, (letra-1), (letra+1));
}
