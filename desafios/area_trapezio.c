#include <stdio.h>
#include <math.h>

main(){

    float area, b_maior,b_menor, altura;

    printf("Digite o valor da base menor do trapezio: ");
    scanf("%f",&b_menor);

    printf("Digite o valor da base maior do trapezio: ");
    scanf("%f",&b_maior);

    printf("Digite o valor da altura do trapezio: ");
    scanf("%f",&altura);

    area = ((b_maior + b_menor)/2)*altura;

    printf("A area do Trapezio e de %.1f cm ao quadrado.",area);
}
