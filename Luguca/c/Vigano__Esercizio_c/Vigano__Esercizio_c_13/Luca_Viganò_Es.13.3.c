#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RIG 9
#define COL 9

int main(void)
{
    int matrice[RIG][COL];
    int a, c = 0;
    srand(time(NULL));
    for (int i = 0; i < RIG; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            matrice[i][j]=rand()%100+1;
        }
    }
    for (int i = 0; i < RIG; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }
    printf("inserire numero da cercare nella matrice: ");
    scanf("%d", &a);
    printf("\n");
    for (int i = 0; i < RIG; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if(a==matrice[i][j])
            {
                printf("il numero è stato trovato nella posizione %d %d\n", i+1, j+1);
                c = c+1; 
            }
        }
    }
    printf("Il numero è stato trovato %d volte", c);
}