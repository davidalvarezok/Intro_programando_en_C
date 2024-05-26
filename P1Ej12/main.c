#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for (int i=1; i<=10; i++){
        printf("Numero %d\n", i);
        printf("Raiz cuadrada %.3f\n", sqrt(i));
        printf("Cuadrado %d\n", (int)pow(i,2));
        printf("Cubo %d\n", (int)pow(i,3));
    }
    return 0;
}
