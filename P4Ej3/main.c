#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

void reserva (int **, int);
void inicializacion (int *, int, int *);
int main()
{
    int n, *ptr, i, max = -1;
    printf("Ingrese un valor entero ");
    scanf("%d",&n);
    reserva(&ptr,n);
    inicializacion(ptr,n,&max);
    for (i = 0; i<n; i++)
        printf("%d - ",*(ptr+i));
    printf("\nEl max numero ingresado %d",max);
    free(ptr);
    return 0;
}
void reserva (int **ptr, int n){
    *ptr = (int *)malloc(n*sizeof(int));
}
void inicializacion (int *ptr, int n, int * max){
    int i;
    srand(time(NULL));
    for (i = 0; i<n; i++){
        *(ptr+i) = rand()%10;
        if(*(ptr+i) >= *max){
            *max = *(ptr+i);
        }
    }
}
