#include <stdio.h>

int minni(char *pippo){
    int pluto = 0;
    
    while (*pippo != '\0'){
        pluto++;
        pippo++;
    }
        
return pluto;
}

int main(){
    char paperino[] = "Topolinia";
    int topolino = minni(paperino);

    printf("La lunghezza della stringa è %d\n", topolino);

    return 0;
}