#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int seg: 5; //0..32
    unsigned int min: 6; //0..64
    unsigned int hora: 5;
} horario;

void leerHora(horario *h){ //Recibe la direccion de la estructura
    unsigned int valor;    //debemos usar un aux para leer
    printf("Ingrese hora ");
    scanf("%u",&valor);
    h->hora = valor;
    printf("Ingrese minutos ");
    scanf("%u",&valor);
    h->min = valor;
    printf("Ingrese segundos ");
    scanf("%u",&valor);
    h->seg = valor;
}
int main()
{
    horario h;
    leerHora(&h);
    printf("Hora: %u:%u:%u \n",h.hora,h.min,h.seg);
    return 0;
}
