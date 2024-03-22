#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("inserire numero: ");
    scanf("%d", &n1);
    printf("inserire numero: ");
    scanf("%d", &n2);
    if(n1==n2)
    {
        printf("sono uguali");
    }
    else
    {
        printf("non sono uguali");
    }
}