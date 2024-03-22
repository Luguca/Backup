#include <stdio.h>

int main (void)
{
  int n1, n2, i;	//dichiaro e inizializzo le variabili

  printf ("Numero da vedere i suoi minori pari: ");
  scanf ("%d", &n1);
  for (i=n1; i >= 0; i--)
  {
    if(i%2==0)
    printf ("Numero pari: %d\n", i);
    else
    printf ("Numero dispari: %d\n", i);
  }
  
}