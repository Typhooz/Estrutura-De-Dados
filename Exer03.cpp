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
		printf("\t\tMemória Realocada!\n");
	}else if(!p){
 		printf("\t\tMemória Insuficiente!\n");
		return 0;
	}
	return tamanho;
}

void resultado(int *p, int tamanho, int i) {
	for(i = 0; i < tamanho; i++) {
		printf("Resuldado:%d\n",*(p+i));
	}
}

int main()
{
	int tamanho=5, i=0,aux;
	int *p;
	printf("Digite a quantidade de Inteiros: ");
	scanf("%d", &tamanho);
	p = (int *)calloc(tamanho,sizeof(int));
	do{ 
          if(i <tamanho) {
          	   scanf("%d",&*(p+i));
   		       printf("\t i++ Tamanho:%d\n",tamanho);
			   i++;
		  }else{
		  	   resultado(p,tamanho,i);
 	 	 	   tamanho = realocar(p,tamanho,i);   	   
		  }
  	      aux++;   
	}while(*(p+aux) != 'Sair');
	free(p);
	return 0;	
}