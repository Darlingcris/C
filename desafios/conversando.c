#include <stdio.h>
#include <locale.h>

main(){
    setlocale(0,"Portuguese");
    char nome[30];
    int idade;
    float peso;

    printf("Digite o seu nome: ");
    gets(nome);
    printf("Qual a sua idade? ");
    scanf("%i",&idade);
    printf("Qual o seu peso? ");
    scanf("%f",&peso);

    printf("Muito prazer, %s. Você tem %i anos e pesa %.2f kg, correto?\n",nome,idade,peso);
}
