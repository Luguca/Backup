#include <stdio.h>

int main (void)
{
  int n1, n2, i;	//dichiaro e inizializzo le variabili

  printf ("Numero dai ripetizioni: ");
  scanf ("%d", &n1);
  if(n1>=10 && n1<=20)
  {
  for (i=n1; i >= 0; i--)
  {
    printf("Il numero dopo è di: %d\n", i );
  }
  }
  else
  {
    printf ("Rifare");
  }
}