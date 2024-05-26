#include <stdio.h>
#include <stdlib.h>

int * reservaMemoria(int,int);
void cargarMatriz(int *,int,int);
void imprimir (int *,int,int);
int main()
{
    int f, c, *m;
    printf("Ingrese numero de filas: "); scanf("%d",&f);
    printf("Ingrese numero de columnas: "); scanf("%d",&c);
    m = reservaMemoria(f,c);
    cargarMatriz(m,f,c);
    imprimir(m,f,c);
    free(m);
    return 0;
}
int * reservaMemoria(int f, int c){
    int *m = (int *)malloc(f*c*sizeof(int));
    return m;
}
void cargarMatriz(int *m, int f, int c){
    for (int i = 0; i<f; i++){
        for (int j = 0; j<c; j++){
            m[i*c + j] = i*c + j;
        }
    }
}
void imprimir (int * m, int f, int c){
    printf("\n");
    for (int i = 0; i<f; i++){
        for (int j = 0; j<c; j++){
            printf("%d ",m[i*c + j]);
        }
        printf("\n");
    }
}
