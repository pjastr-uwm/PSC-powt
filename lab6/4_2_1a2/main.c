#include <stdio.h>
#include <stdlib.h>

void foo(int n, int* tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i) =0;
    }
}

void wyswietl(int n, int * tab)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, *(tab+i) );
    }
    printf("--\n");
}

int main()
{
    int *tab = (int*) malloc(5* sizeof(int));
    *tab = 3;
    *(tab+1) = -4;
    *(tab+2) = 5;
    *(tab+3) = 2;
    *(tab+4) = -23;
    wyswietl(5, tab);
    foo(5, tab);
    wyswietl(5, tab);
    return 0;
}
