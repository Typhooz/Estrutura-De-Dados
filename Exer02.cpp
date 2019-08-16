/*- Guilherme Birck
  - Estrutura De Dados
  - UNOESC 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[50];
	char endereco[100];
	int matricula;
}estudante;

void cadastroEstudante(estudante *p) {
	printf("\tNome: ");
	fflush(stdin);
	fgets(p->name,50,stdin);
	printf("\tEndereço: ");
	fflush(stdin);
	fgets(p->endereco,100,stdin);
	printf("\tMatricula: ");
	scanf("%d",&(p->matricula));
}

void imprimirEstudantes(estudante *p){
	printf("--Estutantes no Vetor--\n");
	printf("Nome:%s ", p->name);
	printf("Endereço:%s", p->endereco);
	printf("Matricula:%d", p->matricula);
}


int main()
{
	int tamanho;
	estudante *p;
	printf("Digite o tamanho da memoria: ");
	scanf("%d", &tamanho);
	p = (estudante *)malloc(sizeof(estudante)*tamanho);
	if(p) { //testa se memória  foi alocada
		printf("\nMemoria alocada com sucesso. \n\n");		
	}else {
		printf("Não foi possivel alocar a memoria. z\n");
		return 0; //Finaliza o programa
	}

    cadastroEstudante(p);
    imprimirEstudantes(p);
	free(p);
	
	return 0;
	
}
