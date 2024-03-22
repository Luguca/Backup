#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define LENGHT 10

int GENERA(int *ai, int *aii, int *aiii);
int STAMPA(int *ai, int *aii);
int CHECK(int *aiii);

int main(void)
{
    int array1[LENGHT], array2[LENGHT], array3[LENGHT];    
    GENERA(array1, array2, array3);
    STAMPA(array1, array2);
    CHECK(array3);

}

int GENERA(int *ai, int *aii, int *aiii)
{
    srand(time(NULL));
    for (int i = 0; i < LENGHT; i++)
    {
        ai[i]=rand()%100+1;
    }
    for (int i = 0; i < LENGHT; i++)
    {
        aii[i]=rand()%100+1;
    }
    for (int i = 0; i < LENGHT; i++)
    {
        aiii[i]=ai[i]+aii[i];
    }
    return 0;
}

int STAMPA(int *ai, int *aii)
{
    for (int i = 0; i < LENGHT; i++)
    {
        printf("%d ", ai[i]);
    }
    printf("\n");
    for (int i = 0; i < LENGHT; i++)
    {
        printf("%d ", aii[i]);
    }
    return 0;
}

int CHECK(int *aiii)
{
    printf("\n");
    for (int i = 0; i < LENGHT; i++)
    {
        printf("%d ", aiii[i]);
    }
    return 0;
}