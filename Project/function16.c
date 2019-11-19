int function16(int cislo)
{
    int i;
    char temp[32];
    int remain;
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
    for(i=i-1;i>=0;i--)
    {
    printf("%c",temp[i]);
    }
}
