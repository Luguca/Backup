#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



int main(void)
{

    srand(time(NULL));
    int n, s, c, o;
    n=(rand() %26) +1;
    printf("%d\n", n);
    s=0;
    c=0;
    o=n;
    while(c<o)
    {
        s=s+n;
        n=n-1;
        c=c+1;
        printf("%d\n", n);
    }
    printf("%d", s);
    return 0;
}
