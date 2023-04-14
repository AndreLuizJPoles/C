#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
	int  NumBilOrig, NumPessoas, i, j, l, falsos;
	
	while (1)
	{
		falsos = 0;
		
		scanf("%d %d", &NumBilOrig, &NumPessoas);
		
	int Bilhetes[NumPessoas], aux[NumPessoas];
		
		if(NumBilOrig == 0 && NumPessoas == 0)
			break;
		
		for(i=0;i<NumPessoas;i++)
		{
			scanf("%d", &Bilhetes[i]);
		}
		
		for(i=0;i<NumPessoas;i++)
		{
			aux[i] = Bilhetes[i];
		}
		
		for(i=0;i<NumPessoas;i++)
		{
			for(j=0;j<NumPessoas;j++)
			{
				if(j != i)
					if(Bilhetes[i] == aux[j])
					{
						falsos++;
						aux[j] = -1;
						
						for(l=j;l<NumPessoas;l++)
						{
							if(Bilhetes[i] == aux[l])
								aux[l] = -1;
						}
						break;
					}
				aux[i] = -1;
			}	
		}
		printf("%d\n", falsos);
	}
	
	return 0;
}