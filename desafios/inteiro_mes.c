#include <stdio.h>
#include <locale.h>

main (){
    setlocale(0,"Portuguese");
    int num;
    char mes[10];

    printf("Digite o n�mero do m�s: ");
    scanf("%i",&num);

    switch (num){
        case (1): printf("\nO n�mero 1 corresponde ao m�s de Janeiro.\n");
        break;
        case (2): printf("\nO n�mero 2 corresponde ao m�s de Fevereiro.\n");
        break;
        case (3): printf("\nO n�mero 3 corresponde ao m�s de Mar�o.\n");
        break;
        case (4): printf("\nO n�mero 4 corresponde ao m�s de Abril.\n");
        break;
        case (5): printf("\nO n�mero 5 corresponde ao m�s de Maio.\n");
        break;
        case (6): printf("\nO n�mero 6 corresponde ao m�s de Junho.\n");
        break;
        case (7): printf("\nO n�mero 7 corresponde ao m�s de Julho.\n");
        break;
        case (8): printf("\nO n�mero 8 corresponde ao m�s de Agosto.\n");
        break;
        case (9): printf("\nO n�mero 9 corresponde ao m�s de Setembro.\n");
        break;
        case (10): printf("\nO n�mero 10 corresponde ao m�s de Outubro.\n");
        break;
        case (11): printf("\nO n�mero 11 corresponde ao m�s de Novembro.\n");
        break;
        case (12): printf("\nO n�mero 12 corresponde ao m�s de Dezembro.\n");
        break;
        default: printf("\nN�mero Inv�lido!\n");
        break;
    }
}
