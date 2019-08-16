/* ex0Mallo.c*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p; // cria ponteiro para um inteiro
	p = (int *)malloc(sizeof(int)); //aloca memória
	
	if(p) { //testa se memória  foi alocada
		printf("Memoria alocada com sucesso. \n");		
	}else {
		printf("Não foi possivel alocar a memoria. z\n");
		return 0; //Finaliza o programa
	}
	*p = 101000000; //Atribui valor na memoria alocada
	printf("Valor: %d\n\n", *p); //imprime o valor
	free(p);
	
	return 0;
}