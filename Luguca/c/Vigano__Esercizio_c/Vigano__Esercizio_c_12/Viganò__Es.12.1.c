#include <stdio.h>
#include <string.h>

void split_time(long int tot_sec, float *h, float *m, float *s);

int main() 
{
    float ore, minuti, secondi;
    long int sec;
    printf("Inserire secondi: ");
    scanf("%ld", &sec);
    split_time(sec, &ore, &minuti, &secondi);
    printf("secondi: %f", secondi);
    printf("\nminuti: %f", minuti);
    printf("\nore: %f", ore);
}

void split_time(long int tot_sec, float *h, float *m, float *s)
{
    *s = (tot_sec % 3600)%60;
    *m = (tot_sec % 3600)/60;
    *h = tot_sec / 3600;
}