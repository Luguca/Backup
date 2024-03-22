#include <stdio.h>


int main()
{
int i,j; //variabili dichiarate ma non inizializzate.
int *a;
a = &j;
*a = 42;
printf("Il puntatore punta ad una var che vale %d ", *a);
return 0;
}