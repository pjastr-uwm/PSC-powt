#include <stdio.h>
#include <stdlib.h>

int foo(int (*wsk1)(int), int (*wsk2)(int), unsigned int n)
{
    for(int i=0;i<=n;i++)
    {
        if (wsk1(i) != wsk2(i))
            return 0;
    }
    return 1;
}

int pom1(int x)
{
    return x+2;
}

int pom2(int x)
{
    return (x+2)%10;
}

int main()
{
    printf("%d\n", foo(pom1, pom2, 3));
    printf("%d\n", foo(pom1, pom2, 20));
    return 0;
}
