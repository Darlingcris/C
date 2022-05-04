#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    char sexo;
    float nota;

    char nome1[30];
    char sexo1;
    float nota1;

    char nome2[30];
    char sexo2;
    float nota2;

    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");

    printf("Nome: ");
    gets(nome);
    printf("Sexo: ");
    sexo=getchar();
    printf("Nota: ");
    scanf("%f",&nota);

    printf("\nCadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("Nome: ");
    gets(nome1);
    printf("Sexo: ");
    sexo1=getchar();
    printf("Nota: ");
    scanf("%f",&nota1);

    printf("\nCadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("Nome:");
    gets(nome2);
    printf("Sexo: ");
    sexo2=getchar();
    printf("Nota: ");
    scanf("%f",&nota2);

    printf("\n\tFicha do Cadastrado\n");
    printf("----------------------------------------------\n");
    printf("NOME\t\t\t\tSEXO\tNOTA");
    printf("\n%-30s",nome);
    printf("\t%c",sexo);
    printf("\t%5.2f",nota);
    printf("\n%-30s",nome1);
    printf("\t%c",sexo1);
    printf("\t%5.2f",nota1);
    printf("\n%-30s",nome2);
    printf("\t%c",sexo2);
    printf("\t%5.2f\n",nota2);
    printf("----------------------------------------------\n");
}
