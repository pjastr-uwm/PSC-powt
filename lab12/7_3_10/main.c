#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};

struct element * utworz()
{
    struct element * lista = malloc(sizeof(struct element));
    return lista;
};

int main()
{
    struct element * wynik = utworz();
    printf("%p\n", wynik);
    return 0;
}
