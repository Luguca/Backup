#include <stdio.h>

int main (void)
{
  int i, j;	//dichiaro e inizializzo le variabili
  
  for (i=1; i<=10; i++)
  {
    for (j=1; j<=10; j++)
    {
      printf("%d \t",i*j);
    }
    printf("\n");
  }
  return 0;
}