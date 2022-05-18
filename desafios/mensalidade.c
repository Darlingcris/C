#include <stdio.h>
#include <locale.h>

main(){

     setlocale(0,"Portuguese");

     char nome[20];
     int idade;
     float mensal;


     printf("Digite o nome do cliente: ");
     fflush(stdin);
     gets(nome);


     printf("\nDigite a idade do cliente: ");
     fflush(stdin);
     scanf("%i", &idade);


     if (idade <= 18){
            mensal= 50,00;
     }else{

        if (idade>=19 && idade<=29) {
                mensal=70,00;
     }

        if (idade>=30 && idade<=45){
                mensal=90,00;
     }

        if (idade>=46 && idade<=65){
                mensal=130,00;
     }
        if (idade>=65){
            mensal=170,00;
     }
    }
    printf("\n---------------------------------------------");
    printf("\n\tMensalidade do Plano de Saúde");
    printf("\n---------------------------------------------\n");
    printf("Nome:\t\t %s \n",nome);
    printf("Idade:\t\t %i \n",idade);
    printf("Mensalidade:\t R$%.2f \n",mensal);
    printf("---------------------------------------------\n");
    }




