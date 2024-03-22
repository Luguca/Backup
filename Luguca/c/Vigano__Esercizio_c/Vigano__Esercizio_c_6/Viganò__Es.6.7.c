#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{    
    int m, o, s, i;
    float p;
    float n[m];
    srand(time(NULL));
    printf("inserisci numero di tabella: ");
    scanf("%d", &m);
    for (i = 0; i<m; i++)
    {
        n[i]=0; 
    }
    s=rand()%10;
    n[s]=1;
    for (i = 0; i<m; i++)
    {
        if(n[i]==1)
        {
            printf("l'uno si trova nella cella %d", i+1);
        }   
    }
}