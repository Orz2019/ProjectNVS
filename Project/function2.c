#include <stdio.h>
#include <stdlib.h>
// Funkce na prevod na binarni soustavu
int function2(int cislo)
{
    // Zakladni promenne
    int i;
    int temp[32];
    // Cyklus na prevod cisla na 0 a 1
    for(i = 0; cislo > 0; i++)
    {
        temp[i] = cislo%2;
        cislo = cislo/2;
    }
    // Cyklus na vypis pole temp
    for(i=i-1;i>=0;i--)
    {
    printf("%d",temp[i]);
    }
    printf("\n");
}
