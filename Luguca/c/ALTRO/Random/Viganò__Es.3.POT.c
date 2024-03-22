#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, m, c, i, l, j, can, ncan;
    can=0;
    ncan=0;
    srand(time(NULL));
    do
    {
        printf("Quanti numeri vuoi inserire? (deve essere minore di 20): ");
        scanf("%d", &n);
    } while (n>20);
    int NUMERI[n];
    for (i = 0; i < n; i++)
    {
        m=(rand()%101)-30;
        NUMERI[i]=m;
    }
    for (i = 0; i < n; i++)
    {
        printf("\npuoi eliminare un massimo di %d tentativi ora sei al %d° tentativo: ", n, c+1);
        scanf("%d", &l);
        for (j = 0; j < n; j++)
        {
            if(l==NUMERI[j])
            {
                NUMERI[j]=0;
                can=can+1;
            }
            else
            {
                ncan=ncan+1;
            }
        }
        c=c+1;
        printf("\nHai eliminato %d numeri\n", can);
        can=0;
        printf("\nNon hai eliminato %d numeri\n", ncan);
        ncan=0;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", NUMERI[i]);
    }
    return 0;
}