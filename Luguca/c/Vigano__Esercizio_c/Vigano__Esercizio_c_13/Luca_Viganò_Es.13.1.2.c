#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define LENGHT 10

int GENERA(int *ai, int *aii, int *aiii, int *grandezzai, int *grandezzaii, int *grandezzaiii);
int STAMPA(int *ai, int *aii, int *grandezzai, int *grandezzaii);
int CHECK(int *aiii, int *grandezzaiii);

int main(void)
{
    int a, b, c;
    srand(time(NULL));
    a=rand()%10+1;
    b=rand()%10+1;
    c=a+b;
    int array1[a], array2[b], array3[c];
    GENERA(array1, array2, array3, &a, &b, &c);
    STAMPA(array1, array2, &a, &b);
    CHECK(array3, &c);
}

int GENERA(int *ai, int *aii, int *aiii, int *grandezzai, int *grandezzaii, int *grandezzaiii)
{
    srand(time(NULL));
    for (int i = 0; i < *grandezzai; i++)
    {
        ai[i]=rand()%100+1;
    }
    for (int i = 0; i < *grandezzaii; i++)
    {
        aii[i]=rand()%100+1;
    }
    for (int i = 0; i < *grandezzai; i++)
    {
        aiii[i]=ai[i];
    }
    for (int i = 0; i < *grandezzaii; i++)
    {
        aiii[i+*grandezzai]=aii[i];
    }
    return 0;
}

int STAMPA(int *ai, int *aii, int *grandezzai, int *grandezzaii)
{
    for (int i = 0; i < *grandezzai; i++)
    {
        printf("%d ", ai[i]);
    }
    printf("\n");
    for (int i = 0; i < *grandezzaii; i++)
    {
        printf("%d ", aii[i]);
    }
    return 0;
}

int CHECK(int *aiii, int *grandezzaiii)
{
    printf("\n");
    for (int i = 0; i < *grandezzaiii; i++)
    {
        printf("%d ", aiii[i]);
    }
    return 0;
}