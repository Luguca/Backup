#include <stdio.h>

int main(void)
{
    int a , b;
    printf("Dichiara il valore A\n");
    scanf("%d", &a);
    printf("Dichiara il valore B\n");
    scanf("%d", &b);

    if (a > b)
    {
       if (a%2 == 0)
       {
         while(a =! b)
         a=a+2;
         printf("%d\n", a);
        }
       else
        {
            a=a+1;
            printf("%d\n", a);
            while(a =! b)
            a=a+2;
            printf("%d\n", a);
        }
    }
    else
    {
       if (b%2 == 0)
       {
            while(a =! b)
            b=b+2;
            printf("%d\n", b);
        }
       else
        {
            b=b+1;
            printf("%d\n", a);
            while(a =! b)
            b=b+2;
            printf("%d\n", b);
        }
    }

    return 0;
}