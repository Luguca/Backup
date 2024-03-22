#include <stdio.h>


int main (void)
{
  float BaseM, basem, altezza, area;	//dichiaro e inizializzo le variabili

  printf(" 5 Determina l'area di un trapezio leggendo in input il valore delle basi e l'altezza.\n\n");
  printf ("Base maggiore: ");
  scanf ("%f", &BaseM);
  printf ("base minore: ");
  scanf ("%f", &basem);
  printf ("altezza: ");
  scanf ("%f", &altezza);
  area = ((BaseM+basem)*altezza)/2;
  printf("L'area del trapezio è di: %f",area);
  return 0;

}