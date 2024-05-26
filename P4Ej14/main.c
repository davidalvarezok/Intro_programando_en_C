#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **reservaMemoria(int);
void cargarMatriz(int **,int);
void imprimirMatriz(int **,int);
void liberarMemoria(int **,int);
int main()
{
    int n, **m;
    printf("Ingrese un numero entero ");
    scanf("%d", &n);
    m = reservaMemoria(n);
    cargarMatriz(m,n);
    imprimirMatriz(m,n);
    liberarMemoria(m,n);
    return 0;
}
int ** reservaMemoria(int n){
    int **m = (int **)malloc(n*sizeof(int *));
    for (int i = 0; i<n; i++){
        for (int j = 0; j<i+1; j++){
            m[i] = (int *)malloc((i+1)*sizeof(int));
        }
    }
    return m;
}
void cargarMatriz(int **m, int n){
    srand(time(NULL));
    for (int i = 0; i<n; i++){
        for (int j = 0; j<i+1; j++){
            m[i][j] = rand()%21;
//            m[i][j] = n*i+j;
        }
    }
}
void imprimirMatriz(int **m, int n){
    printf("\n");
    for (int i = 0; i<n; i++){
        for (int j = 0; j<i+1; j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
void liberarMemoria(int **m, int n){
    for (int i = 0; i<n; i++){
        free(m[i]);
    }
    free(m);
}
