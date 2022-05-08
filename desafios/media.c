#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");

    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunta nota: ");
    scanf("%f",&nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("A média do aluno é: %.2f ",media);
}
