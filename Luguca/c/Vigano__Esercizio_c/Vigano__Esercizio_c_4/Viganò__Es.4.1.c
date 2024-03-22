#include <stdio.h>
int main(void)
{
    int x=0, y=1, s, c, r;
    c=1;
    printf("termine di fibbonacci: ");
    scanf("%d", &r);
    while (c<r)
    {
        s=x+y;
        x=y;
        y=s;
        c=c+1;
    }
    printf("%d", s);
}
