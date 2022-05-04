#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30], nome1[30], nome2[30] ;
    char sexo,sexo1,sexo2;
    float nota,nota1,nota2;

    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("Nome: ");
    gets(nome);
    printf("Sexo [F/M]: ");
    sexo=getchar();
    printf("Nota: ");
    scanf("%f",&nota);

    printf("\nCadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("Nome: ");
    gets(nome1);
    printf("Sexo [F/M]: ");
    sexo1=getchar();
    printf("Nota: ");
    scanf("%f",&nota1);

    printf("\nCadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("Nome:");
    gets(nome2);
    printf("Sexo [F/M]: ");
    sexo2=getchar();
    printf("Nota: ");
    scanf("%f",&nota2);

    printf("\n\tFicha do Cadastrado\n");
    printf("----------------------------------------------\n");

    printf("NOME\t\t\t\tSEXO\tNOTA\n");

    printf("\n%-30s \t%c \t%5.2f",nome,sexo,nota);
    printf("\n%-30s \t%c \t%5.2f",nome1,sexo1,nota1);
    printf("\n%-30s \t%c \t%5.2f\n",nome2,sexo2,nota2);

    printf("----------------------------------------------\n");
}
