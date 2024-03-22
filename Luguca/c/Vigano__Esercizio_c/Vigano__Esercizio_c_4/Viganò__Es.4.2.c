#include <stdio.h>
int main(void)
{
    int x, c, s;
    float m;
    c=0;
    s=0;
    m=0;
    printf("Numero: ");
    scanf("%d", &x);
    while (x>0)
    {
        c=c+1;
        s=s+x;
        printf("Numero: ");
        scanf("%d", &x);
    }
    m=s/c;
    printf("I numeri pari inseriti sono: %d\n", c);
    printf("I numeri pari inseriti sono: %f", m);
}
