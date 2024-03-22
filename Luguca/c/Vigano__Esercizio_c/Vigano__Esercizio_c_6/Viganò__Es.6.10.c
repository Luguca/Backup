#include <stdio.h>

int main(void)
{    
    int l, i;
    
    printf("inserisci numero di tabella: ");
    scanf("%d", &l);
    int n[l], m[l];
    printf("prima array: \n");
    for (i = 0; i<l; i++)
    {
        printf("inserisci numero: ");
        scanf("%d", &n[i]);
    }
    printf("secondo array: \n");
    for (i = 0; i<l; i++)
    {
        printf("inserisci numero: ");
        scanf("%d", &m[i]);
    }
    for (i = 0; i<l; i++)
    {
        if(n[i]==m[i])
        {
            printf("il numero uguale %d\n",i+1);
        }
        else
        {
            printf("il non numero uguale %d\n",i+1);
        }
    }  
}