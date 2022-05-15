#include <stdio.h>
#include <locale.h>

main(){

    setlocale(0,"Portuguese");
    char prod [20];
    float preco, desc;

    printf("Produto: ");
    gets(prod);

    printf("Preço do %s: R$ ",prod);
    scanf("%f",&preco);

    printf("Desconto: \(%%) ");
    scanf("%f", &desc);

    printf("\nO produto %s custava R$ %.2f.\nAplicando o desconto de %.2f%% passa a custar R$ %.2f. \n", prod,preco,desc, (preco-(preco*desc)/100));

}
