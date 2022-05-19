#include <stdio.h>
#include <locale.h>

main (){
    setlocale(0,"Portuguese");
    int num;
    char mes[10];

    printf("Digite o número do mês: ");
    scanf("%i",&num);

    switch (num){
        case (1): printf("\nO número 1 corresponde ao mês de Janeiro.\n");
        break;
        case (2): printf("\nO número 2 corresponde ao mês de Fevereiro.\n");
        break;
        case (3): printf("\nO número 3 corresponde ao mês de Março.\n");
        break;
        case (4): printf("\nO número 4 corresponde ao mês de Abril.\n");
        break;
        case (5): printf("\nO número 5 corresponde ao mês de Maio.\n");
        break;
        case (6): printf("\nO número 6 corresponde ao mês de Junho.\n");
        break;
        case (7): printf("\nO número 7 corresponde ao mês de Julho.\n");
        break;
        case (8): printf("\nO número 8 corresponde ao mês de Agosto.\n");
        break;
        case (9): printf("\nO número 9 corresponde ao mês de Setembro.\n");
        break;
        case (10): printf("\nO número 10 corresponde ao mês de Outubro.\n");
        break;
        case (11): printf("\nO número 11 corresponde ao mês de Novembro.\n");
        break;
        case (12): printf("\nO número 12 corresponde ao mês de Dezembro.\n");
        break;
        default: printf("\nNúmero Inválido!\n");
        break;
    }
}
