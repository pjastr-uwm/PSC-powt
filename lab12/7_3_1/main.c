#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};

struct element * utworz()
{
    return NULL;
};

int main()
{
    struct element * wynik = utworz();
    printf("%p\n", wynik);
    return 0;
}
