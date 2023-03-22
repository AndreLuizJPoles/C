#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int figurinhas (int, int);

int main(void)
{
	int N, i, fig1, fig2, resultado, aux;
	//Entrada de quantas execuções serão feitas
	scanf("%d", &N);
	
	for(i=0;i<N;i++)
	{	fig1 = fig2 = 0;
	//Entrada dos numeros de figurinhas	
		scanf("%d", &fig1);
		scanf("%d", &fig2);
	//Deixar sempre fig1 como menor que fi2
		if(fig2 < fig1)
		{	aux = fig2;
			fig2 = fig1;
			fig1 = aux;
		}
		//Chama a função e armazena o resultado
		resultado = figurinhas(fig1, fig2);
		printf("%d\n", resultado);
	}
	
	return 0;
}

int figurinhas(int F1, int F2)
{		
	//Se a divisão do maior pelo menor der 0 como resto, já está no maior divisor comum
	if(F2%F1 == 0)
		return F1;
	//Senão divide o menor numero pelo resto da divisao
	else
		return figurinhas(F2%F1, F1);
}