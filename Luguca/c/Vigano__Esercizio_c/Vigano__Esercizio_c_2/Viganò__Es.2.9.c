#include <stdio.h>
#include <math.h>

int main (void)
{
  int n1, n2, pot;	//dichiaro e inizializzo le variabili

  printf ("coefficenza della potenza: ");
  scanf ("%d", &n1);
  printf ("Volte della potenza: ");
  scanf ("%d", &n2);
  pot= pow(n1,n2);
  printf("Il risultato finale è di: %d\n", pot);
}