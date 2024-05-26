#include <stdio.h>
#include <stdlib.h>

typedef enum {
    DOM,
    LUN,
    MAR,
    MIE,
    JUE,
    VIE,
    SAB
} diasSemana;
void imprimir1(diasSemana d){
    const char *texto[] = { //Vector de punteros a cadenas de caracteres
        "Domingo",
        "Lunes",
        "Martes",
        "Miercoles",
        "Jueves",
        "Viernes",
        "Sabado"
    };
    printf("%s \n",texto[d]);
}
void imprimir2(diasSemana d){
    switch(d){
    case DOM:
        printf("Domingo\n");
        break;
    case LUN:
        printf("Lunes\n");
        break;
    case MAR:
        printf("Martes\n");
        break;
    case MIE:
        printf("Miercoles\n");
        break;
    case JUE:
        printf("Jueves\n");
        break;
    case VIE:
        printf("Viernes\n");
        break;
    case SAB:
        printf("Sabado\n");
        break;
    default:
        printf("Dia de la semana no valido\n");
    }
}
int main()
{
    diasSemana a = 4;
    imprimir1(a);
    imprimir2(a);
    printf("Mostrar %d\n",a);
    return 0;
}
