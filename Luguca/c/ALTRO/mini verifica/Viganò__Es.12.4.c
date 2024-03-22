#include <stdio.h>
#include <string.h>

#define d 12

int primo(int x);

int main()
{
    int n;
    printf("inserire numero: ");
    scanf("%d",&n);
    primo(n);
}

int primo(int x)
{
    int i, j, n, c=0;
    for (i = 2; i < x; i++)
    {
        c = 0;
        for (j = 2; j < d; j++)
        {
            if((j!=0)&&(j!=i))
            {
                if(i%j==0)
                {
                    c = c+1;
                }
            }
        }
        if (c<1)
        {
            printf("%d è primo\n", i);
        }
    }
}