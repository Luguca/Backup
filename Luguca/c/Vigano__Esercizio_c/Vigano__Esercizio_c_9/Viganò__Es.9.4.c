#include <stdio.h>

int main(void)
{
    int i, n, c, x;
    int a[10], g[10];
    x=0;
    c=0;
    for (i = 0; i < 10; i++)
    {
        printf("inserire numero: ");
        scanf("%d", &n);
        printf("\n");
        if(n%2==0)
        {
            a[x]=n;
            x += 1;
        }
        else
        {
            g[c]=n;
            c += 1;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d", g[i]);
    }
}