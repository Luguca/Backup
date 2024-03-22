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
        for (j = 0; j < 10; j++)
        {
            if(i!=j)
            {
               if(numeri[i]==numeri[j])
                {
                    printf("i numeri non sono tutti diversi");
                    return 0;
                } 
            }
        }
    }
    printf("i numeri sono tutti diversi");
}