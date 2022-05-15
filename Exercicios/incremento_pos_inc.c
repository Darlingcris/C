#include <stdio.h>

main(){
    int x = 5;
    int y = 3 + ++x; //so depois ele vai fazer o incremento de x
    printf("Os valores sao %i e %i", x,y);

}

