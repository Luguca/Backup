#include <stdio.h>

int main(void)
{
    int a[10];
    int n, i;

    for(i = 0; i < 10; i++)
    {
        printf("Inserisci numero: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i=i+2)
    {
        if(a[i]%2==0)
        {
            n=n+1;
        }
        else
        {
            printf("numero non pari\n");
        }
    }
    if(n=10/2)
    {
        printf("nelle posizioni pari ci sono solo numeri pari");
    }
    else
    {
        printf("nelle posizioni pari non ci sono solo numeri pari");
    }
}