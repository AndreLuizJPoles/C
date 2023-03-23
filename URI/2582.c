#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int Soma(int,int);
void Musicas(int);

int main(void)
{	int i, num1, num2, chamadas, resultado;

	scanf("%d", &chamadas);

	for(i=0;i<chamadas;i++)
	{
		scanf("%d %d", &num1, &num2);
		resultado = Soma(num1, num2);
		Musicas(resultado);
	}

	return 0;
}

int Soma(int n1, int n2)
{
	return n1+n2;
}

void Musicas(int result)
{
	switch(result)
	{
		case 0:
		printf("PROXYCITY\n");
		break;
		
		case 1:
		printf("P.Y.N.G.\n");
		break;
		
		case 2:
		printf("DNSUEY!\n");
		break;
		
		case 3:
		printf("SERVERS\n");
		break;
		
		case 4:
		printf("HOST!\n");
		break;
		
		case 5:
		printf("CRIPTONIZE\n");
		break;
		
		case 6:
		printf("OFFLINE DAY\n");
		break;
		
		case 7:
		printf("SALT\n");
		break;
		
		case 8:
		printf("ANSWER!\n");
		break;
		
		case 9:
		printf("RAR?\n");
		break;
		
		case 10:
		printf("WIFI ANTENNAS\n");
		break;
	}
}