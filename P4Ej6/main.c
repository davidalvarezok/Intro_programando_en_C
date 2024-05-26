#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int dato;
    struct nodo *sig;
};
typedef struct nodo lista;

void agregarAdelante(lista **, int);
void agregarAtras(lista **, int);
void cantElementos(lista *);
void imprimirLista(lista *);
void eliminar(lista **);

int main()
{
    lista *l;
    l = NULL;
    for (int i = 0; i < 5; i++){
        agregarAdelante(&l,i);
        //agregarAtras(&l,i);
    }
    cantElementos(l);
    imprimirLista(l);
    eliminar(&l);
    cantElementos(l);
    return 0;
}
void agregarAdelante(lista **l, int n){
    lista *nue = (lista *)malloc(sizeof(lista));
    nue->dato = n;
    nue->sig = *l;
    *l = nue;
}

void agregarAtras(lista **l, int n){
    lista *nue = (lista *)malloc(sizeof(lista));
    nue->dato = n;
    nue->sig = NULL;
    if (*l == NULL) {
        *l = nue;
    } else {
        lista *pos = *l;
        while (pos->sig != NULL){
            pos = pos->sig;
        }
        pos->sig = nue;
    }
}

void eliminar (lista **l){
    lista *temp;
    while (*l != NULL){
        temp = *l;
        *l = (*l)->sig;
        free(temp);
    }
}

void cantElementos(lista *l){
    int n = 0; lista *act = l;
    while (act != NULL) {
        n++;
        act = act->sig;
    }
    printf("La cantidad de elementos de la lista es %d \n",n);
}

void imprimirLista (lista *l){
    lista *act = l;
    while (act != NULL){
        printf("%d -> ",act->dato);
        act = act->sig;
    }
    printf("NULL\n");
}
