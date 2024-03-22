#include <stdio.h>
int main(void)
{
    int n, m, c, s;

    c=0;
    printf("Primo numero: ");
    scanf("%d\n", &n);
    printf("Secondo numero: ");
    scanf("%d\n", &m);
    if(n>m)
    {
        while (m!=n)
        {
            if(n%2==0)
            {
                c=c+1;
                printf("pari: %d\n", n);
                n=n-1;
                
            }
            else
            {
                n=n-1;
                
            }
        }
        
    }
    else
    {
       while (n!=m)
        {
            if(m%2==0)
            {
                c=c+1;
                printf("pari: %d\n", m);
                m=m-1;
                
            }
            else
            {
                m=m-1;
            }
        } 
    }
    printf("le volte di numeri pari che ci sono stati sono: %d\n", c);

}
