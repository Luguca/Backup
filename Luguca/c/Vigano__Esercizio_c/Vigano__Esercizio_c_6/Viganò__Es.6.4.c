#include <stdio.h>
#define G 100

int main(void)
{    
    int i;
    float p;
    int n[G];

    for (i = 0; i<G; i++)
    {
        n[i]=G-i-1;
        printf("%d\t", n[i]); 
    }
}