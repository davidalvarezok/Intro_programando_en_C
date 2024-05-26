#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 12

typedef struct carta {
    char palo[10];
    int numero;
} carta_t;

void cargarMazo(carta_t *);
void cargarNumeros(carta_t *, char *);
void barajar (carta_t *);
void sacaryDevolver(carta_t *);
int main()
{
    carta_t mazo[50];
    cargarMazo(mazo);
    barajar(mazo);
    sacaryDevolver(mazo);
    for (int i = 0; i < 50; i++)
        printf("carta %d palo %s numero %d \n",i + 1, mazo[i].palo, mazo[i].numero);
    printf("Hello world!\n");
    return 0;
}
void imprimirCarta(carta_t c)
{
    printf("Palo %s numero %d", c.palo, c.numero);
}
void sacaryDevolver(carta_t *m)
{
    int n1, n2, aux;
    char string[10];
    carta_t *ini;
    srand(time(NULL));
    n1 = rand()%50;
    m = m + n1;
    printf("Tome la carta %s con numero %d",m->palo,m->numero);
    ini = m;
    strcpy(string,m->palo);
    aux = m->numero;
    m = m - n1;
    n2 = rand()%50;
    m = m + n2;
    ini->numero = m->numero;
    strcpy(ini->palo,m->palo);
    strcpy(m->palo,string);
    m->numero = aux;
}
void barajar (carta_t *m)
{
    carta_t *ini;
    int n1, n2, r, aux;
    char string[10];
    srand(time(NULL));
    r = rand() % 50 + 10;
    printf("El numero para el for %d\n",r);
    for (int i = 0; i < r; i++) {
        n1 = rand() % 50;
        ini = m + n1;
        strcpy(string,ini->palo);
        aux = ini->numero;
        n2 = rand() % 50;
        m = m + n2;
        ini->numero = m->numero;
        strcpy(ini->palo,m->palo);
        strcpy(m->palo,string);
        m->numero = aux;
        printf("reemplazo %d por %d\n",n1,n2);
        printf("nuevo valor de n1 %s y %d\n",ini->palo,ini->numero);
        printf("nuevo valor de n2 %s y %d\n",m->palo,m->numero);
        m = m - n2;
    }
}
void cargarMazo(carta_t *m){
    for (int i = 0; i < 5; i++) {
        switch(i){
            case 0: {
                char c[] = "oro";
                cargarNumeros(m,c);
                break; }
            case 1: {
                char c[] = "copa";
                cargarNumeros(m+12,c);
                break; }
            case 2: {
                char c[] = "espada";
                cargarNumeros(m+24,c);
                break; }
            case 3: {
                char c[] = "bastos";
                cargarNumeros(m+36,c);
                break; }
            case 4: {
                m = m+48;
                char c[] = "comodin";
                strcpy(m->palo,c);
                m->numero = 0; m++;
                strcpy(m->palo,c);
                m->numero = 0;
                break; }
        }
    }
}
void cargarNumeros(carta_t *m, char *c) {
    for (int i=0; i<MAX; i++) {
        strcpy(m->palo,c);
        m->numero = i+1;
        m++;
    }
}
