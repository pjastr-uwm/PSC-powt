#include <stdio.h>
#include <stdlib.h>

void foo(int n, int *tab)
{
    int temp= *tab;
    for(int i=1;i<n;i++)
    {
        *(tab +i-1) = *(tab+i);
    }
    *(tab+n-1) = temp;
}

void wyswietl(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d, ", i, *(tab+i));
    }
    printf("--\n");
}

int main()
{
    int *tab = malloc(4 * sizeof(int));
    *tab =3;
    *(tab+1) = -4;
    *(tab+2) = 8;
    *(tab+3) = -11;
    wyswietl(4, tab);
    foo(4, tab);
    wyswietl(4, tab);
    return 0;
}
