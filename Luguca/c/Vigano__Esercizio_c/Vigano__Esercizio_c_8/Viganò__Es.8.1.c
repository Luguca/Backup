#include <stdio.h>
#include <string.h>

int main(void)
{
    char u;
    char nome1[15]="Maria";
    char nome2[15]="Chiara";
    strcat(nome1,nome2);
    printf("%s",nome1);
    return 0;
}
