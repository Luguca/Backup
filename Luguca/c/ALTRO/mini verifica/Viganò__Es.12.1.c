#include <stdio.h>
#include <string.h>

#define d 100

float PARI(int x);
float DISPARI(int x);
float LUNGHEZZA(int t);




int main()
{
    int c=0;
    int m, i;
    int n[d];
    printf("inserire numero: ");
    scanf("%d", &n[c]);
    do
    {
        if(n[c]%2==0)
        {
            m=PARI(n[c]);
            c=c+1;
            n[c]=m;
        }
        else
        {
            m=DISPARI(n[c]);
            c=c+1;
            n[c]=m;
        }
        printf("%d ", n[c]);
    } while (n[c]!=1);
    LUNGHEZZA(c);
}
float PARI(int x)
{
    int m;
    m = (x/2);
    return m;
}

float DISPARI(int x)
{
    int m;
    m = (x*3)+1;
    return m;
}

float LUNGHEZZA(int x)
{
    printf("- lunghezza %d", x+1);
}