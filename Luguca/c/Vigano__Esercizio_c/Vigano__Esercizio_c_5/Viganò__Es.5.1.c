#include <stdio.h>

int main(void)
{
    int a, c;
    c=0;
    do
    {
        printf("inserisci numero: ");
        scanf("%d", &a);
        c=c+1;
    } while (a!=0);

    c=c-1;
    printf("Sono stati inseriti %d numeri", c);
    
}