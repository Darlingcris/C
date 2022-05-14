#include <stdio.h>
#include <string.h>

main(){

    char nome1[20];
    char nome2[20];
    char tern[20];

    printf("Digite o primeiro nome: ");
    gets(nome1);


    printf("Digite o segundo nome: ");
    fflush(stdin);
    gets(nome2);

    int dif = strcmp(nome1,nome2);


    strcpy(tern, (dif==0) ? "Iguais" : "Diferentes");


    printf("O nomes digitados foram %s e %s, e o tamanho dos nomes sao %s.",strupr(nome1),strupr(nome2),tern);

}
