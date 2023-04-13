#include <stdio.h>
#include <stdlib.h>

double * plytka_kopia(int n, double * wsk)
{
    return wsk;
}

double * gleboka_kopia(int n, double * wsk)
{
    double * temp = (double*)malloc(n * sizeof(double));
    if (temp == NULL)
        return NULL;
    for(int i=0;i<n;i++)
    {
        temp[i] = wsk[i];
    }
    return temp;
}

void wyswietl(int n, double tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d] = %lf\n", i , tab[i]);
    }
    printf("---\n");
}

int main()
{
    double tab[] = {3.4, -2.4, 9.1, -11.4};
    wyswietl(4, tab);
    double * nowa = plytka_kopia(4, tab);
    wyswietl(4, nowa);
    nowa[2] = 1000.1;
    wyswietl(4, tab);
    wyswietl(4, nowa);
    printf("gleboka kopia\n");
    double * nowa2 = gleboka_kopia(4, tab);
    wyswietl(4, tab);
    wyswietl(4, nowa2);
    nowa2[2] = -3.33;
    wyswietl(4, tab);
    wyswietl(4, nowa2);
    return 0;
}
