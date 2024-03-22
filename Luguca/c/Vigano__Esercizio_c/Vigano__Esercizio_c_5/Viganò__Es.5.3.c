#include <stdio.h>

int main(void)
{
    int a, b, c;
    c=0;
    b=10000;
    do
    {
        printf("Scrivere un numero maggiore di 0 o 0 per terminare il programma: ");
        scanf("%d", &a);
        while(a<0)
        {
            printf("\nrifare");
            scanf("%d", &a);
        }
        if(a==0)
        {

        }
        else
        {
            if(a<b)
            {
                b=a;
            }
            else
            {

            }
        }
c=c+1;
    } while (a!=0);

    printf("Sono stati inseriti %d numeri", c);
    printf("\ne il numero più basso è: %d", b);
    
}