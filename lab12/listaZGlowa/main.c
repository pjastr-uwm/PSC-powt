#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;
    struct element * next;
};

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 2;
    lista->next->next=malloc(sizeof(struct element));
    lista->next->next->i = -5;
    lista->next->next->next=malloc(sizeof(struct element));
    lista->next->next->next->i = 8;
    lista->next->next->next->next = NULL;
    struct element * wsk = lista->next;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    return 0;
}
