#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int dato;
    struct nodo *sig;
};
typedef struct nodo Tnodo;
Tnodo* agregarAtras(Tnodo*, int);
void imprimirLista(Tnodo*);
void borrarNodo(Tnodo **, int);
void liberarMemoria(Tnodo **);
int main()
{
    Tnodo *l = NULL;
    int n, aux;
    printf("Ingrese un numero (0 para fin) ");
    scanf("%d",&n);
    while (n != 0){
        l = agregarAtras(l,n);
        printf("Ingrese un numero (0 para fin) ");
        scanf("%d",&n);
    }
    imprimirLista(l);
    printf("Ingrese un numero para eliminar ");
    scanf("%d",&n);
    Tnodo *act = l;
    while (act != NULL){
        if ((act->dato%n) == 0){
            aux = act->dato; //copio el dato a eliminar
            act = act->sig; //Me muevo al siguiente nodo
            borrarNodo(&l,aux);
            printf("Se borro el dato\n");
        } else {
            act = act->sig;
        }
    }
    imprimirLista(l);
    liberarMemoria(&l);
    return 0;
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
void imprimirLista(Tnodo *l){
    while (l != NULL){
        printf("%d -> ",l->dato);
        l = l->sig;
    }
    printf("NULL\n");
}
void borrarNodo(Tnodo **l, int n){
    Tnodo *act, *ant, *aux;
    act = *l; ant = NULL;
    if (act != NULL && act ->dato == n){ //Si el nodo a eliminar es el primero
        *l = act->sig;
        free(act);
        return;
    }
    while (act != NULL && act->dato != n){ //Si esta en el medio
        ant = act;
        act = act->sig;
    }
    if (act == NULL){ //Si el dato no esta en lista
        printf("El numero no esta en la lista\n");
        return;
    } else if (act->dato == n){
        aux = act;
        act = act->sig;
        free(aux);
        ant->sig = act;
    }
}
void liberarMemoria(Tnodo **l){
    Tnodo * temp;
    while (*l != NULL){
        temp = *l;
        *l = (*l)->sig;
        free(temp);
    }
}
