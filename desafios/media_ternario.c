#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){

    setlocale(0,"Portuguese");

    float nota1, nota2, media;
    char sit[10];

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    strcpy(sit,(media >= 7) ? "Aprovado":"Reprovado");

    printf("O aluno tem %.2f e %.2f, possui a %.2f e está %s",nota1,nota2,media,sit);

}
