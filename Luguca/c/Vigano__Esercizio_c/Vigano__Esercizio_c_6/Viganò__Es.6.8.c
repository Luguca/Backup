#include <stdio.h>

int main(void)
{    
    int m, o, s, i;
    float p;
    float n[m];
    s=0;
    printf("inserisci numero di tabella: ");
    scanf("%d", &m);
    while (m<=0)
    {
        printf("Riprova numero della tabella: ");
        scanf("%d", &m);
    }
    for (i = 0; i<m; i++)
    {
        printf("inserisci numero: ");
        scanf("%d", &o);
        n[i]=o;
        while (n[i]<0)
        {
            printf("Riprova: ");
            scanf("%d", &o);
            n[i]=o;
        }      
        
    }
}