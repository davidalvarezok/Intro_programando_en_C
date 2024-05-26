#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arch;
    long tamanio;

    arch = fopen("data", "rb");
    if (!arch){
        printf("No se puede abrir el archivo.\n");
        return 1;
    }
    fseek(arch,0,SEEK_END);
    tamanio = ftell(arch);
    printf("El tamanio del archivo en bytes es %ld\n",tamanio);
    fclose(arch);
    return 0;
}
