#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CODICI_FISCALI ".\\documenti\\codici_fiscali.txt"
#define DATE ".\\documenti\\data.txt"
#define LUOGHI "luoghi.txt"
char codice[16];
int c = 0;
void NOME();
void COGNOME();
void DATA();
void LUOGO();
void PROVINCIA();
void CONTROLLO();

int main()
{
    FILE *fcheck;
    fcheck=fopen(CODICI_FISCALI, "r");
    if(fcheck==NULL)
    {
        fclose(fcheck);
        fcheck=fopen(CODICI_FISCALI,"w");
    }
    fclose(fcheck);
    COGNOME();
    NOME();
    DATA();
}

void COGNOME()
{
    char cognome[20];
    printf("inserire cognome :");
    scanf("%s", cognome);
    toupper(cognome);
    int lenn=strlen(cognome);
    for (int i = 0; i < lenn; i++)
    {
        switch (cognome[i])
        {
        case 'a':
            break;
        case 'e':
            break;
        case 'i':
            break;
        case 'o':
            break;
        case 'u':
            break;
        default:
        if (c != 3)
        {
            codice[c] = cognome[i];
            c = c + 1;
        }
        break;
        }
    }
    if (c<3)
    {
        for (int i = 0; i < lenn; i++)
        {
            switch (cognome[i])
            {
            case 'a':
                if (c != 3)
                {
                    codice[c] = cognome[i];
                    c = c + 1;
                }
                break;
            case 'e':
                if (c != 3)
                {
                    codice[c] = cognome[i];
                    c = c + 1;
                }
                break;
            case 'i':
                if (c != 3)
                {
                    codice[c] = cognome[i];
                    c = c + 1;
                }
                break;
            case 'o':
                if (c != 3)
                {
                    codice[c] = cognome[i];
                    c = c + 1;
                }
                break;
            case 'u':
                if (c != 3)
                {
                    codice[c] = cognome[i];
                    c = c + 1;
                }
                break;
            default:
                break;
            }
        }
    }
    printf("%s\n", codice);
    return;
}

void NOME()
{
    char nome[20];
    printf("inserire nome :");
    scanf("%s", nome);
    toupper(nome);
    int lenn=strlen(nome);
    for (int i = 0; i < lenn; i++)
    {
        switch (nome[i])
        {
        case 'a':
            break;
        case 'e':
            break;
        case 'i':
            break;
        case 'o':
            break;
        case 'u':
            break;
        default:
        if (c != 6)
        {
            codice[c] = nome[i];
            c = c + 1;
        }
        break;
        }
    }
    if (c<6)
    {
        for (int i = 0; i < lenn; i++)
        {
            switch (nome[i])
            {
            case 'a':
                if (c != 6)
                {
                    codice[c] = nome[i];
                    c = c + 1;
                }
                break;
            case 'e':
                if (c != 6)
                {
                    codice[c] = nome[i];
                    c = c + 1;
                }
                break;
            case 'i':
                if (c != 6)
                {
                    codice[c] = nome[i];
                    c = c + 1;
                }
                break;
            case 'o':
                if (c != 6)
                {
                    codice[c] = nome[i];
                    c = c + 1;
                }
                break;
            case 'u':
                if (c != 6)
                {
                    codice[c] = nome[i];
                    c = c + 1;
                }
                break;
            default:
                break;
            }
        }
    }
    printf("%s", codice);
    return;
}

void DATA()
{
    /*char fn[50];
    char str[] = "Oggi è primavera!\n";
    fptr = fopen("fputc_test.txt", "w");
    for (i = 0; str[i] != '\n'; i++)
    {
        fputc(str[i], fptr);
    }
    fclose(fptr);*/
    FILE *fdata;
    char date[95];
    char data[12];
    fdata=fopen(DATE, "r");
    for (int i = 0; date[i] != EOF; i++)
    {
        fputc(date[i], fdata);
    }
    
    for (int i = 0; i < 95; i++)
    {
        if()
    }
    

    fclose(DATE);
}
