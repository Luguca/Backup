#include <stdio.h>

int main(void)
{
    float gradi;

    printf("inserire numero: ");
    scanf("%f", &gradi);
    if(gradi<=5)
    {
        printf("Serra in situazione estrema: %f\n",gradi);
    }
    else
    {
        if((gradi>6)&&(gradi<18))
        {
            printf("Serra in pericolo: %f\n",gradi);
        }
        else
        {
            printf("Serra non in pericolo: %f\n",gradi);
        }
    }
}