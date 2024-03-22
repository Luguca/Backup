#include <stdio.h>

#define pie 3.14


int main (void)
{
  float raggio, circonferenza, area, perimetro;	//dichiaro e inizializzo le variabili

  printf("1 Leggi il valore del raggio di una circonferenza e calcolane area e il perimetro.\n\n");
  printf ("Valore della base: ");
  scanf ("%f", &raggio);
  area = pie * raggio * raggio;
  circonferenza = raggio * 2;
  perimetro = circonferenza * pie;
  printf ("L'Area misura:%f\n",area);
  printf ("Il perimetro misurato di:%f\n",perimetro);
  return 0;

}
