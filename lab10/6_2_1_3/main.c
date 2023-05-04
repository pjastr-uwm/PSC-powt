#include <stdio.h>
#include <stdlib.h>

int ** alokuj(int n, int m)
{
    int ** tab = malloc(n* sizeof(int*));
    for(int i=0;i<n;i++)
    {
        tab[i] = malloc(m*sizeof(int));
    }
    return tab;
}

void zwolnij(int ** tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    int ** wynik = alokuj(2,3);
    printf("%p\n", wynik);
    zwolnij(wynik,2,3);
    return 0;
}
