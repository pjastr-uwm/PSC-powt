#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a,b,c;
};

void foo(struct trojkat troj1, struct trojkat * troj2)
{
    *troj2 = troj1;
}

int main()
{
    struct trojkat t1 = {3,4,5};
    struct trojkat t2 = {5,12,13};
    printf("%f %f %f\n", t1.a, t1.b, t1.c);
    printf("%f %f %f\n", t2.a, t2.b, t2.c);
    foo(t1, &t2);
    printf("%p\n", &t1.a);
    printf("%p\n", &t2.a);
    printf("%f %f %f\n", t1.a, t1.b, t1.c);
    printf("%f %f %f\n", t2.a, t2.b, t2.c);
    return 0;
}
