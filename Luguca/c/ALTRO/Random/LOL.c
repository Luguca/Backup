#include <stdio.h>

#define r 10

int main(void)
{
    int n, i, s;
    int l[10];
    s=0;
    for (i = 0; i < r; i++)
    {
        printf("inserire numero: ");
        scanf("%d", &l[i]);
    }
    for (i = 0; i < r; i++)
    {
        s=s+l[i];
    }
    printf("la somma è di: %d", s); 
}