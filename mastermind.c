#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int mind[4];
    int try = 10;
    int done = 0;
    int i;
    int j;
    int nu = 0;
    srand(time(NULL));
    for(int i = 0; i < 4; i++)
    {
        mind[i]=rand()%10;
        printf("%d", mind[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (mind[i]==mind[j])
            {
                nu = nu + 1;
            }
        }
    }
    printf("\n");
    printf("ci sono %d numeri uguali\n", nu);
    int cod[4];
    do
    {
        int c = 0;
        int pos = 0;
        for(i = 0; i < 4; i++)
        {
            printf("inserire numero nel %d slot: ", i+1);
            scanf("%d", &cod[i]);
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (mind[i]==cod[j])
                {
                    c = c + 1;
                    if (i==j)
                    {
                        pos = pos + 1;
                        c = c - 1;
                    }
                }
            }
        }
        if (pos == 4)
        {
            printf("hai vinto\n");
            done = done + 1;
            int fin = try;
            try = try - fin;
        }
        else
        {
            printf("ci sono %d nel posto sbagliato e %d nel posto giusto\n", c, pos);
            printf("riprova\n");
            try = try - 1;
        }
    } while ((try != 0)||(done != 1));
}