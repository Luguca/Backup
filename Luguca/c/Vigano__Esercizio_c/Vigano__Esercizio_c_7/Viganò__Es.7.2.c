#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{    
    int i, n, p, t;
    srand(time(NULL));
    n=5;
    t=0;
    p=0;
    int v[n];
    for(i=0; i<n; i++)
    {
        printf("inserisci numero nella tabella:");
        scanf("%d", &v[i]);
    }
    for(i=0; i<n; i++)
    {
        if(v[i]>t)
        {
            t=v[i];
            p=i+1;
        }
    }
    printf("il numero più grande è %d e la sua posizione è %d", t, p);
}