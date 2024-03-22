#include <stdio.h>

int main(void)
{
    int a[12];
    int n, i;
    a[0]=0;
    a[1]=1;
    for (i = 2; i < 12; i=i+2)
    {
        a[i]=a[i-1]+a[i-2];
        printf("%d", a[i]);
    }
}

for (i = 0; i < count; i++)
{
    /* code */
}
