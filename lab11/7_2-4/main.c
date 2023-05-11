#include <stdio.h>
#include <stdlib.h>

struct punkt
{
    int x,y,z;
};

void przepisz(struct punkt tab1[], struct punkt tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i] = tab1[i];
    }
}

void wyswietl(struct punkt tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]: %d %d %d\n", i, tab[i].x, tab[i].y, tab[i].z);
    }
    printf("---\n");
}

int main()
{
    struct punkt p1 = {2,5,6};
    struct punkt p2 = {4,7,-6};
    struct punkt p3 = {2,5,-4};
    struct punkt p4 = {-3,31,-8};
    struct punkt tab[] = {p1,p2,p3,p4};
    struct punkt tab2[]=
    {
       {3,-4,3},{7,9,0},{23,4,4},{9,-3,4}
    };
    wyswietl(tab,4);
    wyswietl(tab2,4);
    przepisz(tab,tab2,4);
    wyswietl(tab,4);
    wyswietl(tab2,4);
    printf("%p\n", &tab[0]);
    printf("%p\n", &tab2[0]);
    printf("%p\n", &tab[0].x);
    printf("%p\n", &tab2[0].x);
    return 0;
}
