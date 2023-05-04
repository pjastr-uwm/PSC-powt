#include <stdio.h>
#include <stdlib.h>

void foo(int ** tab, int n, int m)
{
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab[i][j] = 0;
            // *(*(tab+i)+j) = 0;
        }
    }
}

void wyswietl(int n, int m, int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d][%d]=%d ", i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

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
    int ** tab = alokuj(2,5);
    foo(tab, 2,5);
    wyswietl(2,5,tab);
    zwolnij(tab, 2,5);
    return 0;
}
