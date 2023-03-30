#include <stdio.h>
#include <stdlib.h>

double foo(double (*wsk)(int), int x)
{
    return wsk(x);
}

double pom(int a)
{
    return 5.0/a;
}

int main()
{
    printf("%lf", foo(pom, 3));
    return 0;
}
