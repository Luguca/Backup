#include <stdio.h>

int main(void)
{
    int u, n, m, c, f, i, t, j;
    f=1;
    t=0;
    c=0;
    do
    {
        printf("Quanti numeri vuoi inserire? (deve essere minore di 100): ");
        scanf("%d", &m);
    } while (n>100);
    int NUMERI[m];
    int FATT[m];
    for (i = 0; i < m; i++)
    {
        printf("\ninserisci numero: ");
        scanf("%d", &n);
        NUMERI[i]=n;
    }
    for (i = 0; i < m; i++)
    {
        c=NUMERI[i];
        t=c;
        for (j = c; j > 0; j--)
        {
            f=t*f;
            t=t-1;
        }
        FATT[i]=f;
        f=1;
    }
    for (i = 0; i < m; i++)
    {
        printf("%d\t ", NUMERI[i]);
    }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        printf("%d\t ", FATT[i]);
    }
    
    return 0;
}