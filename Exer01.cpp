/*- Guilherme Birck
  - Estrutura De Dados
  - UNOESC 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tamanho;
	int *p;
	printf("Digite o tamanho da memoria: ");
	scanf("%d", &tamanho);
	p = (int *)malloc(sizeof(int)*tamanho);
	
	if(p) { //testa se memória  foi alocada
		printf("\nMemoria alocada com sucesso. \n\n");		
	}else {
		printf("Não foi possivel alocar a memoria. z\n");
		return 0; //Finaliza o programa
	}
	for(int i = 0; i <5; i++ ) {
		scanf("%d", &p[i]);
	}
	//Mostrar valores
    for(int i = 0; i < 5; i++) {
        int pi = *(p + i);
		printf("%d\n", pi);
	};
	
	//inversa
	for(int i = 5; i >=0; i--) {
        int pi = *(p + i);
		printf("%d\n", p[i]);
	
	};
	free(p);
	return 0;
}
