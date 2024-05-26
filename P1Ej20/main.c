#include <stdio.h>
#include <stdlib.h>

int damePar(){
    static int contador = -2;
    return contador+=2;
}

int main()
{
    int n;
    printf("Ingrese un número entero positivo\n");
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        printf("%d\n",damePar());
    }
    return 0;
}
