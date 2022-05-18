#include <stdio.h>
#include <locale.h>

main() {

    setlocale(0,"Portuguese");
    int num;


    printf("Digite um número: ");
    scanf("%i", &num);



    if (num%5==0){
        printf("O número %i é divisível por 5!",num);

    }else{
        printf("O número %i não é divisível por 5!",num);

    }

}
