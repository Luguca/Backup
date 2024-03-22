#include <stdio.h>

#define N 10

void max_secondmax(int a[], int n, int *max, int *second_max);

int main()
{
    int array[N], max, second_max, i;
    for (i = 0; i < N; i++)
    {
        printf("inserisco %d° numero nel array: ", i+1);
        scanf("%d", &array[i]);
    }
    max_secondmax(array, N, &max, &second_max);
    printf("Il numero più grande %d e il secondo numero più grande %d", max, second_max);
}

void max_secondmax(int a[], int n, int *max, int *second_max)
{
    *max = 0;
    *second_max = 1;
    for (int i = 0; i < n; i++)
    {
        if(*max<a[i])
        {
            *second_max=*max;
            *max=a[i];
        }        
    }
}