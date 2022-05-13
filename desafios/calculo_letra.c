#include <stdio.h>

main(){

    char letra;

    printf("Digite uma letra: ");
    letra = getchar();

    printf("Antes da letra '%c' temos a letra '%c'. Depois temos a letra '%c'.",letra, letra-1, letra+1);
}
