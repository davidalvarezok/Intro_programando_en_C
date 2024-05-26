#include <stdio.h>
#include "istack.h"

stack * s_create(); //� Retorna una nueva pila. Se debe invocar antes de manipular cualquiera de ellas.
int s_push(stack* s, int n); //� Apila n en s. Retorna el elemento apilado.
int s_pop (stack* s); //� Desapila un elemento de s.
int s_top (stack s); //� Retorna el pr�ximo elemento que ser� desapilado.
int s_empty(stack s); //� Retorna 1 si s est� vac�a, 0 en caso contrario.
int s_length(stack s); //� Retorna la cantidad de elementos apilados en s.
