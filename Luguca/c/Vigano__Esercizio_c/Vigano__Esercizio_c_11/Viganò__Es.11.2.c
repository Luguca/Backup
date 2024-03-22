#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define d 8
float LEGGERE(void);
char CONTRARIO(char lol);

int main(void)
{
    int i;
    char nome[d];
    printf("inserire parola");
    scanf("%s", nome);
    for (i = 7; i >= 0; i--)
    {
        CONTRARIO(nome[i]);
    }
}

char CONTRARIO(char lol)
{
    printf("%c", lol);
}