#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "diccionario.h"

lista crear_diccionario(){
    lista l = NULL;
    return l;
};

void agregar_palabra(char * palabra, lista * l){
    lista nue; //Un puntero a la estructura
    nue = (lista)malloc(sizeof(struct nodo));
    strcpy(nue->palabra,palabra);
    nue->sig = *l; //Lo que apunta **l
    *l = nue;
}

int existe_palabra(char * palabra, lista l){
    int existe = 0;
    while (l != NULL && strcmp(l->palabra,palabra) != 0){
        l = l->sig;
    }
    if (l != NULL){
        existe++;
    }
    return existe;
}
int eliminar_palabra(char * palabra, lista * l){
    int True = 0;
    lista ant, act;
    act = *l; //actual = Lo que apunta l
    if (act != NULL && strcmp(act->palabra,palabra) == 0){
        *l = (*l)->sig;
        free(act);
        True++;
    }
    while (act != NULL && strcmp(act->palabra,palabra) != 0){
        ant = act;
        act = act->sig;
    }
    if (act != NULL){
        ant->sig = act->sig;
        free(act);
        True++;
    }
    return True;
}

void cargar_diccionario (lista * l, FILE * arch){
    char palabra [N];
    while(fscanf(arch,"%s ",palabra) == 1){
        printf("La palabra leida es %s\n",palabra);
        agregar_palabra(palabra,l);
    }
}

void guardar_en_archivo (lista l, FILE * arch){
    char palabra[N];
    while (l != NULL){
        strcpy(palabra,l->palabra);
        fprintf(arch,"%s ",palabra);
        l = l->sig;
    }
}
