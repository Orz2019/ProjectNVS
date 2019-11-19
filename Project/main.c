#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Zakladni promenne
    int cislo = 0;
    int soustava;
    //START a goto umoznuji uzivateli zadat nove cislo bez nutnosti vypnuti a zapnuti programu
    START:printf("Prosim zadejte cislo v desitkove soustave, ktere chcete prevest (Max.1000).\n");
    scanf("%d",&cislo);
    //Pokud je zadane cislo vetsi nez 1000, program vypise chybnou hlasku a vrati uzivatele na zacatek
        if(cislo >1000)
    {
        printf("Vami zadane cislo je moc vysoke.\n");
        goto START;
    }
    // Uzivatel zvoli cilovou soustavu
    printf("Prosim zadejte typ cilove soustavy:\n [2] = Binarni soustava\n [8] = Oktalni soustava\n [16] = Hexadekalni soustava\n");
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
        // Pokud uzivatel zada spatne cislo, vypise se chybova hlaska a program se ukonci
        default:
            printf("Omlouvame se, ale na tuto soustavu neumime cislo prevest.\n");
        break;
        }
    int opak = 0;
    printf("Chcete prevest jine cislo? Pokud ano, stisknete 1.\n");
    scanf("%d", &opak);
    if(opak==1)
    {
        goto START;
    }
    return 0;
}
