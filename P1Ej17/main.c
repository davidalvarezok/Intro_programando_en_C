#include <stdio.h>
#include <stdlib.h>

void selec (int n) {
    float valor,a=-1, b=99;
    for (int i=1; i<=n; i++){
        printf("Ingrese un numero %d\n",i);
//        fflush(stdin);
        scanf("%f",&valor);
        printf("Se leyo el numero %f\n",valor);
        if (valor > a){
            a = valor;
        }
        if (valor < b){
            b = valor;
        }
    }
    printf("El max numero %.3f\n", a);
    printf("El min numero %.3f\n", b);
}

int main()
{
    int n = 3;
    selec(n);
    return 0;
}

