#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");
    char nome[30];
    float n1,n2,m;

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("\nA primeira nota foi %.2f e a segunda nota %.2f. A média é: %.2f.\n",n1,n2,(n1+n2)/2);
}
