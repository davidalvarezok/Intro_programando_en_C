#include <stdio.h>
#include <stdlib.h>

int ** reservaMemoria(int,int);
void inicializar(int **,int,int);
void imprimir(int **,int,int);
void liberarMemoria(int **,int);
void multiplos(int **,int,int);
int main()
{
    int **mat, FIL, COL;
    printf("Ingrese cantidad de filas ");
    scanf("%d",&FIL);
    printf("Ingrese cantidad de columnas ");
    scanf("%d",&COL);
    mat = reservaMemoria(FIL,COL);
    inicializar(mat,FIL,COL);
    imprimir(mat,FIL,COL);
    multiplos(mat,FIL,COL);
    liberarMemoria(mat,FIL);
    return 0;
}
int ** reservaMemoria(int f, int c){
    int **m;
    m = (int **)malloc(f*sizeof(int *));
    for (int i=0; i<f; i++)
        m[i] = (int *)malloc(c*sizeof(int));
    return m;
}
void inicializar (int **m, int f, int c){ //Aunque obtenga una copia del puntero
    for (int i=0; i<f; i++){                //de puntero igual puedo modificar
        for (int j=0; j<f; j++){
            m[i][j] = i*c + j;
        }
    }
}
void imprimir (int **m, int f, int c){
    printf("\n");
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
void liberarMemoria(int **m, int f){
    for (int i=0; i<f; i++){
        free(m[i]);
    }
    free(m);
}
void multiplos (int ** m, int f, int c){
    printf("\nLas posiciones de  los valores multiplos de 3 son: \n");
    for (int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            if (m[i][j]%3 == 0 && m[i][j] != 0) {
                 printf("m[%d][%d] ",i,j);
            }
        }
    }
    printf("\n");
}
