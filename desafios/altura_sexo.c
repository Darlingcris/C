#include <stdio.h>

main(){

    float altura,peso;
    char sexo;

    printf("Qual e a sua altura: ");
    fflush(stdin);
    scanf("%f", &altura);

    printf("Qual e o seu sexo: [F/M] ");
    fflush(stdin);
    sexo=getchar();



    if (sexo=='f' || sexo=='F'){
        peso =(62.1 * altura) - 44.7;
        printf("O seu peso ideal e: %.2f",peso);
    }else{
        peso =(72.7 * altura) - 58;
        printf("O seu peso ideal e: %.2f",peso);
    }

}
