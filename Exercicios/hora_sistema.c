#include <stdio.h>
#include <time.h>


void main(){

    time_t t;  //variavel
    time(&t);   //ativar
    struct tm *data; //estrutura
    data = localtime(&t);

    int d = data -> tm_mday;
    int m = data -> tm_mon + 1;
    int a = data -> tm_year + 1900;

    printf("\nEstamos no dia %i/%i/%i",d,m,a);

}
