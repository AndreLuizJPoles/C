#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


//Define Struct para armazenar a qtd de cada nota
typedef struct notas {int W, H, Q, E, S, T, X;} Notas;

int main(void)
{	char jingle[201];
	int i, numComp=0;
	Notas contNotas;
	double resultado=0;
	//Estrutura repetitiva sempre verdadeira
	while(1)
	{
		scanf("%s", jingle);
		numComp=0;
		//Testando para encerrar o programa
		if(jingle[0]=='*')
			break;
		//Zerando a contagem de cada nota
		contNotas.W=0;
		contNotas.H=0;
		contNotas.Q=0;
		contNotas.E=0;
		contNotas.S=0;
		contNotas.T=0;
		contNotas.X=0;
	//Contando qtd de cada nota
		for(i=1;i<strlen(jingle);i++)
		{
			if(jingle[i]=='W')
				contNotas.W++;
			else if(jingle[i]=='H')
				contNotas.H++;
			else if(jingle[i]=='Q')
				contNotas.Q++;
			else if(jingle[i]=='E')
				contNotas.E++;
			else if(jingle[i]=='S')
				contNotas.S++;
			else if(jingle[i]=='T')
				contNotas.T++;
			else if(jingle[i]=='X')
				contNotas.X++;
		//Se for igual '/' ele realiza a soma e testa se dá 1
			else if(jingle[i]=='/')
			{
				resultado = contNotas.W + (contNotas.H*0.5) + (contNotas.Q*0.25) + (contNotas.E*0.125) + (contNotas.S*0.0625) + (contNotas.T*0.03125) + (contNotas.X*0.015625);
				if(resultado == 1)
					numComp++;
				contNotas.W=0;
				contNotas.H=0;
				contNotas.Q=0;
				contNotas.E=0;
				contNotas.S=0;
				contNotas.T=0;
				contNotas.X=0;
			}
		}
	//Impressão da resposta
		printf("%d\n", numComp);
	}
		
	return 0;
}