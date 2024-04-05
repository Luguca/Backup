#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#define CODICI_FISCALI ".\\documenti\\codici_fiscali.txt"
//#define DATE ".\\documenti\\data.txt"
//#define LUOGHI "luoghi.txt"
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
    /*FILE *fcheck;
    fcheck=fopen(CODICI_FISCALI, "r");
    if(fcheck==NULL)
    {
        fclose(fcheck);
        fcheck=fopen(CODICI_FISCALI,"w");
    }
    fclose(fcheck);*/
    COGNOME();
    NOME();
    DATA();
}

void COGNOME()
{
    char cognome[20];
    printf("inserire cognome: ");
    scanf("%s", cognome);
    //toupper(cognome);
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
    printf("inserire nome: ");
    scanf("%s", nome);
    //toupper(nome);
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
    printf("%s\n", codice);
    return;
}

void DATA()
{
    char mese[4];
    printf("inserire anno: ");
    scanf("%s", mese);
    for (int i = 2; i < 4; i++)
    {
        codice[c]=mese[i];
        c++;
    }
    printf("%s\n", codice);
    int data;
    while (c!=9)
    {
        printf("inserire mese: ");
        scanf("%d", &data);
        switch (data)
    {
    case 1:
        codice[c]='a';
        c = c + 1;
        break;
    case 2:
        codice[c]='b';
        c = c + 1;
        break;
    case 3:
        codice[c]='c';
        c = c + 1;
        break;
    case 4:
        codice[c]='d';
        c = c + 1;
        break;
    case 5:
        codice[c]='e';
        c = c + 1;
        break;
    case 6:
        codice[c]='h';
        c = c + 1;
        break;
    case 7:
        codice[c]='l';
        c = c + 1;
        break;
    case 8:
        codice[c]='m';
        c = c + 1;
        break;
    case 9:
        codice[c]='p';
        c = c + 1;
        break;
    case 10:
        codice[c]='r';
        c = c + 1;
        break;
    case 11:
        codice[c]='s';
        c = c + 1;
        break;
    case 12:
        codice[c]='t';
        c = c + 1;
        break;
    default:
    printf("numero sbagliato\n");
        break;
    }
    }
    printf("%s\n", codice);
    char giorno[2];
    printf("inserire giorno: ");
    scanf("%s", giorno);
    if(giorno[2]=='\n')
    {
        codice[c]=0;
        c = c + 1;
        codice[c]=giorno[1];
        c = c + 1;
    }
    else
    {
        for (int i = 0; i < 2; i++)
        {
            codice[c]=giorno[i];
            c = c + 1;
        }
    }
    printf("%s\n", codice);
}
