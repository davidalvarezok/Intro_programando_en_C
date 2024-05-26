#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arch;
    char linea[20], **vec = NULL;
    arch = fopen("diccionario.txt", "r");
    if (!arch){
        puts("Error al abrir el archivo\n");
        return (1);
    }
    int longitud, cont = 1;
    while(fgets(linea,sizeof(linea),arch)){
        longitud = strcspn(linea,"\n");
        //fputs(linea,stdout);
        printf("La longitud de la palabra %d\n",longitud);
        vec = (char **)realloc(vec,cont*sizeof(char *));          //Reservo memoria (un puntero) para una palabra
        if (vec == NULL){
            printf("Error al asignar memoria para la palabra\n");
            return (1);
        }
        vec[cont-1] = (char *)malloc((longitud+1)*sizeof(char));  //Reservo memoria para la palabra (longitud)
        if (vec[cont-1] == NULL){
            printf("Error al asignar memoria para la palabra %d",cont-1);
            return (1);
        }
        strncpy(vec[cont-1],linea,longitud);
        vec[cont-1][longitud] = '\0';
        printf("%s en la pos %d\n",vec[cont-1],cont-1);                       //Copio el puntero de linea a puntero reservado
        cont++;
    }
    printf("Las palabras almacenadas\n");
    for (int i=0; i<(cont-1); i++){
        printf("%s\n",vec[i]);
    }
    printf("Ingrese una palabra para verificar: ");
    scanf("%s",linea);

    while (strcmp(linea,"ZZZ") != 0){
        int pos = 0;
        while (pos < (cont-1) && strcmp(vec[pos],linea) != 0){
            printf("se ingreso al while vec[%d] = %s\n",pos,vec[pos]);
            pos++;
        }
        printf("pos = %d y cont = %d\n",pos,cont-1);
        if (pos != (cont-1)){
            printf("La palabra se encuentra en el diccionario\n");
        } else if (pos == (cont-1)){
            printf("La palabra no se encuentra en el diccionario\n");
        }
        printf("Ingrese una palabra para verificar: ");
        scanf("%s",linea);
    }
    printf("Liberamos memoria\n");
    for (int i=0; i<(cont-1); i++){
        free(vec[i]);
    }
    free(vec);
    fclose(arch);
    return 0;
}
