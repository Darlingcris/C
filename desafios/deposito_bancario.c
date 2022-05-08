#include <stdio.h>
#include <locale.h>

main() {

    setlocale(0,"Portuguese");

    float deposito, juros, rendimento, v_receber;

    printf("Digite o valor a ser depositado: R$");
    scanf ("%f", &deposito);

    printf("Digite o valor da taxa de juros do periodo: %%");
    scanf("%f",&juros);

    rendimento = (deposito * juros)/100;
    v_receber = deposito + rendimento;


    printf("O seu rendimento será de R$ %.2f e o valor à receber será R$ %.2f ", rendimento,v_receber);


}
