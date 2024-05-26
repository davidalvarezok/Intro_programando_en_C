#include <stdio.h>
#include <stdlib.h>

typedef union {
    struct {
        unsigned char dia;
        unsigned char mes;
        unsigned short int anio;
    } fecha;
    unsigned long int valor;
} Fecha_Hack;

int main()
{
    Fecha_Hack f1, f2;
    f1.fecha.dia = 20; f1.fecha.mes = 9; f1.fecha.anio = 2023;
    f2.fecha.dia = 20; f2.fecha.mes = 9; f2.fecha.anio = 2023;
    if (f1.valor < f2.valor) {
        printf("fecha 1 menor a fecha 2");
    } else if (f1.valor == f2.valor){
        printf("Las fechas son iguales");
    } else {
        printf("la fecha 2 es menor a la fecha 1");
    }

    return 0;
}
