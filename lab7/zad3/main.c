#include <stdio.h>
#include <stdlib.h>

void foo(int * x, int *y)
{
    if (*x< *y)
    {
        *x = *y;
    }
    else if (*x > *y)
    {
        *y = *x;
    }
}

int main()
{
    int x=20, y=9;
    printf("x=%d, y=%d\n", x,y);
    foo(&x, &y);
    printf("x=%d, y=%d\n", x,y);
    return 0;
}
