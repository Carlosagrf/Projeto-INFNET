#include <stdio.h>

#define TAMANHO 50
#define TRUE 1
#define FALSE 0
//Variável (Estrutura) que armazena pedido dos clientes.
typedef struct pedido
{
	char Nome[30];
	int TipoReparo;
	int Protocolo;
	//Falta inserir Data
	} PEDIDO;
//Variável (Estrutura) que coloca os pedidos do cliente em fila.
typedef struct fila {
	int inicio;
	int fim;/* inicio sempre = 0 e fim é a próxima posição vazia*/
	int contador;
	PEDIDO vetFila[TAMANHO];
} TFila;

int vazia(TFila fila){
	if (fila.inicio == fila.fim)
		return TRUE;
	else 	return FALSE;
}

int cheia(TFila fila){

	if (fila.fim == TAMANHO)
		return TRUE;
	else 	return FALSE;
}

int inserir (TFila *fila, PEDIDO elemento){
	if (cheia(*fila))
		return FALSE;
	fila->vetFila[fila->fim++] = elemento;
	fila->contador++;	
	return TRUE;
}

int retirar (TFila *fila){
	PEDIDO elemento;
	int i;
	if (!vazia(*fila)){
		elemento = fila->vetFila[fila->inicio];
		printf("****Elemento Retirado****\n");
		printf("Nome da Instituição: %s\n", elemento.Nome);
		printf("Tipo de Reparo: %d\n", elemento.TipoReparo);
		printf("Numero do protocolo: %d\n\n", elemento.Protocolo);
		for (i = 0; i < fila->fim - 1; i++)
		{
			fila->vetFila[i] = fila->vetFila[i+1];
		}
		fila->fim--;
		fila->contador--;
		return 	1;	
	}
	else{
		 printf("fila cheia");
		 return -1;
	}
}

PEDIDO mostra(TFila fila){
	int i;
	for (i = 0; i < fila.fim; i++)
		printf ("%s %d %d \n", fila.vetFila[i].Nome, fila.vetFila[i].TipoReparo, fila.vetFila[i].Protocolo);
		
	printf("\n");
	printf("numero de elementos na fila = %d\n", fila.contador);
	printf("\n");
}

main(){
	PEDIDO zero = {"Acapulco", 01, 100};
	PEDIDO um = {"Bruxelas", 02, 200};
	PEDIDO dois = {"Cairo", 03, 300};
	TFila fila;
	fila.inicio = fila.fim = 0;
	fila.contador = 0;
	inserir (&fila, zero);
	inserir (&fila, um);
	inserir (&fila, dois);
	mostra(fila);
	retirar (&fila);
	mostra(fila);

}
