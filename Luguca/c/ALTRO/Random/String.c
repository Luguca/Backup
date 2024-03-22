#include<stdio.h>
#include<string.h>

int main(void)

{
    int i, c;
    char s1[10], s2[10], s3[10], s4[10], s5[10];
    for (i = 0; i < 5; i++)
    {
        printf("Inserisci il i° cognome: \n");
        scanf("%s",s); 
    }
    
    printf("Inserisci la prima parola: \n");
    scanf("%s",s1);
    for (i = 0; i < 20; i++)
    {
        if((s1[i]=='f')||(s1[i]=='F'))
        {
            c=c+1;
        }
    }
    printf("Ci sono %d f nel nome", c);
    return 0;
}
