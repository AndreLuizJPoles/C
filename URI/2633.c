#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct carne{char tipo[21]; int validade;}Carne;

int main(void)
{
	int qtdCarnes, i, j;
	Carne carnes[10], aux;
	//Continua se não for o fim do arquivo
	while(scanf("%d", &qtdCarnes) != EOF)
	{
		//Entrada dos dados
		for(i=0;i<qtdCarnes;i++)
		{
			scanf("%s %d", carnes[i].tipo, &carnes[i].validade);
		}
		//Organiza do menor pro maior
		for(i=1; i < qtdCarnes; i++)
		{
			j = i - 1;
			aux = carnes[i];
			while (j >= 0 && carnes[j].validade > aux.validade)
			{

				carnes[j + 1] = carnes[j];
				j--;
			}
			carnes[j + 1] = aux;
		}
		//Imprime do menor pro maior e adiciona os espaços entre eles
		for(i=0; i<qtdCarnes;i++)
		{
			if(i!=0)
				printf(" ");
			printf("%s", carnes[i].tipo);
		}
		printf("\n");
	}
	
	return 0;
}