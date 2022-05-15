#include <stdio.h>

main(){

    int num1, num2;

     printf("Digite o primeiro valor: ");
     fflush(stdin);
     scanf("%i",&num1);

     printf("Digite o segundo valor: ");
     fflush(stdin);
     scanf("%i", &num2);

     printf("\n-------Bitwise-------\n");
     printf("\nCalculando %i & %i = %i.",num1,num2,(num1&num2));
     printf("\nCalculando %i | %i = %i.",num1,num2,(num1|num2));
     printf("\nCalculando %i ^ %i = %i.\n",num1,num2,(num1^num2));
}
