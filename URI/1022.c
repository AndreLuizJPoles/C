#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {int num, den;} TRac;

TRac SomaRac(TRac, TRac);
TRac SubtraiRac(TRac, TRac);
TRac MultRac(TRac, TRac);
TRac DivRac(TRac, TRac);
TRac SimplRac(TRac);
int mdc(int, int);

int main (void)
{
	TRac frac1, frac2, resp, simp;
	char sinal;
	int i, n;
	
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d / %d %c %d / %d", &frac1.num, &frac1.den, &sinal, &frac2.num, &frac2.den);
		if(sinal=='+')
		{
			resp = SomaRac(frac1, frac2);
		}
		else if(sinal=='-')
		{
			resp=SubtraiRac(frac1, frac2);
		}
		else if(sinal=='*')
		{
			resp=MultRac(frac1, frac2);
		}
		else if(sinal=='/')
		{
			resp=DivRac(frac1, frac2);
		}
		simp = SimplRac(resp);
		
		printf("%d/%d = %d/%d\n", resp.num, resp.den, simp.num, simp.den);
	}

	return 0;
}

TRac SomaRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac SubtraiRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den - n2.num * n1.den;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac MultRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.num;
	res.den = n1.den * n2.den;
	
	return res;
}

TRac DivRac(TRac n1, TRac n2)
{	TRac res;

	res.num = n1.num * n2.den;
	res.den = n2.num * n1.den;
	
	return res;
}

TRac SimplRac(TRac n1)
{	TRac res;

	res.num = n1.num / mdc(n1.num, n1.den);
	res.den = n1.den / mdc(n1.num, n1.den);
	
	return res;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}