#include <stdio.h>
#include <string.h>

#define d 12

char n[d];

void inverso();

int main()
{
    int i;
    printf("Inserire numero: ");
    scanf("%s", n);
    inverso();
    
}

void inverso()
{
    int i;
    for (i = d-1; i >= 0; i--)
    {
        printf("%c", n[i]);
    }
}