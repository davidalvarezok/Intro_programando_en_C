#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[50], pares = 0, impares = 0;
    for (int i=0; i<50; i++){
        vector[i] = rand();
        if (i%2 == 0){
            if (vector[i]%2 != 0)
                impares++;
        }
        else {
            if (vector[i]%2 == 0)
                pares++;
        }
    }
    printf("El numero de impares en las pos. pares: %d el numero de pares en las pos. impares: %d",pares,impares);
    return 0;
}
