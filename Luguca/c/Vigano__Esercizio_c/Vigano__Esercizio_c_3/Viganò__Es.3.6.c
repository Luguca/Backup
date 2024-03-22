#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("inserire numero: ");
    scanf("%d", &n1);
    if(n1%2==0)
    {
        printf("Il numero è pari %d\n", n1*2);
    }
    else
    {
        printf("Il numero è dispari %d\n", n1*3);
    }
}