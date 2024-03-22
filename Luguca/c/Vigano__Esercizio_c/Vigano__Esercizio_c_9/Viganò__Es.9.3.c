#include <stdio.h>

int main(void)
{
    int i, j, c;
    c=0;
    int numeri[10];
    for (i = 0; i < 10; i++)
    {
        printf("inserire numero: ");
        scanf("%d", &numeri[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if(numeri[i]==numeri[i+1])
        {
            printf("i numeri non sono tutti diversi");
            return 0;
        } 
    }
    printf("i numeri sono tutti diversi");
}