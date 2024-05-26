#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[12]; int cant = 0;
    printf("Ingrese una palabra ");
    scanf("%s", palabra);
    while (strcmp(palabra, "ZZZ") != 0){
        if (strlen(palabra) == 5){
            cant++;
        }
        printf("Ingrese una palabra ");
        scanf("%s", palabra);
    }
    printf("La cantidad de palabras de long 5 es %d\n",cant);
    return 0;
}
