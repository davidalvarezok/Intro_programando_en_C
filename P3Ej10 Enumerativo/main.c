#include <stdio.h>
#include <stdlib.h>

typedef enum {
    Bluetooth = 1 << 0,   //0000 0001
    Wifi = 1 << 1,        //0000 0010
    GPS = 1 << 2,         //0000 0100
    Datos = 1 << 3,
    CamaraF = 1 << 4,
    CamaraT = 1 << 5,
    Linterna = 1 << 6,
    Vibrar = 1 << 7       //1000 0000
} modulo;
const modulo TODOS = ~0;
const modulo NINGUNO = 0;

int main()
{
    modulo estado = 0;
    estado |= Wifi;    //activo wifi
    estado &= ~GPS;   //desactivo wifi
    estado ^= Bluetooth;
    printf("El estado actual de los modulos es %d\n",estado);
    return 0;
}
