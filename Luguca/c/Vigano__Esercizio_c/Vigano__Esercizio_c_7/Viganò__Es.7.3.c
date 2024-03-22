#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{    
    int i, n, p, t;
    srand(time(NULL));
    n=10;
    int v[n];
    for(i=0; i<n; i++)
    {
        v[i]=rand()%101;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t", v[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        if(v[i]%2==0)
        {
            printf("Pari, ");
        }
        else
        {
            printf("Dispari, ");
        }
    }
}