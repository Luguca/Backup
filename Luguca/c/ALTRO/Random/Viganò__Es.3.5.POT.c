#include <stdio.h>
int CARICA(void);
int ORDINA(void);
int CERCA(void);
int ELIMINA(void);
int VISUALIZZA(void);

int n, m, c, i, NUM, j, can, ncan;
int NUMERI[n];
int main(void)
{
    srand(time(NULL));
    do
    {
        printf("Quanti numeri vuoi inserire? (deve essere minore di 20): ");
        scanf("%d", &n);
    } while (n>20);
    int NUMERI[n];
    for (i = 0; i < n; i++)
    {
        m=(rand()%101)-30;
        NUMERI[i]=m;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", NUMERI[i]);
    }
    return 0;
}

int CARICA(void)
{
    srand(time(NULL));
    do
    {
        printf("Quanti numeri vuoi inserire? (deve essere minore di 20): ");
        scanf("%d", &n);
    } while (n>20);
    int NUMERI[n];
    for (i = 0; i < n; i++)
    {
        m=(rand()%101)-30;
        NUMERI[i]=m;
    }
}
int ORDINA (void)
{

}

int CERCA (void)
{
        for (i = 0; i < n; i++)
    {
        printf("\npuoi eliminare un massimo di %d tentativi ora sei al %d° tentativo: ", n, c+1);
        scanf("%d", &NUM);
        for (j = 0; j < n; j++)
        {
            if(NUM==NUMERI[j])
            {
                NUMERI[j]=0;
                can=can+1;
            }
            else
            {
                ncan=ncan+1;
            }
        }
        ELIMINA();

    }
}
int ELIMINA (void);
{
    c=c+1;
    printf("\nHai eliminato %d numeri\n", can);
    can=0;
    printf("\nNon hai eliminato %d numeri\n", ncan);
    ncan=0;
    CERCA (void);
}

int VISUALIZZA (void);
{
    
}
