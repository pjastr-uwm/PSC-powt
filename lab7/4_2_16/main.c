#include <stdio.h>
#include <stdlib.h>

double * rezerwuj(int n)
{
    return (double*) malloc(n*sizeof(double));
}

void zwolnij(double * wsk)
{
    free(wsk);
}

int main()
{
    double * a = rezerwuj(5);
    free(a);
    // tak nie robimy!
    //double tab[] = {3.4, -2.3, 5.4};
    //free(tab);
    return 0;
}
