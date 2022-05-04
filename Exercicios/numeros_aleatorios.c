#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

main(){
    srand(time(NULL));
    int num = rand() %10+1;
    printf("Eu gerei o numero: %i",num);
}
