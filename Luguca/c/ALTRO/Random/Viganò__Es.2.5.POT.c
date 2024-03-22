#include <stdio.h>
#define d 4

int CALCOLA(void);
int VISUALIZZA(void);
int NUMERO[d];

int main(void)
{
    int i, c, n, m, k;
    c=0;
    for (i = 0; i < d; i++)
    {
        printf("Inserisci numero: ");
        scanf("%d", &m);
        NUMERO[i]=m;
    }
    for (i = 0; i < d; i++)
    {
        k=NUMERO[i];
        if(k%2==0)
        {
            k=k+1;
            NUMERO[i]=k;
        }
        else
        {
            k=k*2;
        }
    }
    for (i = 0; i < d; i++)
    {
        printf("%d\t", NUMERO[i]);
    }
}
