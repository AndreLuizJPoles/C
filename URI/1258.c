#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct camisa {	char nome[101], tam, cor[9];} camiseta;	

void cor(camiseta *, int);
void tamanho(camiseta *, int);
void alfabetica(camiseta *, int);

		  

int main(void)
{
	int  qtdeCamisetas, i;
	
	scanf("%d", &qtdeCamisetas);
	
	while(1)
	{
		
		if(qtdeCamisetas == 0)
			break;
		
		camiseta todasCam[qtdeCamisetas];
		
		for(i=0;i<qtdeCamisetas;i++)
		{
			scanf(" %100[^\n]", todasCam[i].nome);
			scanf("%s %c", todasCam[i].cor, &todasCam[i].tam);
		}
		
		alfabetica(todasCam, qtdeCamisetas);
		tamanho(todasCam, qtdeCamisetas);
		cor(todasCam, qtdeCamisetas);
		
		for(i=0;i<qtdeCamisetas;i++)
			printf("%s %c %s\n", todasCam[i].cor, todasCam[i].tam, todasCam[i].nome);
		
		scanf("%d", &qtdeCamisetas);
		
		if(qtdeCamisetas!=0)
			printf("\n");
	}
	
	return 0;
}

void cor (camiseta *camisetas, int N)
{
	camiseta aux;
	int i, j;
	
	
	for(i=1;i<N;i++)
	{
		j = i - 1;
		aux = camisetas[i];
		
		while(strcmp(camisetas[j].cor, aux.cor)>0 && j>=0)
		{
			camisetas[j+1] = camisetas[j];
			j--;
		}
		
		camisetas[j+1] = aux;
	}	
}

void tamanho(camiseta *camisetas, int N)
{
	camiseta aux;
	int i, j;
	
	for(i=1;i<N;i++)
	{
		j = i - 1;
		aux = camisetas[i];
		
		while(aux.tam > camisetas[j].tam && j>=0)
		{
			camisetas[j+1] = camisetas[j];
			j--;
		}
		
		camisetas[j+1] = aux;
	}	
}

void alfabetica(camiseta *camisetas, int N)
{
	camiseta aux;
	int i, j;
	
	for(i=1;i<N;i++)
	{
		j = i - 1;
		aux = camisetas[i];
		
		while(strcmp(camisetas[j].nome, aux.nome)>0 && j>=0)
		{
			camisetas[j+1] = camisetas[j];
			j--;
		}
		
		camisetas[j+1] = aux;
	}	
}