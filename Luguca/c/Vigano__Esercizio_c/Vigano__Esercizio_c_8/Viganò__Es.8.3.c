#include <stdio.h>
#include <string.h>

int main(void)
{
    int u;
    char nome1[15]="Anna";
    char nome2[15]="AnnaChiara";
    u=strncmp(nome1,nome2,4);
    switch (u)
    {
    case 0:
    printf("Sono uguali i due nomi");
    break;
    default:
    if(u>0)
    {
        printf("Il primo nome è maggiore\n");
    }
    else
    {
        printf("Il secondo nome è minore\n");
    }
    break;
    }
    return 0;
}
