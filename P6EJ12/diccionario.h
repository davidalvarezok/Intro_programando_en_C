#ifndef DICCIONARIO_H_INCLUDED
#define DICCIONARIO_H_INCLUDED
#define N 30

struct nodo {
    char palabra[N];
    struct nodo * sig;
};
typedef struct nodo * lista;

lista crear_diccionario();                        // -Crea una lista
void agregar_palabra(char *p, lista * l);       // -Agrega una palabra en la lista
int existe_palabra(char *p, lista l);             // -Recibe una palabra y veo si esta en la lista
int eliminar_palabra(char *p, lista * l);         // -Retorna un 1 si elimino y 0 si no
void cargar_diccionario(lista * l, FILE * arch);      // -Carga el diccionario desde un archivo
void guardar_en_archivo(lista l, FILE * arch);    // -Guarda el diccionario en un archivo
void destruir_diccionario(lista * l);

#endif // DICCIONARIO_H_INCLUDED
