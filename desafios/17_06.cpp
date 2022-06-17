#include <stdio.h>
#include <stdlib.h>      //limpar a tela
#include <locale.h>
#include <time.h>      //relogio do sistema
#include <string.h>   // para usar a funçao strcmp
#define CAD 2


struct vacina{

    int l_vac;        //lote da vacina
    int cod;		 // codigo da pessoa
    char data[10];
	char nome[30];
    char n_vac[10];  //nome da vacina
    char cpf[15];

};

int main(int argc, char *argv[]) {

    setlocale(0,"Portuguese");
	
	time_t t;
	time(&t);
	struct tm *data;
	data = localtime(&t);
	int d= data -> tm_mday;
	int m= data -> tm_mon + 1;
	int a = data ->tm_year +1900;
    
	int cad, op, i, encontrou=0;
	char res='s', nome, p[14];
	
	
	struct vacina ficha[CAD];

	
do{
	
	printf("\nQual opção você deseja: \n\n 1 - Cadastrar Vacina \n 2 - Relatório geral \n 3 - Consultar por CPF \n 4 - Sair ");
	printf("\n\nDigite a sua opção: ");
	fflush(stdin);
	scanf("%i", &op);
	
	switch (op){
		
		case 1:
			
			//printf("\nQuantas pessoas você quer cadastrar? ");
            //scanf("%i",&cad);

            //struct vacina ficha[cad];
            
            system("cls");
            
            for (i=0; i<CAD; i++){
            	ficha[i];
            	
            	printf("\n---------- %iª Pessoa----------\n",i+1);

                printf("\nCódigo: %i",i);
                fflush(stdin);
                                                
                printf("\nData: %02i/%02i/%i",d,m,a);
                fflush(stdin);
                gets(ficha[i].data);
				
				printf("Nome: ");
                fflush(stdin);
                gets(ficha[i].nome);

                printf("CPF: ");
                fflush(stdin);
                gets(ficha[i].cpf);
                
                printf("Nome da Vacina: ");
                fflush(stdin);
                gets(ficha[i].n_vac);
                             
                printf("Lote da Vacina: ");
                fflush(stdin);
                scanf("%i",&ficha[i].l_vac);
                
				printf("\n------------------------------"); 
				 
			} break;
			
					
		case 2: 
			
			system("cls");
			
			printf("\n============CADASTRO VACINAS============\n");
			
			for (i=0; i<CAD; i++){
					ficha[i];
				
				printf("\nCódigo: \t\%i",i);	
				printf("\nData: \t\t%i",ficha[i].data);
				printf("\nNome: \t\t%s",ficha[i].nome);
				printf("\nCpf:  \t\t%s",ficha[i].cpf);
				printf("\nNome da Vacina: %s",ficha[i].n_vac);
				printf("\nLote da Vacina: %i",ficha[i].l_vac);
				printf("\n----------------------------------------\n");
				
				
			} break;
		
			
		case 3:
			
			system("cls");
								
			printf("Digite o número do CPF: ");
			fflush(stdin);
			gets(p);
			
			
			for(i=0;i<CAD; i++){
				
				if(strcmp(ficha[i].cpf,p)== 0){
					
					printf("\nCódigo: \t\%i",i);	
					printf("\nData: \t\t%i",ficha[i].data);
					printf("\nNome: \t\t%s",ficha[i].nome);
					printf("\nCpf:  \t\t%s",ficha[i].cpf);
					printf("\nNome da Vacina: %s",ficha[i].n_vac);
					printf("\nLote da Vacina: %i",ficha[i].l_vac);
					printf("\n----------------------------------------\n");
					encontrou=1;
					break;
				}
				else if (encontrou==0){
					printf("\nCPF não encontrado :( \n");
					break;
			}//system("pause");
			}
		
		case 4:
			
			printf("Programa finalizado com sucesso.");
			break;
			
		default:
			
			printf("\nOpção inválida!\n");
			break;
	}
	
}while (res=='S' || res=='s');

	system("pause");
	
	return 0;
}
	printf("Volte sempre!!!");











