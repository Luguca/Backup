#include <stdio.h>

int main(void)
{    
    int l, i;
    
    printf("inserisci numero di tabella: ");
    scanf("%d", &l);
    while (l<=0)
    {
        printf("Riprova: ");
        scanf("%d", &l);
    }
    int n[l];
    printf("primo array: \n");
    for (i = 0; i<l; i++)
    {
        printf("inserisci numero: ");
        scanf("%d", &n[i]);
    }
    for (i = 0; i<l; i++)
    {
        if(n[i]==0)
        {
            printf("il numero uguale nella posizione %d\n",i+1);
        }
        else
        {
            printf("il non numero uguale n1lla posizione %d\n",i+1);
        }
    }  
}