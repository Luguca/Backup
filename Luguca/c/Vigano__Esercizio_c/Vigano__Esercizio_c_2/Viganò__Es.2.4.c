#include <stdio.h>

int main (void)
{
  int n1, n2, i;	//dichiaro e inizializzo le variabili

  printf ("Numero dai ripetizioni: ");
  scanf ("%d", &n1);
  if(n1>0){
  for (i=n1; i > 0; i--)
  {
    printf ("Numero: ");
    scanf ("%d", &n2);
    if(n2%3==0)
    printf ("Numero multiplo di 3: %d\n", n2);
    else
    printf ("Numero non multiplo di 3: %d\n", n2);
  }
  }
  else
  {
    printf ("Rifare");
  }
}