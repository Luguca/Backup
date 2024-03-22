#include <stdio.h>

int main(void)
{    
    int l, i, m, s;
    s=0;
    printf("inserisci numero di tabella: ");
    scanf("%d", &l);
    while (m<=0)
    {
        printf("Riprova: ");
        scanf("%d", &m);
    }
    int n[l];

    for (i = 0; i<l; i++)
    {
        printf("inserisci numero: ");
        scanf("%d", &n[i]);
    }
    for (i = 0; i<l; i++)
    {
        if(n[i]<0)
        {
            printf("il numero è negativo %d\n",i+1);
            s=n[i]+s;
            n[i]=0;
        }
    }
    printf("la somma totale è %d", s);
}