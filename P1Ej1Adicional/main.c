#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paises[14];
    int especies[14];
    int menor1, menor2, p1, p2, mayor = 0;
    for (int i=0; i<14; i++){
        printf("Ingrese el codigo de pais: ");
        scanf("%d", &paises[i]);
        printf("Ingrese la cantidad de especies: ");
        scanf("%d", &especies[i]);
        printf("Se ingreso %d %d \n",especies[i], paises[i]);
    }

    menor1 = especies[0]; p1 = paises[0];
    menor2 = especies[1]; p2= paises[1];
    for (int i=0; i<14; i++){
        if (especies[i] < menor1){
            menor2 = menor1;
            p2 = p1;
            menor1 = especies[i];
            p1 = paises[i];
        } else if (especies[i] < menor2){
            menor2 = especies[i];
            p2 = paises[i];
        }
        if (especies[i] > 40){
            mayor++;
        }
    }
    printf("El porcentaje de paises con mas de 40 especies %.2f\n", (float)mayor/14*100);
    printf("La paises con menor cantidad de especies son %d con %d y %d con %d", p1,menor1,p2,menor2);
    return 0;
}
