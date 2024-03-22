#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{    
    int i, m, n, t, c, d, r;
    srand(time(NULL));
    n=5;
    m=n;
    t=n*2;
    i=0;
    c=0;
    d=0;
    r=0;
    int v[n];
    int b[m];
    int x[t];
    for(i=0; i<n; i++)
    {
        v[i]=rand()%11;
    }
    for(i=0; i<m; i++)
    {
        b[i]=rand()%11;
    }
    for(i=0; i<t; i++)
    {
        if(v[i]%2==0)
        {
            x[i]=v[i];
            c=c+1;
        }
    }
    for(i=0; i<t; i++)
    {
        if(b[i]%2==0)
        {
            x[i]=v[i];
            d=d+1;
        }
    }
    for(i=0; i<t; i++)
    {
        if(v[i]%2!=0)
        {
            x[i]=v[i];
            c=c+1;
        }
    }
    for(i=0; i<t; i++)
    {
        if(b[i]%2!=0)
        {
            x[i]=v[i];
            d=d+1;
        }
    }    