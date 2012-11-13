#include <stdio.h>

#define TAMANHO 50
#define TRUE 1
#define FALSE 0

typedef struct registro {
	char nome[40];
	int protocolo;
}TRegistro;

typedef struct fila {
	TRegistro vetRegistro[TAMANHO];
	int inicio;
	int fim; 
/* inicio sempre = 0 e fim igual a próxima posição vazia*/
	int contador;
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

int inserir (TFila *fila, TRegistro registro){
	if (cheia(*fila))
		return FALSE;
	fila->vetRegistro[fila->fim++] = registro;
	fila->contador++;
	/*mostrar elementos inseridos
	printf("\nnome: %s", registro.nome);
	printf("\nprotocolo: %d", registro.protocolo);*/
	return TRUE;
}

int retirar (TFila *fila){
	TRegistro registro;
	int i;
	if (!vazia(*fila)){
		registro = fila->vetRegistro[fila->inicio];
		printf("\nnome: %s", registro.nome);
		printf("\nprotocolo: %d", registro.protocolo);
		for (i = 0; i < fila->fim - 1; i++)
		{
			fila->vetRegistro[i] = fila->vetRegistro[i+1];
		}
		fila->fim--;
		fila->contador--;
		return 1;		
	}
	else{
		 printf("fila cheia");
		 return -1;
	}
}

void mostra(TFila fila){
	int i;
	TRegistro registro;
	for (i = 0; i < fila.fim; i++){
		registro = fila.vetRegistro[i];
		printf("\nnome: %s", registro.nome);
		printf("\nprotocolo: %d", registro.protocolo);}
	printf("\n");
	printf("\nnumero de elementos na fila = %d\n", fila.contador);
	printf("\n");
}

main(){
	TRegistro R1={"Atenas",100};
	TRegistro R2={"Bruxelas",200};
	TRegistro R3={"Cairo",300};
	TFila fila;
	fila.inicio = fila.fim = 0;
	fila.contador = 0;
	inserir (&fila,R1);
	inserir (&fila,R2);
	inserir (&fila,R3);
	mostra(fila);
	retirar (&fila);
	mostra(fila);

}
