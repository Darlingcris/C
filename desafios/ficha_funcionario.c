 #include <stdio.h>
 #include <locale.h>

 main(){

    setlocale(0,"Portuguese");


    char nome[20], cargo[20];
    float salario;
    int cod;

    printf("\n---------------ATEN��O----------------------");
    printf("\nUse a v�rgula em n�meros com casas decimais.\n");
    printf("--------------------------------------------\n");

    printf("Funcion�rio: ");
    fflush(stdin);
    gets(nome);

    printf("Sal�rio atual: ");
    fflush(stdin);
    scanf("%f",&salario);

    printf("C�digo: ");
    fflush(stdin);
    scanf("%i",&cod);

    printf("--------------------------------------------\n");
    printf("Nome: %s\n",nome);
    printf("Sal�rio: %.2f\n",salario);
    printf("C�digo: %i\n",cod);
 }
