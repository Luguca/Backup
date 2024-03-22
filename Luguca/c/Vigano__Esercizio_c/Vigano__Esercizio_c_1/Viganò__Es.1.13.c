#include <stdio.h>
#include <math.h>

int main (void)
{
  float ipo, cat1, cat2, base, perimetro, area;	//dichiaro e inizializzo le variabili

  printf("13 Leggi il valore del lato obliquo e dell altezza di un triangolo isoscele e calcola il perimetro e l area del triangolo.");
  printf("il perimetro e l'area del triangolo visualizzando i risultati sullo schermo.  \n\n");
  printf ("L'ipotenusa: ");
  scanf ("%f", &ipo);
  printf ("altezza : ");
  scanf ("%f", &cat2);
  if (ipo <= cat2)
    {
      printf ("L'ipotenusa minore o uguale al cateto 1: ");
    }
  else
    {
      cat1 = sqrt ((ipo * ipo) - (cat2 * cat2));
      base = cat1 * 2;
      perimetro = ipo + ipo + base;
      area = (cat2 * base) / 2;
      printf ("Il perimetro ( : %f\n", perimetro);
      printf ("L'area : %f\n", area);
    }

  return 0;

}
