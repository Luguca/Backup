#include <stdio.h>
#include <string.h>

#define d 11

int n[d];
int x[d];
int y[d];
int i, j;

void array1();
void array2();
void confronto();

int main()
{
    array1();
    array2();
    confronto();
}

void array1()
{
    printf("inserisci 10 valori massimo: ");
    for (i = 0; i < d-1; i++)
    {
        scanf("%d", &n[i]);
    }
    n[d]=0;
    array2();
}

void array2()
{
    printf("inserisci 10 valori massimo: ");
    for (i = 0; i < d-1; i++)
    {
        scanf("%d", &x[i]);
    }
    x[d]=0;
    confronto();
}

void confronto()
{
    for (i = 0; i < d-1; i++)
    {
        if(n[i]==x[i])
        {
            printf("nella cella %d dei due array i numeri sono uguali\n", i);
        }        
    }
}