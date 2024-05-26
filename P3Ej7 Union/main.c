#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[20];
    char apellido[20];
    char legajo[8];
    int tipo;
    union {
        long int DNI;
        char pasaporte[15];
    } identificacion ;
} alumno;
void leerAlumno (alumno *);
void imprimir(alumno);
int main()
{
    alumno alu;
    leerAlumno(&alu);
    imprimir(alu);
    return 0;
}
void imprimir(alumno alu){
    printf("Nombre: %s\n",alu.nombre);
    printf("Apellido: %s\n",alu.apellido);
    printf("Legajo: %s\n",alu.legajo);
    if (alu.tipo  != 0) {
        printf("DNI %ld\n",alu.identificacion.DNI);
    } else {
        printf("Pasaporte %s\n",alu.identificacion.pasaporte);
    }
}
void leerAlumno (alumno *alu){
    printf("Nombre ");
    scanf("%s",alu->nombre);
    printf("Apellido ");
    scanf("%s",alu->apellido);
    printf("legajo ");
    scanf("%s",alu->legajo);
    printf("¿Pasaporte(0) o DNI(1)? ");
    scanf("%d",&alu->tipo);
    if (alu->tipo == 0){
        printf("Pasaporte ");
        scanf("%s",alu->identificacion.pasaporte);
    } else if (alu->tipo == 1){
        printf("DNI ");
        scanf("%ld",&alu->identificacion.DNI);
    } else {
        printf("La opcion no es valida\n");
    }
}
