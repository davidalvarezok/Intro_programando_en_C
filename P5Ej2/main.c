#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *arch;
    arch = fopen("archivo.txt", "r");
    if (arch == NULL){
        fprintf(stdout, "Error al abrir el archivo!\n");
        return 1;
    }
    fprintf(stdout, "El archivo se abrio correctamente\n");
    /*fprintf(arch,"Este es mi primer archivo \n");
    fprintf(arch,"creado desde un programa en C.");*/

    char caracter;
    int minusculas = 0;
    int mayusculas = 0;
    int digitos = 0;

    while ((caracter = fgetc(arch)) != EOF){
        printf("caracter = %c\n",caracter);
        if (islower(caracter)){
            minusculas++;
            printf("Ingreso a min\n");
        } else if (isupper(caracter)){
            mayusculas++;
            printf("Ingreso a may\n");
        } else if (isdigit(caracter)){
            digitos++;
            printf("Ingreso a digito\n");
        }
    }
    fclose(arch);

    printf("La cantidad de letras minusculas es %d\n",minusculas);
    printf("La cantidad de letras mayusculas es %d\n",mayusculas);
    printf("La cantidad de digitos es %d\n",digitos);
    return 0;
}
