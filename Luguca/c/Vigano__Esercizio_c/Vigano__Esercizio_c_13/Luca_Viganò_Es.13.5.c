#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N;

int INSERIMENTO(int *mat[N][N]);
int SOMMALINEE(int *sl, int *mat[N][N]);
int SOMMACOLONNE(int *sc, int *mat[N][N]);

int main(void)
{
    int sl, sc;
    printf("di quanto vuoi grande le linee e le colonne: ");
    scanf("%d", &N);
    int matrice[N][N];
    INSERIMENTO((int *)matrice);
    SOMMALINEE(&sl, (int *)matrice);
    SOMMACOLONNE(&sc, (int *)matrice);
}

int INSERIMENTO(int *mat[N][N])
{
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            *mat[i][j]=rand()%10+1;
        }
    }
}

int SOMMALINEE(int *sl, int *mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        *sl=0;
        for (int j = 0; j < N; j++)
        {
            *sl=*sl+*mat[i][j];
        }
    }
}

int SOMMACOLONNE(int *sc, int *mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        *sc=0;
        for (int j = 0; j < N; j++)
        {
            *sc=*sc+*mat[j][i];
        }
    }
}