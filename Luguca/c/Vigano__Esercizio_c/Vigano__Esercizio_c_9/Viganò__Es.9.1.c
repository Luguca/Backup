#include <stdio.h>
#include <string.h>
int main(void)
{
    char nome1[4], nome2[4];//stringa
    int i, c, x;
    c = 0;//contatore

    //inserimento nome
    printf("inserire nome: ");
    scanf("%s", nome1);
    printf("\n");

    for (i = 0; i < 2; i++)//divisione a metà della stringa
    {
        if(nome1[i]==nome1[4-i-1])
        {
            c=c+1;
        }
    }

    if(c==(4/2))//controllo se è uguale o no
    {
        printf("il nome è un palindromo\n");
    }
    else
    {
        printf("il nome non è un palindromo\n");
    }
    
    for (i = 0; i < 4; i++)//per il controllo di lettere maiuscole
    {
        nome1[i]=nome2[i];
    }
    x=strcmp(nome1,nome2);//controllo le lettere maiscole
    if(x==0)
    {
        printf("il nome è un palindromo");
    }
    else
    {
        if (x>0)
        {
            printf("il nome non è un palindromo");
        }
        else
        {
            if (x<0)
            {
                printf("il nome non è un palindromo");
            }
            
        }
    }
}