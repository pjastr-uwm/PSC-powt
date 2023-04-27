#include <stdio.h>
#include <stdlib.h>

int dlugosc(char * napis)
{
    int i;
    for(i=0;napis[i]!=0;i++)
    {

    }
    return i;
}

int dlugosc2(char * napis)
{
    int i;
    while(napis[i] != 0)
    {
        i++;
    }
    return i;
}

int dlugosc3(char * napis)
{
    int i;
    while(napis[i])
    {
        i++;
    }
    return i;
}

int dlugosc4(char*napis)
{
    if (napis[0] == 0)
        return 0;
    return 1+dlugosc4(++napis);
}

int dlugosc5(char*napis)
{
    if (!*napis)
        return 0;
    return 1+dlugosc5(++napis);
}

int main()
{
    char napis[] = "Olsztyn";
    printf("%d\n", dlugosc(napis));
    printf("%d\n", dlugosc2(napis));
    printf("%d\n", dlugosc3(napis));
    printf("%d\n", dlugosc4(napis));
    printf("%d\n", dlugosc5(napis));
    return 0;
}
