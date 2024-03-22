#include <stdio.h>
#include <string.h>

int main(void)
{
    int u, c=0, i;
    char n;
    char nome1[99];
    scanf("%c\n", &nome1[99]);
    u=strlen(nome1);
    for (i = 0; i < u+1; i++)
    {
        if((nome1[i]='c')||(nome1[i]='c'))
        {
            c=c+1;
            if(c==1)
            {
                c=c-1;
            }
        }   
    }
    printf("La lunghezza del cognome è: %d", u);
    if(c==1)
    {
        printf("\nIl cognome contiene delle c");
    }
    else
    {
        printf("\nIl cognome non contiene delle c");
    }
    return 0;
}
