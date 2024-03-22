#include <stdio.h>


int main (void)
{
  float n1, n2, prod;	//dichiaro e inizializzo le variabili

  printf("9 Dati due numeri, determina il loro prodotto in base alla regola dei segni. \n\n");
  printf ("Primo numero?: ");
  scanf ("%f", &n1);
  printf ("secondo numero?: ");
  scanf ("%f", &n2);
  prod = n1 * n2;
  printf ("Il prodotto è: %f\n", prod);
  return 0;

}
