#include <stdio.h>
#include <stdlib.h>

void reserva(double **, int);
void inicializar(double *, int);
double promedio (double *, int);
void liberarMemoria (double **);
int main()
{
    int n; double *ptr;
    printf("Ingrese un numero entero: ");
    scanf("%d",&n);
    reserva(&ptr,n);
    inicializar(ptr,n);
    printf("El promedio de los valores del vector: %.2f",promedio(ptr,n));
    liberarMemoria(&ptr);
    return 0;
}
void reserva (double **ptr, int n){
    *ptr = (double *)malloc(n*sizeof(double));
}
void inicializar(double *ptr, int n){
    for (int i=0; i<n; i++){
        *(ptr+i) = i+1;
    }
}
double promedio (double *ptr, int n){
    double tot = 0;
    for (int i=0; i<n; i++){
        tot += *(ptr+i);
    }
    return tot/n;
}
void liberarMemoria (double **ptr){
    free(*ptr);
}
