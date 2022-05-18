#include <stdio.h>


main(){



     printf("Data: %s \nHora: %s\n",__DATE__,__TIME__);

     system("date /t");
     system("time /t");

     }
