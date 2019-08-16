#include <stdio.h>
#include <stdlib.h>

/*- Guilherme Birck
  - Estrutura De Dados
  - UNOESC 
*/


int realocar(int *p, int tamanho, int i) {
	if (i == tamanho) {
		tamanho +=5;
		p = (int *)realloc(p,tamanho * sizeof(int));
	}else if(!p){
 		printf("Memória Insuficiente!\n");
		return 0;
	}
	return tamanho;
}

int main()
{
	int tamanho, i,aux;
	int *p;
	printf("Digite a quantidade de Inteiros: ");
	scanf("%d", &tamanho);
	p = (int *)calloc(tamanho,sizeof(int));
	while(*(p+aux) != 'Sair'){
	   	realocar(p,tamanho,i);
		for(i = 0; i <tamanho; i++) {
			scanf("%d",&*(p+i));
	   	}
	   	aux++;
	}
	free(p);
	return 0;	
}