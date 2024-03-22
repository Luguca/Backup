#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{    
    int m, o, s, i, c, j;
    float p;
    c=1;
    srand(time(NULL));
    m=rand()%101;
    printf("inserisci numero di tabella: %d\n", m);
    int n[m];
    for (i = 0; i<m; i++)
    {
        printf("inserisci numero nella tabella:");
        scanf("%d", &n[i]);
    }
    for (i = 0; i<m; i++)
    {
        for (j=0; i<m; i++)
        {
            if(n[i]==n[j])
            {
            c=0;
            }
        }   
    }
    if(c==0)
    {
        for (i = 0; i<m; i++)
        {
            n[i]=0;
            printf("%d, ", n[i]); 
        }
    }
    else
    {
       for (i = 0; i<m; i++)
        {
            printf("%d, ", n[i]);
        } 
    }
}