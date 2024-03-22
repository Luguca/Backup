#include <stdio.h>
#include <string.h>

float euro_dollari(float moneta);
float euro_lire(float moneta);

int main()
{
    float n, d, l;
    printf("inserire numero: ");
    scanf("%d", &n);
    d = euro_dollari(n);
    l = euro_dollari(n);
    printf("da euro %f a dollari %f", n, d);
    printf("da euro %f a lire %f", n, l);
}
float euro_dollari(float moneta)
{
    float tot;
    tot = moneta * 0.98;
    return tot;
}

float euro_lire(float moneta)
{
    float tot;
    tot = moneta * 1936.27;
    return tot;
}