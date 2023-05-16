#include <stdio.h>
#include <stdlib.h>

enum zwierzak { PIES=8, KOT, CHOMIK};

int main()
{
    enum zwierzak zmienna = KOT;
    printf("%d\n", zmienna);
    if (zmienna == KOT)
    {
        printf("KOT");
    }
    return 0;
}
