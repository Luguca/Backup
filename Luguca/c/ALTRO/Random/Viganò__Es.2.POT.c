#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define d 4

int CALCOLA(void);
int VISUALIZZA(void);
int NUMERO[d];
int k, i;

int main(void)
{
    int c, n, m;
    c=0;
    for (i = 0; i < d; i++)
    {
        printf("Inserisci numero: ");
        scanf("%d", &m);
        NUMERO[i]=m;
    }
    CALCOLA();
}

int CALCOLA(void)
{
    
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
            NUMERO[i]=k;
        }
    }
    VISUALIZZA();
}

int VISUALIZZA(void)
{
    for (i = 0; i < d; i++)
    {
        printf("%d\t", NUMERO[i]);
    }
}