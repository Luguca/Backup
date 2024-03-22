#include <stdio.h>

int main(void)
{
    int eta;

    printf("inserire l'età: ");
    scanf("%d", &eta);
    if(eta>=18)
    {
        printf("maggiorenne");
    }
    else
    {
        printf("minorenne");
    }
}