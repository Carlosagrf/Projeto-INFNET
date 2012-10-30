#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "cc50.h"
#include "cc50.c"
	
void exibeConteudo(FILE *arquivoTarefas) 
{	
	char *conteudo, linha[1000];
	int i;
	
	while(!feof(arquivoTarefas))
	{
		conteudo = fgets(linha, 100, arquivoTarefas);
		
		if(conteudo)
			printf("Linha %d: %s", i, linha);
		i++;
	}
	fclose(arquivoTarefas);

}		

int main() 
{	
	FILE *arquivoTarefas;
	string path;
	char eAA = 130,aT = 132, cC = 128, aA = 160;
	int controle, tarefa, idOpcao, idItem;
	
	path = getenv ("PATH_ARQUIVOS");
	
	//strcat(path, "\consertodear");
	//arquivoTarefas = fopen(path, "rt");
	
	if(arquivoTarefas == NULL)
	{
		printf("Ocorreu um problema na abertura do arquivo");
		system("PAUSE");
	}
	
		
	do {
		printf("Atrav%cs do menu abaixo informe a a%c%co a ser realizada:\n", eAA, cC, aT);
		printf("1-Adicionar tarefa\n");
		printf("2-Remover tarefa\n");
		printf("3-Modificar tarefa\n");
		printf("4-Visualizar tarefas\n");
		printf("5-Sair do sistemas\n");
		scanf("%d", &controle);
		
		switch(controle) {
			case 1: {
				system("cls");
				printf("Digite o tipo de tarefa a ser agendada:\n");
				printf("1-Tarefa 1\n");
				printf("2-Tarefa 2\n");
				printf("3-Tarefa 3\n");
				printf("4-Voltar ao menu principal\n");
				printf("5-Sair do sistema\n");
				scanf("%d", &idOpcao);
				switch(idOpcao) {
					case 1: {
						//path = path + nome da tarefa;
						break;
					}
					case 2: {
						//path = path + nome da tarefa;
						break;
					}						
					case 3: {
						//path = path + nome da tarefa;
						break;
					}						
					case 4: {	
						main();
						break;
					}						
					case 5: {
						return 0;
					}
					default: {
						printf("Op%c%co inv%clida, escolha uma v%clida.", cC,aT,aA,aA);
						main();
					}				
				}
				break;
			}	
			case 2: {
				system("cls");
				exibeConteudo(arquivoTarefas);
				printf("\n\nDigite o tipo e o id da tarefa que deseja deletar:\n");
				//Demonstrar as tarefas presentes para que o usuário delete.
				printf("1-Tarefa 1\n");
				printf("2-Tarefa 2\n");
				printf("3-Tarefa 3\n");
				printf("4-Voltar ao menu principal\n");
				printf("5-Sair do sistema\n");
				scanf("%d %d", &idOpcao, &idItem);
				switch(idOpcao) {
					case 1: {
						//path = path + nome da tarefa;
						break;
					}
					case 2: {
						//path = path + nome da tarefa;
						break;
					}						
					case 3: {
						//path = path + nome da tarefa;
						break;
					}						
					case 4: {	
						main();
						break;
					}						
					case 5: {
						return 0;
					}
					default: {
						printf("Op%c%co inv%clida, escolha uma v%clida.", cC,aT,aA,aA);
						main();
					}				
				}
				break;
			}
			case 3: {
				system("cls");
				exibeConteudo(arquivoTarefas);
				printf("\n\nDigite o tipo e o id da tarefa que deseja modificar:\n");
				//Demonstrar as tarefas presentes para que o usuário Modifique.
				printf("1-Tarefa 1\n");
				printf("2-Tarefa 2\n");
				printf("3-Tarefa 3\n");
				printf("4-Voltar ao menu principal\n");
				printf("5-Sair do sistema\n");
				scanf("%d %d", &idOpcao, &idItem);
				switch(idOpcao) {
					case 1: {
						//path = path + nome da tarefa;
						break;
					}
					case 2: {
						//path = path + nome da tarefa;
						break;
					}						
					case 3: {
						//path = path + nome da tarefa;
						break;
					}						
					case 4: {	
						main();
						break;
					}						
					case 5: {
						return 0;
					}
					default: {
						printf("Op%c%co inv%clida, escolha uma v%clida.", cC,aT,aA,aA);
						main();
					}
				}
				break;
			}
			case 4: {
				system("cls");
				printf("\n\nDigite o tipo de tarefa a ser visualizada:\n");
				printf("1-Tarefa 1\n");
				printf("2-Tarefa 2\n");
				printf("3-Tarefa 3\n");
				printf("4-Voltar ao menu principal\n");
				printf("5-Sair do sistema\n");
				scanf("%d", &idOpcao);
				switch(idOpcao) {
					case 1: {
						//path = path + nome da tarefa;
						break;
					}
					case 2: {
						//path = path + nome da tarefa;
						break;
					}						
					case 3: {
						//path = path + nome da tarefa;
						break;
					}						
					case 4: {	
						main();
						break;
					}						
					case 5: {
						return 0;
					}
					default: {
						printf("\nOp%c%co inv%clida, escolha uma v%clida.\n", cC,aT,aA,aA);
						system("PAUSE>>NULL");
						main();
					}
				}
				break;
			}
			case 5: {
				system("exit");
				system("cls");
				break;
			}
			default: {	
						system("cls");
						printf("\n\nOp%c%co inv%clida, escolha uma v%clida.\n", cC,aT,aA,aA);
						sleep(3);
						system("cls");
						main();
			}
		}
				
	} while(controle != 5); 
}
