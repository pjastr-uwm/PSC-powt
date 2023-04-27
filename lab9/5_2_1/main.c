#include <stdio.h>
#include <stdlib.h>

void wyczysc(char * napis)
{
    napis[0] = '\0';
    // napis[0] =0;
}

void wyczysc2(wchar_t * napis)
{
    napis[0] =0;
}

int main()
{
    char napis[] = "Olsztyn";
    printf("%s\n", napis);
    wyczysc(napis);
    printf("%s.\n", napis);
    wchar_t napis2[] = L"Olsztyn";
    wprintf(L"%s\n", napis2);
    wyczysc(napis2);
    wprintf(L"%s.\n", napis2);
    return 0;
}
