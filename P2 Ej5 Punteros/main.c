#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
void mostrar (int []);
int main()
{
    int vector[] = {1,2,3,4}; //int *ptr, *ptr2;
    mostrar (vector);
    printf("Hacer swap\n");
    for (int i = 0; i< 2; i++){
        /*ptr = &vector[i]; ptr2 = &vector[3-i];
        swap(ptr,ptr2);*/
        swap(&vector[i],&vector[3-i]);
    }
    mostrar(vector);
    return 0;
}
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a; // guarda el valor de a
    *a = *b; // almacena b en a
    *b = tmp; // almacena a en b
}
void mostrar(int v[]){
    for (int i= 0; i<4; i++){
        printf("v[%d]=%d\n",i,v[i]);
    }
}

