#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256

int main()
{
    FILE *archivo1, *archivo2;
    char linea[N];
    //char carac;
    archivo1 = fopen("Preambulo.txt", "rb");
    archivo2 = fopen("PreambuloNuevo.txt", "wb");
    if (!archivo1 && !archivo2){
        printf("Error al abrir los archivos\n");
        return 1;
    }
    //copiar con fgetc y fputc | copiar con fgets y fputs | copiar con fread y fwrite
//    carac = fgetc(archivo1);
//    while (!feof(archivo1)){
//        fputc(carac,archivo2);
//        carac = fgetc(archivo1);
//    }
//    fgets(linea,N,archivo1);
//    while (!feof(archivo1)){
//        fputs(linea,archivo2);
//        fgets(linea,N,archivo1);
//    }
//    if (linea != NULL){
//        fputs(linea,archivo2);
//    }
    int leidos = fread(linea,sizeof(char),N,archivo1);
    while (!feof(archivo1)){
        printf("bytes leidos %d\n",leidos);
        fwrite(linea,sizeof(char),leidos,archivo2);
        leidos = fread(linea,sizeof(char),N,archivo1);
    }
    if (linea != NULL){
        fwrite(linea,sizeof(char),leidos,archivo2);
    }
    fclose(archivo1);
    fclose(archivo2);
    printf("Hello world!\n");
    return 0;
}
