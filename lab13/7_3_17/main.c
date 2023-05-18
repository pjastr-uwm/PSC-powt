#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void wyswietlListeZGlowa(struct element * lista)
{
    if (lista->next == NULL)
    {
        printf("Lista jest pusta\n----\n");
        return;
    }
    struct element * wsk= lista->next;
    while(wsk !=NULL)
    {
        printf("%d\n", wsk->i);
        wsk= wsk->next;
    }
    printf("----\n");
}

void usun(struct element * lista, int a)
{
    struct element * wsk = lista;
    while((wsk->next!=NULL) && (wsk->next->i != a))
    {
        wsk=wsk->next;
    }
    if(wsk->next!=NULL)
    {
        struct element * wsk2=wsk->next;
        wsk->next = wsk->next->next;
        free(wsk2);
    }
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = -8;
    lista->next->next=malloc(sizeof(struct element));
    lista->next->next->i = 33;
    lista->next->next->next=malloc(sizeof(struct element));
    lista->next->next->next->i = 223;
    lista->next->next->next->next = NULL;
    wyswietlListeZGlowa(lista);
    usun(lista,2);
    wyswietlListeZGlowa(lista);
    return 0;
}
