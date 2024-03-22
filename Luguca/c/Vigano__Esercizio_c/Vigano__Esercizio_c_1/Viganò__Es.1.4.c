#include <stdio.h>
#include <math.h>

int main (void)
{
  float ipo, cat1, cat2, perimetro, area;	//dichiaro e inizializzo le variabili

  printf("4 Leggi i valori dell'ipotenusa e di un cateto di un triangolo rettangolo e calcola la lunghezza del altro cateto,");
  printf("il perimetro e l'area del triangolo visualizzando i risultati sullo schermo.  \n\n");
  printf ("L'ipotenusa: ");
  scanf ("%f", &ipo);
  printf ("Cateto 1: ");
  scanf ("%f", &cat1);
  if (ipo <= cat1)
    {
      printf ("L'ipotenusa minore o uguale al cateto 1: ");
    }
  else
    {
      cat2 = sqrt ((ipo * ipo) - (cat1 * cat1));
      perimetro = ipo + cat1 + cat2;
      area = (ipo * cat1) / 2;
      printf ("Il cateto 2  : %f\n", cat2);
      printf ("Il perimetro  : %f\n", perimetro);
      printf ("L'area : %f\n", area);
    }

  return 0;

}
