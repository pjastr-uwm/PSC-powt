#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i] =0;
    }
}

void wyswietl(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    printf("--\n");
}

int main()
{
    int tab[] = {3,-4,5,2,-23};
    wyswietl(5, tab);
    foo(5, tab);
    wyswietl(5, tab);
    return 0;
}
