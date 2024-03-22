#include <stdio.h>

int main (void)
{
  int i, r, rtot;	//dichiaro e inizializzo le variabili
  r=1;
  rtot=0;

  for (i=1; i <= 100; i++)
  {
    if((i-7==0)||(i-17==0)||(i-27==0)||(i-37==0)||(i-47==0)||(i-57==0)||(i-67==0)||(i-77==0)||(i-87==0)||(i-97==0))
    {
      printf ("Numero ha un sette nel numero: %d\n", i);
      rtot=rtot+1;
      printf ("Quante volte si è visto il numero 7: %d\n", rtot);
    }
    else
    {
      printf ("Numero non ha un sette nel numero: %d\n", i);
    }
    
  }
  rtot=rtot+r;
  printf ("Quante volte si è visto il numero 7: %d\n", rtot);
}