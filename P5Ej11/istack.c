#include <stdio.h>
#include <stdlib.h>
#include "istack.h"

Stack s_create(){ //– Retorna una nueva pila. Se debe invocar antes de manipular cualquiera de ellas.
    Stack s = NULL;
    return s;
}
int s_push(Stack* s, int n){ //– Apila n en s. Retorna el elemento apilado.
    Stack nue = (Stack)malloc(sizeof(struct nodo)); //Devuelve puntero a nodo estructura
    nue->num = n;
    nue->sig = (*s);
    (*s) = nue;     // * ptr = * nodo
    return n;
}
int s_pop (Stack* s){ //– Desapila un elemento de s.
    int n = (*s)->num;
    Stack aux = (*s);  // * nodo = * nodo
    (*s) = (*s)->sig;  // Me muevo al siguiente
    free(aux);
    return n;
}
int s_top (Stack s){ //– Retorna el próximo elemento que será desapilado.
    int n = s->num;
    return n;
}
int s_empty(Stack s){ //– Retorna 1 si s está vacía, 0 en caso contrario.
    if (s->sig == NULL)
        return 1;
    else
        return 0;
}
int s_length(Stack s){ //– Retorna la cantidad de elementos apilados en s.
    int cant = 0;
    while (s->sig != NULL){
        cant++;
    }
    return cant;
}
