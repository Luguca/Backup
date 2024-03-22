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
        printf("Riprova: ");
        scanf("%d", &m);
    }
    for (i = 0; i<m; i++)
    {
        printf("inserisci numero: ");
        scanf("%d", &o);
        n[i]=o;
        while (n[i]<=0)
        {
            printf("Riprova: ");
            scanf("%d", &o);
            n[i]=o;
        }      
        
    }
    for (i = 0; i<m; i++)
    {
        s=n[i]+s;
    }
    printf("La somma totale è %d\n", s);
    p=s/m;
    printf("La media è di %d\n", p);
}