#include <stdio.h>
#include <locale.h>
#include <time.h>

main(){

    setlocale(0,"Portuguese");
    int idade;

    printf("Qual a sua idade? ");
    scanf("%i",&idade);

    if (idade<16){
        printf("N�o Eleitor.");

    }else{
        if (idade>=18 && idade<=65){
            printf("Eleitor Obrigat�rio!");
        }
        else{
            if (idade >=16 || idade >65){
                printf("Eleitor Facultativo");
            }
        }
    }

     }
