#include <stdio.h>
#include <math.h>

int main (void)
{
  float n, np, ns;	//dichiaro e inizializzo le variabili

  printf("6 Determina il numero precedente e il successivo di un numero intero letto in input. \n\n");
  printf ("Numero : ");
  scanf ("%f", &n);
  np = n-1;
  ns = n+1;
  printf ("Numero successivo : %f\n", ns);
  printf ("Numero precedente : %f\n", np);
  return 0;

}
