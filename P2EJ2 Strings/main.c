#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[12]; int n, cant = 0;
    printf("Ingrese una palabra ");
    scanf("%s", palabra);
    while (strcmp(palabra, "XXX") != 0){
        n = strlen(palabra);
        if (palabra[n-1] == 'o'){
            cant++;
        }
        printf("Ingrese una palabra ");
        scanf("%s", palabra);
    }
    printf("La cantidad de palabras que terminan en o %d\n",cant);
    return 0;
}
