#include <stdio.h>

#define r 5

int main(void)
{
    int n, i, s = 0;
    int l[r], m[r];
    s=0;
    for (i = 0; i < r; i++)
    {
        printf("inserire numero: ");
        scanf("%d", &l[i]);
    }
    for (i = 0; i < r; i++)
    {
        m[i]=l[r-1-i];
    }
    printf("A1\t");
    printf("A2");
    printf("\n");
    for (i = 0; i < r; i++)
    {
        printf("%d\t", l[i]);
        printf("%d\t", m[i]);
        printf("\n");
    }
}