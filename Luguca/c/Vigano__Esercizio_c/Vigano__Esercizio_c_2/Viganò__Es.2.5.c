#include <stdio.h>

int main (void)
{
  int n1, n2, i, m;	//dichiaro e inizializzo le variabili

  printf ("Numero dai ripetizioni: ");
  scanf ("%d", &n1);
  m=0;
  if(n1>0)
  {
    for (i=n1; i > 0; i--)
    {
    printf ("Numero: ");
    scanf ("%d", &n2);
        if(m==0)
        {
            m=n2;
        }
        else
        {
            if(n2<m)
        {
        m=n2;
        printf ("Numero minore di quello precedente \n");
        }
        else
        {
            printf ("Numero maggiore di quello precedente \n");
        }
        }
    }
  }
  else
  {
    printf("riprova");
    }
    printf ("Il numero più piccolo è di: %d\n", m);
  }