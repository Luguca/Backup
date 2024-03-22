#include <stdio.h>
#include <string.h>

int cerca_elemento(int *array, int size, int elemento) 
{
for (int i = 0; i < size; i++) {
if (*(array + i) == elemento) { // oppure if (array[i] == elemento)
return 1; // Trovato
}
}
return 0; // Non trovato
}


int main() 
{
int array[] = {1, 2, 3, 4, 5};
int size = sizeof(array) / sizeof(array[0]);
int elemento = 3;
if (cerca_elemento(array, size, elemento)) {
printf("L'elemento %d è presente nell'array.\n", elemento);
} else {
printf("L'elemento %d non è presente nell'array.\n", elemento);
}
return 0;
}