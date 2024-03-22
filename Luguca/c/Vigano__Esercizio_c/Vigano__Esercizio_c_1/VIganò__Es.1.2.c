#include <stdio.h>


int main (void)
{
  float gradi, primi, secondi, ptot, stot;	//dichiaro e inizializzo le variabili

  printf("2 Scrivi un programma che, data in input la misura di un angolo in gradi (G), primi (P) e secondi (S),determini la sua ampiezza espressa in secondi. \n\n");
  printf ("quanti gradi?: ");
  scanf ("%f", &gradi);
  printf ("quanti primi?: ");
  scanf ("%f", &primi);
  printf ("quanti secondi: ");
  scanf ("%f", &secondi);
  ptot = (gradi * 60) + primi;
  stot = (ptot * 60) + secondi;
  printf ("I secondi totali sono:%f\n", stot);
  return 0;

}
