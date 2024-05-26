#include <stdio.h>
#include <stdlib.h>
#include "diccionario.h"
#define M 5
int main()
{
    lista l = crear_diccionario();
    FILE * arch;
    arch = fopen("diccionario.txt","r");
    if (!arch){
        printf("Error al abrir el archivo\n");
        return 1;
    }
    cargar_diccionario(&l,arch);
//    char * palabra[M] = {"Pinguino","jirafa","Elefante","caiman","vicunia"};
//    for (int i=0; i<M; i++){
//        agregar_palabra(palabra[i],&l);
//        //printf("La Palabra se cargo %s\n",l->palabra);
//    }
//    if (eliminar_palabra(palabra[0],&l)){
//        printf("La palabra Pinguino fue eliminada\n");
//    } else {
//        printf("La palabra Pinguino no existe\n");
//    }
    while (l != NULL){
        printf("Palabra %s\n",l->palabra);
        l = l->sig;
    }
    fclose(arch);
    return 0;
}
