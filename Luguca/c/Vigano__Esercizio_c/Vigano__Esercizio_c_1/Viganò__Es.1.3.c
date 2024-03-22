#include <stdio.h>

int
main (void)
{
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, s;	//dichiaro e inizializzo le variabili

  printf("3 Scrivi un programma che chieda 10 numeri e ne stampi la somma.  \n\n");
  printf ("Primo numero: ");
  scanf ("%d", &n1);
  printf ("Secondo numero: ");
  scanf ("%d", &n2);
  printf ("Terzo numero: ");
  scanf ("%d", &n3);
  printf ("Quarto numero: ");
  scanf ("%d", &n4);
  printf ("Quinto numero: ");
  scanf ("%d", &n5);
  printf ("Sesto numero: ");
  scanf ("%d", &n6);
  printf ("Settimo numero: ");
  scanf ("%d", &n7);
  printf ("Ottavo numero: ");
  scanf ("%d", &n8);
  printf ("Nono numero: ");
  scanf ("%d", &n9);
  printf ("Decimo numero: ");
  scanf ("%d", &n10);
  s = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
  printf ("la somma totale : %d\n", s);
  return 0;

}
