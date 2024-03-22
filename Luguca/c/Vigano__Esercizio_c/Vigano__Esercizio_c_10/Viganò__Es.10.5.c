#include <stdio.h>

int main()
{
    int n, y, c, k = 0;
    int i, j;
    int a[10] = {1, 2, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[10];
    for(i = 0;i < 10; i++)
    {
        c = 0;
        for(j = 0;j < 10;j++)
        {
            if(a[i] == a[j]
            {
                c = c + 1;
                if(c==1)
                {
                    a[i] = b[i];
                }
            }
        }
    }
    for(i = 0; i < k+1; i++)
    {
        printf("%d\t", b[i]);
    }
}