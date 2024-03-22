#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("inserire numero: ");
    scanf("%d", &n1);
    printf("inserire numero: ");
    scanf("%d", &n2);
    if(n1%n2==0)
    {
        printf("Il numero 1 è divisibile per il numero 2");
    }
    else
    {
        printf("Il numero 1 non è divisibile per il numero 2");
    }
}