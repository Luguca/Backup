#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, i;
    i=0;
    srand(time(NULL));
    while(i<20)
    {
    n=(rand()%46)+5;
    printf("%d ", n);
    i=i+1;
    }
    return 0;    
}