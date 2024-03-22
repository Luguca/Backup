#include <stdio.h>

int main(void)
{    
    int m, o, s, i, t;
    float p;
    float n[m];
    t=0;
    s=-1;
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
    for (i = 0; i<m; i++)
    {
        while (n[i]>t)
        {
            printf("Il numero è maggiore di quello precendente");
            t=n[i];
            s=i+1;
        }      
        
    }
    printf("Il numero più grande (%d) è stato trovato nella casella %d", t, s);
}