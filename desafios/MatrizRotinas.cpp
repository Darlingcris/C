#include <stdio.h>
#include <locale.h>


void identificarDivisivelPor3(int n[5][5]){

    setlocale(0,"Portuguese");

    for(int l=0;l<5;l++){
        for(int c=0;c<5;c++){
            if(n[l][c]%3==0){
                printf("\nNúmero divisível por 3 encontrado na linha [%i], coluna [%i], número %i",l+1,c+1,n[l][c]);
                }
        }
    }
}

int main(int argc, char const *argv[]){

    int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};

    identificarDivisivelPor3(matriz);

    return 0;
}

