#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void *smallest(int array[], int *min);

int main()
{
    srand(time(NULL));
    int a[N];
    int min = 0;
    for (int i = 0; i < N; i++)
    {
        a[i]=rand()%101;
        printf("%d\n", a[i]);
    }
    *smallest(a, &min);
}

void *smallest(int array[], int *min)
{
    *min = 101;
    int cella = 0;
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", array[i]);
        if(*min>array[i])
        {
            *min=array[i];
            cella = i;
        }        
    }
    printf("il numero più basso si trova nella cella di memoria %p", array[cella]);
}