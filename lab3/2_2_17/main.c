#include <stdio.h>
#include <stdlib.h>



void foo()
{
    liczba++;
    printf("Wywolanie nr %d\n", liczba);
}

int main()
{
    foo();
    foo();
    foo();
    return 0;
}
