#include <stdio.h>


int main (void)
{
  float ore, minuti, secondi, mtot, stot;	//dichiaro e inizializzo le variabili

  printf("8 Leggi tre numeri corrispondenti a ore, minuti e secondi e calcolane il valore totale in secondi. \n\n");
  printf ("quante ore?: ");
  scanf ("%f", &ore);
  printf ("quanti minuti?: ");
  scanf ("%f", &minuti);
  printf ("quanti secondi");
  scanf ("%f", &secondi);
  mtot = (ore * 60) + minuti;
  stot = (mtot * 60) + secondi;
  printf ("I secondi totali sono:%f\n", stot);
  return 0;

}
