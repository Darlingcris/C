#include <stdio.h>
#include <locale.h>

main(){
    setlocale(0,"Portuguese");
    int maior, menor,n,num;

    for (n=1; n<=5;n++){
        printf("\nDigite o %i° número: ",n);
        scanf("%i",&num);

        if (n==1){
             maior=menor=num;
        }
        else{
            if (num>maior){
                maior=num;
            }else{
                if (num<menor){
                    menor=num;
                }
            }
        }
        }
        printf("\nO maior número digitado foi %i e o menor foi %i.\n",maior,menor);
}
