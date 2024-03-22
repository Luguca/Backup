#include <stdio.h>

void scambia(int *n, int *m);

int main()
{
    int num1, num2;
    printf("Inserisci numero 1: ");
    scanf("%d", &num1);
    printf("Inserisci numero 2: ");
    scanf("%d", &num2);
    printf("\n%d", &num1);
    printf("\n%d", num1);
    printf("\n%d", &num2);
    printf("\n%d", num2);
    printf("\n\n//scambio//\n");
    scambia(&num1, &num2);
    printf("\n%d", &num1);
    printf("\n%d", num1);
    printf("\n%d", &num2);
    printf("\n%d", num2);
}

void scambia(int *n, int *m)//*n e *m sono i contenuti
{
    int tempo;
    tempo = *m;
    *m = *n;
    *n = tempo;
}