#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m)
{
    if (m==0)
        return n;
    if (n<m)
        return foo(m,n);
    return n-m+foo(n-1,m)+foo(n,m-1);
}

int foo2(int n, int m)
{
    if (m==0)
        return n;
    if (n>=m)
        return n-m+foo(n-1,m)+foo(n,m-1);
    return foo(m,n);
}

int main()
{
    printf("%d\n", foo(3,4));
    printf("%d\n", foo2(3,4));
    return 0;
}
