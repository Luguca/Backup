#include <stdio.h>

int main(void)
{
    float n1, n2, n3;

    printf("inserire numero: ");
    scanf("%f", &n1);
    printf("inserire numero: ");
    scanf("%f", &n2);
    printf("inserire numero: ");
    scanf("%f", &n3);
    if((n1==n2)&&(n2==n3)&&(n3==n1))
    {
        printf("equilatero %f\n", n1);
    }
    else
    {
        if((n1==n2)||(n2==n3)||(n3==n1))
        {printf("isoscele");}
        else
        {
            printf("scaleno");
        }
    }
}