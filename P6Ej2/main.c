#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int n, total = 0;
    if (argc != 5){
        printf("El numero de parametros es insuficientes o demasiados\n");
    } else {
        for (int i= 1; i<=4; i++){
            n = atoi(argv[i]);
            total+=n;
        }
        printf("El promedio de los numeros es %.1f\n",(float)total);
    }
    return 0;
}
