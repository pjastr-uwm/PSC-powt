#include <stdio.h>
#include <stdlib.h>

struct punktn
{
    int wymiar;
    int * wspolrzedne;
};

void przepisz(struct punktn tab1[], struct punktn tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i].wymiar = tab1[i].wymiar;
        tab2[i].wspolrzedne=malloc(tab2[i].wymiar *sizeof(int));
        for(int j=0;j<tab2[i].wymiar;j++)
        {
            tab2[i].wspolrzedne[j] = tab1[i].wspolrzedne[j];
        }
    }
}

void wyswietl(struct punktn tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]: ",i);
        for(int j=0;j<tab[i].wymiar;j++)
        {
            printf("%d ", tab[i].wspolrzedne[j]);
        }
        printf("\n");
    }
    printf("---\n");
}


int main()
{
    struct punktn p1;
    p1.wymiar=2;
    p1.wspolrzedne = malloc(p1.wymiar * sizeof(int));
    p1.wspolrzedne[0] = 8;
    p1.wspolrzedne[1] = -3;
    struct punktn p2;
    p2.wymiar=3;
    p2.wspolrzedne = (int []) {2,3,4};
    struct punktn p3;
    p3.wymiar=6;
    p3.wspolrzedne = (int []) {6,-3,4,-9,0,3};
    struct punktn tab1[] = {p1,p2,p3};
    wyswietl(tab1,3);
    struct punktn tab2[] =
    {
        {2, (int []) {9,0}},
        {4, (int []) {-2,-3,-5,-5}},
        {1, (int []) {3}}
    };
    wyswietl(tab2,3);
    przepisz(tab1,tab2,3);
    wyswietl(tab1,3);
    wyswietl(tab2,3);
    printf("%p\n", &tab1[1]);
    printf("%p\n", &tab2[1]);
    printf("%p\n", tab1[1].wspolrzedne);
    printf("%p\n", tab2[1].wspolrzedne);
    return 0;
}
