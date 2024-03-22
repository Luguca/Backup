#include <stdio.h>
#include <math.h>

int main (void)
{
  float n, ns1, ns2, ns3, ns4, ns5;	//dichiaro e inizializzo le variabili

  printf("7 Determina i cinque numeri successivi di un numero naturale letto in input. . \n\n");
  printf ("Numero : ");
  scanf ("%f", &n);
  ns1 = n + 1;
  ns2 = ns1 + 1;
  ns3 = ns2 + 1;
  ns4 = ns3 + 1;
  ns5 = ns4 + 1;

  printf ("Numero successivo : %f\n", ns1);
  printf ("Numero successivo : %f\n", ns2);
  printf ("Numero successivo : %f\n", ns3);
  printf ("Numero successivo : %f\n", ns4);
  printf ("Numero successivo : %f\n", ns5);

  return 0;

}
