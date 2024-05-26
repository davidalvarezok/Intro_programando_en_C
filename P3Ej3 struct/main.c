#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2

typedef struct direccion {
    char calle[50];
    char ciudad[30];
    int codPostal;
    char pais[40];
} direccion_t;

typedef struct alu {
    char nombre[50];
    char apellido[50];
    char legajo[8];
    float prom;
    direccion_t domicilio;
} alumno;
void LeerDireccion (direccion_t *);
void LeerAlumno(alumno *);
int main()
{
    float maximo = -1; char ptrnombre[50], ptrapellido[50];
    alumno a[MAX];
    for (int i = 0; i < MAX; i++){
        LeerAlumno(&a[i]);
        if(a[i].prom > maximo) {
            maximo = a[i].prom;
            strcpy(ptrnombre,a[i].nombre);
            strcpy(ptrapellido,a[i].apellido);
        }
    }
    printf("El alumno con mayor promedio %s %s", ptrnombre, ptrapellido);
    return 0;
}
void LeerDireccion (direccion_t *d)
{
    printf("Calle: ");
    scanf("%s",d->calle);
    printf("Ciudad: ");
    scanf("%s",d->ciudad);
    printf("Codigo Postal: ");
    scanf("%d",&d->codPostal);
    printf("Pais: ");
    scanf("%s",d->pais);
}
void LeerAlumno(alumno *r)
{
    printf("Nombre: ");
    scanf("%s",r->nombre);
    printf("Apellido: ");
    scanf("%s",r->apellido);
    printf("Legajo: ");
    scanf("%s",r->legajo);
    printf("Promedio: ");
    scanf("%f",&r->prom);
    printf("Domicilio\n");
    LeerDireccion(&r->domicilio);
}
