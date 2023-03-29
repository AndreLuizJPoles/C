#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define true 1
#define false 0

int main(void)
{
    int N, D, i, j, aux, testa;

    while(1)
    {
        scanf("%d %d", &N, &D);

        testa = false;

        if(D == 0 && N == 0)
            break;

        aux = 0;
        int matriz[D][N];
        for(i = 0; i < D; i++)
            for(j = 0; j < N; j++)
                scanf("%d", &matriz[i][j]);

        for(j = 0; j < N; j++)
        {
            aux = 0;
            for(i = 0; i < D; i++)
            {
                if(matriz[i][j])
                    aux++;
            }
            if(aux == D)
            {
                testa = true;
                break;
            }
        }

        if(testa)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
