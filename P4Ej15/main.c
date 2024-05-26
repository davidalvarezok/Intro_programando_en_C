#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **reservaMemoria(int);
void cargarMatriz(int **,int);
void imprimirMatriz(int **,int);
void liberarMemoria(int **,int);
int calcularCoeficienteBinomial(int,int);
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
    for (int i = 0; i<n; i++){
        for (int j = 0; j<=i; j++){
            m[i][j] = calcularCoeficienteBinomial(i,j);
        }
    }
}
void imprimirMatriz(int **m, int n){
    printf("\n");
    for (int i = 0; i<n; i++){
        for (int espacio = 0; espacio <n-i; espacio++){
            printf(" ");
        }
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
int calcularCoeficienteBinomial(int n, int k){
    if (k == 0 || k == n)
        return 1;
    return calcularCoeficienteBinomial(n-1,k-1) + calcularCoeficienteBinomial(n-1,k);
}
