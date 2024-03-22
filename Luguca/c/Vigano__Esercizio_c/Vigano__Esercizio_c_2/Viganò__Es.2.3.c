#include <stdio.h>

int main (void)
{
  int i;	//dichiaro e inizializzo le variabili

  for (i=10; i <= 100; i++)
  {
    if(i%5==0)
    printf ("Numero multiplo di cinque: %d\n", i);
    else
    printf ("Numero non multiplo di cinque: %d\n", i);
  }
  
}