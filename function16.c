#include <stdio.h>
#include <stdlib.h>
// Funkce na prevod na hexadekalni soustavu
int function16(int cislo)
{
    // Zakladni promenne
    int i;
    char temp[32];
    int remain;
    // Cyklus na vypocet ASCII hodnot znaku 0-F
    for(i = 0; cislo > 0; i++)
    {
        remain = cislo % 16;
        if(remain < 10)
        {
            temp[i] = remain + 48;
        }
        else
        {
            temp[i] = remain + 55;
        }
        cislo = cislo /16;
    }
    // Cyklus na vypis pole temp
    for(i=i-1;i>=0;i--)
    {
    printf("%c",temp[i]);
    }
    printf("\n");
}
