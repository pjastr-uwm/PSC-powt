#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[])
{
    int temp = tab[0];
    for(int i=1;i<n;i++)
    {
        if (temp > tab[i])
        {
            temp = tab[i];
        }
    }
    return temp;
}

int main()
{
    int tab[] = {3,-4,10,-22,-33,77};
    printf("%d\n", foo(6, tab));
    return 0;
}
