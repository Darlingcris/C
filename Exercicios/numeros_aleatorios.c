#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

main(){
    srand(time(NULL));
    int num = rand() %10+1; //gera entre 0 e 10
    //int num = rand() %10; //gera entre 0 e 9
    printf("Eu gerei o numero: %i\n",num);
}
