#include <stdio.h>
#include <stdlib.h>
// Funkce na prevod na oktalni soustavu
int function8(int cislo)
{
    // Zakladni promenne
    int i;
    int temp[32];
    // Cyklus na prevod cisla na 0-8
    for(i = 0; cislo > 0; i++)
    {
        temp[i] = cislo%8;
        cislo = cislo/8;
    }
    // Cyklus na vypis pole temp
    for(i=i-1;i>=0;i--)
    {
    printf("%d",temp[i]);
    }
    printf("\n");
}

