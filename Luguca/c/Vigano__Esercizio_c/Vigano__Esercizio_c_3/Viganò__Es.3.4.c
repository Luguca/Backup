#include <stdio.h>

int main(void)
{
    float tots;

    printf("inserire numero: ");
    scanf("%f", &tots);
    if(tots>100)
    {
        printf("La spesa ti costa: %f\n",tots*0.8);
    }
    else
    {
        printf("La spesa ti cosa %f\n",tots);
    }
}