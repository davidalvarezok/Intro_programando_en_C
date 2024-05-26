#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int dato;
    struct nodo* sig;
};
typedef struct nodo Tnodo;
Tnodo* agregarAdelante(Tnodo*, int);
Tnodo* agregarAtras(Tnodo*, int);
void cantElementos(Tnodo*);
void imprimirLista(Tnodo*);
void liberarMemoria(Tnodo**);
int main()
{
    int n; Tnodo *lista1 = NULL, *lista2 = NULL;
    printf("Ingrese un numero (0 para fin) ");
    scanf("%d",&n);
    while (n != 0){
        lista1 = agregarAtras(lista1,n);
        printf("Ingrese un numero (0 para fin) ");
        scanf("%d",&n);
    }
    Tnodo *act = lista1;
    while (act != NULL){
        lista2 = agregarAdelante(lista2,act->dato);
        act = act->sig;
    }
    printf("Lista 1\n");
    cantElementos(lista1);
    imprimirLista(lista1);
    printf("\nLista 2\n");
    cantElementos(lista2);
    imprimirLista(lista2);
    liberarMemoria(&lista1);
    liberarMemoria(&lista2);
    return 0;
}

Tnodo* agregarAdelante(Tnodo* l, int n){
    Tnodo *nue = (Tnodo *)malloc(sizeof(Tnodo));
    nue->dato = n;
    nue->sig = l;
    return nue;
}

Tnodo* agregarAtras(Tnodo* l, int n){
    Tnodo *nue = (Tnodo *)malloc(sizeof(Tnodo));
    nue->dato = n;
    nue->sig = NULL;
    if (l == NULL){
        l = nue;
    } else {
        Tnodo *act = l;
        while(act->sig != NULL){
            act = act->sig;
        }
        act->sig = nue;
    }
    return l;
}

void cantElementos(Tnodo *l){
    int n = 0;
    while (l != NULL){
        n++;
        l = l->sig;
    }
    printf("La cantidad de elementos de la lista %d\n",n);
}

void imprimirLista(Tnodo *l){
    while (l != NULL){
        printf("%d -> ",l->dato);
        l = l->sig;
    }
    printf("NULL\n");
}

void liberarMemoria(Tnodo **l){
    Tnodo * temp;
    while (*l != NULL){
        temp = *l;
        *l = (*l)->sig;
        free(temp);
    }
}
