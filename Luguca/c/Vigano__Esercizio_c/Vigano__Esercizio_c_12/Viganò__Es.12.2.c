#include <stdio.h>

void scambia(int *n, int *m);

int main()
{
    int p, q;
    printf("Inserisci numero 1: ");
    scanf("%d", &p);
    printf("Inserisci numero 2: ");
    scanf("%d", &q);
    printf("\n%d", &p);
    printf("\n%d", p);
    printf("\n%d", &q);
    printf("\n%d", q);
    printf("\n\n//scambio//\n");
    scambia(&p, &q);
    printf("\n%d", &p);
    printf("\n%d", p);
    printf("\n%d", &q);
    printf("\n%d", q);
}

void scambia(int *n, int *m)//*n e *m sono i contenuti
{
    int tempo;
    tempo = *m;
    *m = *n;
    *n = tempo;
}