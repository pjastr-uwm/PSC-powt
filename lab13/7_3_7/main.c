#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * usun(struct element * lista, int a)
{
    if(lista == NULL)
        return NULL;
    if(lista->i == a)
    {
        struct element * wsk = lista->next;
        free(lista);
        return wsk;
    }
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
    return lista;
}

void wyswietlListeBezGlowy(struct element * lista)
{
    if (lista == NULL)
    {
        printf("Lista jest pusta\n----\n");
        return;
    }
    struct element * wsk= lista;
    while(wsk !=NULL)
    {
        printf("%d\n", wsk->i);
        wsk= wsk->next;
    }
    printf("----\n");
}


int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->i =6;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 7;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 2;
    lista->next->next->next = NULL;
    wyswietlListeBezGlowy(lista);
    lista=usun(lista, 2);
    wyswietlListeBezGlowy(lista);
    return 0;
}
