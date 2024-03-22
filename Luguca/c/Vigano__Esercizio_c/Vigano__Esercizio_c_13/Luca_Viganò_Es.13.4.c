#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RIG 10
#define COL 10

int main(void)
{
    int matrice[RIG][COL];
    srand(time(NULL));
    for (int i = 1; i < COL+1; i++)
    {
        for (int j = 1; j < RIG+1; j++)
        {
            int a = i;
            int b = j;
            matrice[i-1][j-1]=a*b;
        }
    }
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < RIG; j++)
        {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }
}