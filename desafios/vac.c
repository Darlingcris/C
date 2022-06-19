#include <stdio.h>
#include <stdlib.h>      
#include <locale.h>
#include <time.h>      
#include <string.h>   
#define CAD 2


struct vacina{

    int l_vac;        //lote da vacina
    int cod;		 // codigo da pessoa
    char data[11];
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

	

while(res=='s'){
	
	system("cls");
	printf("\nQual opção você deseja: \n\n 1 - Cadastrar Vacina \n 2 - Relatório geral \n 3 - Consultar por CPF \n 4 - Sair ");
	printf("\n\nDigite a sua opção: ");
	fflush(stdin);
	scanf("%i", &op);
	
	
	switch (op){
		
		case 1:
			
		           
            system("cls");
            
            for (i=0; i<CAD; i++){
            	ficha[i];
            	
            	printf("\n---------- %iª Pessoa----------\n",i+1);

                printf("\nCódigo: %i",i);
                fflush(stdin);
                               
				printf("\nData: %02i/%02i/%i",d,m,a);			             
                fflush(stdout);
				sprintf(ficha[i].data, "%02i/%02i/%i",d,m,a);
                				
				printf("\nNome: ");
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
                
				printf("\n------------------------------\n"); 
				 
			} 
			 system("pause");
			 
			 
			break;
			
					
		case 2: 
			
			system("cls");
			
			printf("\n============CADASTRO VACINAS============\n");
			
			for (i=0; i<CAD; i++){
				ficha[i];
				
				printf("\nCódigo: \t\%i",i);	
				printf("\nData: \t\t%s",ficha[i].data); 
				printf("\nNome: \t\t%s",strupr(ficha[i].nome));
				printf("\nCpf:  \t\t%s",ficha[i].cpf);
				printf("\nNome da Vacina: %s",ficha[i].n_vac);
				printf("\nLote da Vacina: %i",ficha[i].l_vac);
				printf("\n----------------------------------------\n");
				
				
			} 
			
			system("pause");
			 
			break;
		
			
		case 3:	
			system("cls");					
			printf("Digite o número do CPF: ");
			fflush(stdin);
			gets(p);	
			
			encontrou=0;
			
			for(i=0;i<CAD; i++){
				
				if(strcmp(ficha[i].cpf,p)==0){
					
					printf("\nCódigo: \t\%i",i);
					printf("\nData: \t\t%s",ficha[i].data);	
					printf("\nNome: \t\t%s",strupr(ficha[i].nome)); 
					printf("\nCpf:  \t\t%s",ficha[i].cpf);
					printf("\nNome da Vacina: %s",ficha[i].n_vac);
					printf("\nLote da Vacina: %i",ficha[i].l_vac);
					printf("\n----------------------------------------\n");
					encontrou=1;			
				}	
			}
					
			if (encontrou==0){
					printf("\nCPF não encontrado! \n"); 
							
			} 
			
			system("pause");
			break;
			
			 
		case 4:							
			
			system("cls");
			res='n';
			printf("\nPrograma finalizado com sucesso.\n");
			
			break;
			
		default:
			
			system("cls");
			printf("\nOpção inválida!\n\n");
		
			system("pause");
			break;
	}  
	
}
	
	printf("\nVolte sempre!!!");
	
	return 0;
}


