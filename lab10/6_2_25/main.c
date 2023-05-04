#include <stdio.h>
#include <stdlib.h>

void foo(int ** tab, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int temp =tab[i][j];
            tab[i][j] = tab[j][i];
            tab[j][i] = temp;
        }
    }
}

void wyswietl(int n, int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("[%d][%d]=%d ", i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab = malloc(3*sizeof(int *));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[0][0] = 4;
    tab[0][1] = -2;
    tab[0][2] = 5;
    tab[1][0] = 7;
    tab[1][1] = 8;
    tab[1][2] = -12;
    tab[2][0] = 3;
    tab[2][1] = 55;
    tab[2][2] = 9;
    wyswietl(3, tab);
    foo(tab,3);
    wyswietl(3, tab);
    return 0;
}
