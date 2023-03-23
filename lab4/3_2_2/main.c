#include <stdio.h>
#include <stdlib.h>

int* foo(int *a, int *b)
{
    if (*a < *b)
        return a;
    return b;
}

int main()
{
    int a =2, b=-3;
    printf("adres a %p\n", &a);
    printf("adres b %p\n", &b);
    printf("%p\n", foo(&a,&b));
    return 0;
}
