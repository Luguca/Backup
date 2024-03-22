#include <stdio.h>
#include <math.h>

int main (void)
{
  float n, ns1, ns2, ns3, ns4, ns5;	//dichiaro e inizializzo le variabili

  printf("10 Dato un numero, determina le sue cinque prime potenze. \n\n");
  printf ("Numero : ");
  scanf ("%f", &n);
  ns1 = n * n;
  ns2 = ns1 * n;
  ns3 = ns2 * n;
  ns4 = ns3 * n;
  ns5 = ns4 * n;

  printf ("Prima potenza : %f\n", ns1);
  printf ("Potenza successiva : %f\n", ns2);
  printf ("Potenza successiva : %f\n", ns3);
  printf ("Potenza successiva : %f\n", ns4);
  printf ("Potenza successiva : %f\n", ns5);

  return 0;

}
