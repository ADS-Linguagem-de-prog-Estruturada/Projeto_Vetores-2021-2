#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>


int menu();

//int idUsuario[i], int vacina[i],nome[i], eMail[i], sexo[i], endereco[i], altura[i]//
int main(){

	int idUsuario[1000], vacina[1000], i, opc;
	char nome[1000][50], eMail[1000][50], sexo[1000][10], endereco[1000][150];
	double altura[1000];
do{	

opc = menu();

switch(opc){
			case 1:
			
				printf(" [1]\tVoce escolheu a opcao 1\n");// teste apenas para apresentar uma mensagem ilustrando o funcionamento do menu (excluir futuramente)//
				system ("pause");
				//insira aqui a função cadastrar//			
			
				break;	
			case 2:
				//insira aqui a função Listar//
				break;
			case 3: 
				//insira aqui a função Pesquisar//
				break;
			case 4:
				//insira aqui a função Excluir//
				break;
			case 5:	
				//insira aqui a função Editar//			
				break;			
			case 6:			
               //insira aqui a função Backup//
				break;						
		}
	
	}while(opc !=7);
	
	return 0; 	
}

int menu(){

system ("cls");
	int opcao=0;
		
	do{
		system ("cls");
		printf("\n==================================================\n");
		printf("\tSelecione uma opcao: ");
		printf("\n==================================================\n");
		printf(" [1]\tCadastrar Novo Usuario\n");
		printf(" [2]\tListar Usuarios Cadastrados\n");
		printf(" [3]\tPesquisar Usuario\n");
		printf(" [4]\tExcluir Cadastro\n");
		printf(" [5]\tEditar Cadastro\n");		
		printf(" [6]\tBackup\n");
		printf(" [7]\tSair\n");	
		
		printf("\nOpcao desejada: ");	
		scanf("%d", &opcao);
		getchar();			
	}while(opcao == 0);	
return opcao;
}