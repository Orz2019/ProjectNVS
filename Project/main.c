#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cislo = 0;
    int soustava;
    printf("Prosim zadejte cislo v desitkove soustave, ktere chcete prevest.\n");
    scanf("%d",&cislo);
    printf("Prosim zadejte typ soustavy:\n [2] = Binarni soustava\n [8] = Oktalni soustava\n [16] = Hexadekalni soustava\n");
    scanf("%d",&soustava);
    switch(soustava)
        {
        case 2:
            function2(cislo);
        break;

        case 8:
            function8(cislo);
        break;

        case 16:
            function16(cislo);
        break;

        default:
            printf("Omlouvame se, ale na tuto soustavu neumime cislo prevest.");
        break;
        }
    return 0;
}
