#include <stdio.h>
#include <stdlib.h>

void foo(int n, int m, int tab[][m])
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

void wyswietl(int n, int m, int tab[][m])
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


int main()
{
    int tab[2][5];
    foo(2,5, tab);
    wyswietl(2,5,tab);
    return 0;
}
