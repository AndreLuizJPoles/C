#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
	int N, D, i, j, aux;

	scanf("%d %d", &N, &D);
	//Testa para encerrar ou não
	while(N != 0 && D != 0)
	{
		//Definição da Matriz e do Vetor que serão usados
		aux=0;
		int matriz[D][N], vetor[N];
		//Entrada dos dados da Matriz
		for(i=0; i<N; i++)
		{
			for(j=0; j<D; j++)
			{
				scanf("%d", &matriz[i][j]);
			}
		}
		//Coloca 1 para cada jantar participado, se não tiver participado vira 0
		for(j=0; j<D; j++)
		{
			for(i=0; i<N; i++)
			{
				if(matriz[i][j] == 1)
					vetor[i] = 1;
				else
					vetor[0] = 0;
			}
		}
		//Verifica se há algum aluno que tenha participado de todos os jantares
		for(i=0; i<N; i++)
		{
			if(vetor[i] == 1)
				aux++;
		}
		//Imprime se sim ou se não
		if(aux > 0)
			printf("yes\n");
		else
			printf("no\n");
		
		scanf("%d %d", &N, &D);
	}
	
	return 0;
}