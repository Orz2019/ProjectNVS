#include <stdio.h>
#include <stdlib.h>

int function2(int cislo)
{
    int i;
    int temp[32];
    for(i = 0; cislo > 0; i++)
    {
        temp[i] = cislo%2;
        cislo = cislo/2;
    }
    for(i=i-1;i>=0;i--)
    {
    printf("%d",temp[i]);
    }
}
