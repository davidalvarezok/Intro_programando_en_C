#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arch;
    int dato, mayor = 0, dia, cont = 0;

    arch = fopen("precipitaciones.txt", "r");
    if (arch == NULL){
        fprintf(stdout, "Error al abrir el archivo\n");
        return 1;
    }
    fscanf(arch,"%d-",&dato);
    while (!feof(arch)){
        cont++;
        if (dato > mayor){
            mayor = dato;
            dia = cont;
        }
        fscanf(arch,"%d-",&dato);
    }
//    while (fgets(linea,sizeof(linea),arch)){ //copia la primera linea del archivo de texto
//        char *token = strtok(linea,"-");
//        while (token != NULL){
//            int numero = atoi(token); //convierto a un numero entero
//            cont++;
//            if (numero > mayor){
//                mayor = numero;
//                dia = cont;
//            }
//            token = strtok(NULL, "-"); //obtener el siguiente token
//        }
//    }
    printf("El dia con mayor precipitacion es %d\n",dia);
    fclose(arch);
    return 0;
}
