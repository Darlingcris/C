#include <stdio.h>

/*main(){
    int n;
    float m;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    printf ("Digite um numero real: ");
    scanf("%f",&m);
    printf("\nVoce digitou o numero inteiro %d e %.1f.",n,m);

}*/

/*main() {
    char sexo;
    char letra;
    printf("Digite o sexo (F/M): ");
    scanf("%c",&sexo);
    fflush(stdin);
    printf("Digite qualquer letra: ");
    scanf("%c", &letra);
    fflush(stdin);
    printf("O sexo digitado e \'%c\' e a letra \'%c\'.",sexo,letra);
}*/

/*main(){
    char sexo;
    char letra;
    printf("Digite o sexo (M/F): ");
    fflush(stdin);
    sexo = getchar();
    printf("Digite uma letra: ");
    fflush(stdin);
    letra = getchar();
    printf("O sexo digitado e \'%c\' e a letra \'%c\'.", sexo,letra);
}*/

main(){
    char nome[30];
    char endereco[40];
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite o seu endereco: ");
    gets(endereco);
    printf("O seu nome e %s e o seu endereco e: %s",nome,endereco);
}
