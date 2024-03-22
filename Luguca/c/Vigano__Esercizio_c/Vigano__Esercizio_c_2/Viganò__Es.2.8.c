#include <stdio.h>
#include <math.h>

int main (void)
{
  int n1, n2, i, pot, s, r;	//dichiaro e inizializzo le variabili

  printf ("potenza di: ");
  scanf ("%d", &n1);
  pot=n1*n1;
  printf ("la potenza è di: %d\n", pot);
  s=pot;
  for (i=1; i > s; i+1)
  {
    if (i%2==0)
    {
      s=pot-i;
      printf ("la somma per ora è di: %d\n", s);
    }
  }
  if(s>n1)
    {
      r=s-n1;
      printf ("la somma finale è di: %d\n", s);
    }
    else
    {
      
    }
}