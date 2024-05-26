#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define nPares(x,y) ((x % 2 == 0) + (y % 2 == 0))
//struct destino {
//    int codProv;
//    int codLoc;
//    char nomLoc[30];
//    int nHab;
//};
typedef struct nodo {
    int dato;
    struct nodo * siguiente;
} lista;
lista * liberar (lista * l);
void liberarMemoria(lista *l);
int main(/*int argc, char * argv[]*/)
{

    int n;
    printf("Ingrese el tamaño n de la matriz cuadrada a crear: ");
    scanf("%d",&n);
//    int ** mat;
//    mat = (int **)malloc(n*sizeof(int *));
//    for (int i=0; i<n; i++){
//        for (int j=0; j<(i+1); j++){
//            mat[i] = (int *)malloc((i+1)*sizeof(int));
//        }
//    }
//    if (argc == 5){
//        printf("%s %s %s %s\n",argv[1],argv[2],argv[3],argv[4]);
//    } else if (argc == 1) {
//        printf("Error no se recibio ninguna palabra\n");
//    } else {
//        printf("El numero de palabras recibido es insuficiente o demasiados\n");
//    }
//    FILE *archT, *archB;
//    char palabra[30], nom[30];
//    int n1, n2, cant, Loc, max = 0;
//    archT = fopen("Habitantes.txt", "r");
//    archB = fopen("Habitantes.dat", "wb");
//    if (!archT){
//        fputs("Error al abrir el archivo de texto\n", stdout);
//        return 1;
//    }
//    while (fscanf(archT,"%d%d%s%d",&n1,&n2,palabra,&cant) == 4){
//        printf("Datos: %d %d %s %d\n",n1,n2,palabra,cant);
//        if (cant > max){
//            max = cant;
//            Loc = n1; //Codigo de provincia
//            strcpy(nom,palabra);
//        }
//        struct destino data;
//        data.codProv = n1;
//        data.codLoc = n2;
//        strcpy(data.nomLoc,palabra);
//        data.nHab = cant;
//        fwrite(&data,sizeof(struct destino),1,archB);
//    }
//    printf("La ciudad con la mayor cantidad de habitantes %s con codigo de provincia %d\n",nom,Loc);
//    fclose(archT);
//    fclose(archB);
    return(0);
}
lista * liberar (lista * l){
    lista * act = l;
    l = l->siguiente;
    free(act);
    return l;
}
void liberarMemoria(lista *l){
    while (l != NULL){
        l = liberar(l);
    }
}
