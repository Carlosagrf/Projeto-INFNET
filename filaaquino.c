#include <stdio.h>

#define TAMANHO 50
#define TRUE 1
#define FALSE 0

typedef struct fila {
	int inicio;
	int fim;/* inicio sempre = 0 e fim é a próxima posição vazia*/
	int contador;
	int vetFila[TAMANHO];
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

int inserir (TFila *fila, int elemento){
	if (cheia(*fila))
		return FALSE;
	fila->vetFila[fila->fim++] = elemento;
	fila->contador++;	
	return TRUE;
}

int retirar (TFila *fila){
	int elemento, i;
	if (!vazia(*fila)){
		elemento = fila->vetFila[fila->inicio];
		for (i = 0; i < fila->fim - 1; i++)
		{
			fila->vetFila[i] = fila->vetFila[i+1];
		}
		fila->fim--;
		fila->contador--;
		return elemento;		
	}
	else{
		 printf("fila cheia");
		 return -1;
	}
}

void mostra(TFila fila){
	int i;
	for (i = 0; i < fila.fim; i++)
		printf(" %d ", fila.vetFila[i]);
	printf("\n");
	printf("numero de elementos na fila = %d\n", fila.contador);
	printf("\n");
}

main(){

	TFila fila;
	fila.inicio = fila.fim = 0;
	fila.contador = 0;
	inserir (&fila, 1);
	inserir (&fila, 5);
	inserir (&fila, 10);
	mostra(fila);
	printf(" %d \n ", retirar (&fila));
	mostra(fila);

}
