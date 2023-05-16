#include <stdio.h>
#include <stdlib.h>

union Liczba
{
    int a;
    float b;
};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj()
{
    struct Dane temp;
    printf("Jesli chcesz wpisac liczbe calkowita, wpisz 0; a jesli liczbe wymierna, wpisz 1\n");
    scanf("%d", &temp.tp);
    if (temp.tp == 0)
    {
        printf("Wpisz liczbe calk\n");
        scanf("%d", &temp.zaw.a);
    }
    else if (temp.tp == 1)
    {
        printf("Wpisz liczbe wym.\n");
        scanf("%f", &temp.zaw.b);
    }
    return temp;
};

void wyswietl(struct Dane arg)
{
    if (arg.tp ==0)
    {
        printf("Liczba calk: %d\n", arg.zaw.a);
    }
    else if (arg.tp ==1)
    {
        printf("Liczba wym: %f\n", arg.zaw.b);
    }
}

int main()
{
    struct Dane zmienna = wczytaj();
    wyswietl(zmienna);
    return 0;
}
