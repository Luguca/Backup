#include <stdio.h>

int main (void)
{
  float n1, n2, s, i;	//dichiaro e inizializzo le variabili

  printf ("Numero di ripetizioni: ");
  scanf ("%f", &n1);
  for (i=0; i < n1; i++)
  {
    printf ("Numero: ");
    scanf ("%f", &n2);
    s=s+n2;
  }
  printf("La somma totale è: %f\n", s);
  
  

}