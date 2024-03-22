#include <stdio.h>

int main(void)
{
    int n, y, c, k = 0;
    int i, j;
    int a[10] = {1, 2, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[10];
    for (i = 0; i < 10; i++)
    {
       int c = 0;
       for (j = 0; j < 10; i++)
       {
            if(a[i] == a[j])
            {
                c=c+1;
            }
       }
       if(c == 1)
       {
           b[k]=a[i];
           k=k+1;
       }
    }
    for(i = 0; i < k+1; i++)
    {
        printf("%d\t", b[i]);
    }
}