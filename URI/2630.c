#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct cores{int R, G, B;}RGB;

int eye(RGB);
int mean(RGB);
int min(RGB);
int max(RGB);

int main(void)
{
	int i, chamadas, resultado;
	RGB cores;
	char tipo[5];
	
	scanf("%d", &chamadas);
	
	for(i=0;i<chamadas;i++)
	{
		scanf("%4s", tipo);
		scanf("%d %d %d", &cores.R, &cores.G, &cores.B);
		
		if(strcmp(tipo, "eye")==0)
		{
			resultado = eye(cores);
		}
		else if(strcmp(tipo, "mean")==0)
		{
			resultado = mean(cores);
		}
		else if(strcmp(tipo, "min")==0)
		{
			resultado = min(cores);
		}
		else if(strcmp(tipo, "max")==0)
		{
			resultado = max(cores);
		}
		
		printf("Caso #%d: %d\n", i+1, resultado);
	}
	
	return 0;
}

int eye(RGB cor)
{	
	return 0.3*cor.R + 0.59*cor.G + 0.11*cor.B;
}

int mean(RGB cor)
{
	return (cor.R+cor.G+cor.B)/3;
}
int min(RGB cor)
{
	if(cor.R <= cor.G && cor.R <= cor.B)
		return cor.R;
	else if(cor.G <= cor.R && cor.G <= cor.B)
		return cor.G;
	else
		return cor.B;
}
int max(RGB cor)
{
	if(cor.R >= cor.G && cor.R >= cor.B)
		return cor.R;
	else if(cor.G >= cor.R && cor.G >= cor.B)
		return cor.G;
	else
		return cor.B;
}