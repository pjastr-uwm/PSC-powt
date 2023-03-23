#include <stdio.h>
#include <stdlib.h>

int suma(int const* x, int const* y)
{
    return *x+*y;
}

int main()
{
    int x= 5, y =8;
    printf("%d\n", suma(&x,&y));
    return 0;
}
