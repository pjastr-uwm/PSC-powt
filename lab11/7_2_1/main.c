#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a,b,c;
};

float obwod(struct trojkat arg)
{
    return arg.a+arg.b+arg.c;
}

int main()
{
    struct trojkat tr = {4.2, 4.3, 5.2};
    printf("%f\n", obwod(tr));
    return 0;
}
