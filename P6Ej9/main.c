#include <stdio.h>
#include <stdlib.h>
#include "imath.h"

int main()
{
    int valor;
    printf("Ingrese un numero entero: ");
    scanf("%d",&valor);
    while (valor != 0){
        if (valor%2 == 0){
            printf("%d = potencia %d\n",valor,potencia(valor,2));
            printf("%d = cubo %d\n",valor,cubo(valor));
        } else {
            printf("%d = factorial %d\n",valor,factorial(valor));
        }
        printf("Ingrese un numero entero: ");
        scanf("%d",&valor);
    }
    return 0;
}
