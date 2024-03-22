#include <stdio.h>

int main(void)
{
    int n, i, j, c, y;
    int a[10], b[10];
    for(i = 0; i < 10; i++)
    {
        printf("Inserisci numero: ");
        scanf("%d", &a[i]);
    }
    y=1;
    c=0;
    for (i = 0; i < 10; i++)
    {
       for (j = 0; j < 10; i++)
       {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c=c+1;
                }
            }
            b[i]=c;
            c=0;
       }
    }
    for (i = 0; i < 10; i++)
    {
       for (j = 0; j < 10; i++)
       {
            if(b[i]>b[j])
            {
                n=i;
                if(b[i]==b[j])
                {
                    y = y+1;
                }
            }
       }
    }
}