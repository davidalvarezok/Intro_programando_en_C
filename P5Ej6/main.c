#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256
#define M 8
int main()
{
    FILE *fuente, *destino;
    char palabra[N], *encabezado[M];
    float max[M], min[M], prom[M], sumatoria[M];
    //Inicializamos
    memset(prom,0,sizeof(prom));
    memset(sumatoria,0,sizeof(sumatoria));
    for (int i=0; i<M; i++){
        max[i] = -1;
        min[i] = 999;
    }

    fuente = fopen("vinos.csv", "r");
    destino = fopen("reporte_vinos.txt","w");
    if (!fuente){
        fputs("Error al abrir archivo de vinos\n",stdout);
        return 1;
    }
    if (!destino){
        printf("Error al crear archivo de destino\n");
        return 1;
    }
    //Procesar la primer fila por separado
    for (int i=0; i<M; i++){
        fscanf(fuente,"%[^;];",palabra);
        encabezado[i] = (char *)malloc((strlen(palabra)+1)*sizeof(char));
        strcpy(encabezado[i],palabra);
      //  printf("encabezado[%d] = %s\n",i,encabezado[i]);
    }

    fscanf(fuente,"%s\n",palabra);
    //printf("ultima palabra %s y nada mas\n",palabra);

    //Procesamos el resto del archivo
    float num; int campo = 0, total = 0;
    while (!feof(fuente)){
        //printf("Ingreso el while\n");
        if (campo < M){
            fscanf(fuente,"%f;",&num);
            //printf("El numero leido %f\n",num);
            if (min[campo] > num){
                min[campo] = num;
            }
            if (max[campo] < num){
                max[campo] = num;
            }
            sumatoria[campo] += num;
            campo++;
        } else {
            fscanf(fuente,"%s\n",palabra); //Descartamos
            //printf("La palabra que no sirve %s\n",palabra);
            campo = 0;
            total++; //Se proceso una fila
        }
    }
    //Calculamos el promedio
    for (int i=0; i<M; i++){
        prom[i] = sumatoria[i]/total;
    }
    //Informamos
//    for (int i=0; i<M; i++){
//        printf("Datos: maximo = %f minimo = %f promedio = %f\n",max[i],min[i],prom[i]);
//    }
    char *identificadores[] = {"Atributo","Promedio","Mínimo","Máximo"};
    for (int i=0; i<4; i++){
        switch(i){
            case 0:
                fprintf(destino,"%s\t",identificadores[i]);
                for (int j=0; j<M; j++){
                    fprintf(destino,"%s\t",encabezado[j]);
                }
                fprintf(destino,"%s","\n");
                break;
            case 1:
                fprintf(destino,"%s\t",identificadores[i]);
                for (int j=0; j<M; j++){
                    fprintf(destino,"%.2f\t\t",prom[j]);
                }
                fprintf(destino,"%s","\n");
                break;
            case 2:
                fprintf(destino,"%s\t",identificadores[i]);
                for (int j=0; j<M; j++){
                    fprintf(destino,"%.2f\t\t",min[j]);
                }
                fprintf(destino,"%s","\n");
                break;
            case 3:
                fprintf(destino,"%s\t",identificadores[i]);
                for (int j=0; j<M; j++){
                    fprintf(destino,"%.2f\t\t",max[j]);
                }
                fprintf(destino,"%s","\n");
                break;
            default:
                printf("No se pudo escribir en el archivo\n");
                break;
        }
    }
    fclose(fuente);
    fclose(destino);
    return 0;
}
