 #include <stdio.h>
 #include <locale.h>

 main(){

    setlocale(0,"Portuguese");


    char nome[20], cargo[20];
    float salario;
    int cod;

    printf("\n---------------ATENÇÃO----------------------");
    printf("\nUse a vírgula em números com casas decimais.\n");
    printf("--------------------------------------------\n");

    printf("Funcionário: ");
    fflush(stdin);
    gets(nome);

    printf("Salário atual: ");
    fflush(stdin);
    scanf("%f",&salario);

    printf("Código: ");
    fflush(stdin);
    scanf("%i",&cod);

    printf("--------------------------------------------\n");
    printf("Nome: %s\n",nome);
    printf("Salário: %.2f\n",salario);
    printf("Código: %i\n",cod);
 }
