#include <stdio.h>
#include <stdlib.h>

void analizar(int *,int,int *);
void imprimir(int *,int,int);
int main()
{
    int n, *v, dim = 0;
    v = (int *)malloc(sizeof(int)); //un elemento
    printf("Ingrese un numero estero ");
    scanf("%d",&n);
    analizar(v,n,&dim);
    imprimir(v,n,dim);
    free(v);
    return 0;
}
void analizar(int *v, int n, int *dim){
    for (int i = 1; i<=n; i++){
        if (n%i == 0){
            if (*dim == 0){
                *(v+(*dim)) = i;
                (*dim)++;
            }
            else if (*dim != 0){
                v = (int *)realloc(v,((*dim)+1)*sizeof(int)); //le agrego un espacio +
                *(v+(*dim)) = i;
                (*dim)++;
            }
        }
    }
}
void imprimir (int *v, int n, int dim){
    printf("El numero %d es divisible por: ",n);
    for (int i=0; i<dim; i++){
        printf("%d ", v[i]);
    }
}
