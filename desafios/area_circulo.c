#include <stdio.h>
#include <math.h>
#define PI 3.14

main(){

    float raio,area,perimetro;

    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);

    area = PI * (pow(raio,2));
    perimetro = 2*PI*raio;

    printf("\nA area do circulo e de %.1f cm quadrado e o seu perimetro e %.1f cm\n",area,perimetro);
}
