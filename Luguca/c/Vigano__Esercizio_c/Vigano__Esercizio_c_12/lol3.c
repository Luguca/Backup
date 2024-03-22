#include <stdio.h>

void scambia(int *n, int *m, int *s);

int main()
{
    int num1, num2, s=0;
    printf("Inserisci numero 1: ");
    scanf("%d", &num1);
    printf("Inserisci numero 2: ");
    scanf("%d", &num2);
    printf("\n%d ", s);
    printf("\n%d", &num1);
    printf("\n%d", num1);
    printf("\n%d", &num2);
    printf("\n%d", num2);
    printf("\n%d", &s);
    printf("\n%d", s);
    printf("\n\n//scambio//\n");
    scambia(&num1, &num2, &s);
    printf("\n%d ", s);
    printf("\n%d", &num1);
    printf("\n%d", num1);
    printf("\n%d", &num2);
    printf("\n%d", num2);
    printf("\n%d", &s);
    printf("\n%d", s);
}

void scambia(int *n, int *m, int *s)//*n e *m sono i contenuti
{
    *s = *m + *n;
}