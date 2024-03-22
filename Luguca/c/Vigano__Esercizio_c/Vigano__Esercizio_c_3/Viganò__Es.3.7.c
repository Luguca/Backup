#include <stdio.h>

int main(void)
{
    float n1, n2;

    printf("inserire numero: ");
    scanf("%f", &n1);
    printf("inserire numero: ");
    scanf("%f", &n2);
    if(n1==n2)
    {
        printf("sono uguali %f\n", n1);
    }
    else
    {
        printf("non sono uguali il valore medio è %f\n", (n1+n2)/2);
    }
}