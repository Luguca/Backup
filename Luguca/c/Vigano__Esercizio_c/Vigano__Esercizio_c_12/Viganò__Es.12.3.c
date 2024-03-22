#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define lenght 20

char *maiuscola(char *stringa);

int main()
{
    char test[lenght];
    printf("inserire parola: ");
    scanf("%s", test);
    maiuscola(&test);
    printf("%s\n", &test);
    for(int i=0; i<lenght; i++)
    {
        printf("%c", test[i]);
    }
}

char *maiuscola(char *stringa)//*n e *m sono i contenuti
{
    *stringa = toupper(*stringa);
    printf("%s\n", *stringa);
}